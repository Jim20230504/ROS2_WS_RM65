# 导入ROS 2核心库（必须导入，用于初始化节点、spin循环等基础功能）
import rclpy
# 导入ROS 2动作客户端相关类（用于与MoveGroup动作服务通信）
from rclpy.action import ActionClient
# 导入ROS 2节点基类（所有自定义节点都需继承此类）
from rclpy.node import Node
# 导入MoveIt的MoveGroup动作类型（机械臂运动规划的核心动作接口）
from moveit_msgs.action import MoveGroup
# 导入MoveIt运动规划所需的消息类型：
# MotionPlanRequest：运动规划请求的核心数据结构
# Constraints：约束集合（包含位置、姿态等约束）
# PositionConstraint：位置约束（限制末端执行器的位置范围）
# OrientationConstraint：姿态约束（限制末端执行器的姿态范围）
# BoundingVolume：约束区域（用于定义位置约束的空间范围）
from moveit_msgs.msg import MotionPlanRequest, Constraints, PositionConstraint, OrientationConstraint, BoundingVolume
# 导入几何消息类型：
# PoseStamped：带坐标系和时间戳的姿态（运动规划目标的标准格式）
# Pose：姿态（包含位置xyz和姿态四元数xyzw）
from geometry_msgs.msg import PoseStamped, Pose
# 导入形状消息类型（用于定义位置约束的空间形状，此处用立方体）
from shape_msgs.msg import SolidPrimitive
# 导入欧拉角转四元数的工具（机械臂姿态常用欧拉角描述，MoveIt需四元数格式）
from tf_transformations import quaternion_from_euler
# 导入数学库（用于角度转换等计算）
import math

# 定义自定义动作客户端类，继承自ROS 2的Node基类
class MoveRm65ActionClient(Node):

    # 类的初始化方法（节点启动时自动执行）
    def __init__(self):
        # 调用父类Node的初始化方法，节点名称为'move_rm65_action_client'（唯一标识节点）
        super().__init__('move_rm65_action_client')
        # 输出日志：节点启动成功（ROS 2日志系统，便于调试）
        self.get_logger().info("节点 'move_rm65_action_client' 已启动")
        
        # 定义机械臂的规划组名称（从move_group日志中确认，必须与MoveIt配置一致，否则无法规划）
        self.PLANNING_GROUP = "rm_group" 
        
        # 定义目标点的参考坐标系
        # MoveIt默认使用world作为全局参考系，统一坐标系后规划逻辑一致
        self.BASE_FRAME = "world" 

        # 创建动作客户端：
        # 参数1：当前节点实例（self）
        # 参数2：动作类型（MoveGroup，MoveIt的标准动作）
        # 参数3：动作服务名称（'/move_action'，与MoveGroup节点提供的服务名一致）
        self._action_client = ActionClient(self, MoveGroup, '/move_action')
        
        # 输出日志：等待/move_action服务启动（MoveGroup节点启动后才会提供该服务）
        self.get_logger().info("等待 /move_action 服务...")
        # 阻塞等待服务连接，直到服务可用（避免服务未启动时发送目标导致失败）
        self._action_client.wait_for_server()
        # 输出日志：服务连接成功（此时可发送运动目标）
        self.get_logger().info("/move_action 服务已连接")
        
        # 调用自定义方法，执行预设的目标点列表
        self.execute_goals()

    # 辅助函数：根据XYZ位置和RPY欧拉角，创建PoseStamped类型的目标姿态
    # 输入参数：x/y/z（位置，单位m）、roll/pitch/yaw（姿态，单位度）
    def create_pose_goal(self, x, y, z, roll, pitch, yaw):
        """
        辅助函数：根据 XYZ 和 RPY (欧拉角) 创建一个 PoseStamped 目标
        """
        # 初始化PoseStamped对象（带坐标系和时间戳的姿态，MoveIt要求的目标格式）
        pose_goal = PoseStamped()
        # 设置目标姿态的参考坐标系（必须与机器人状态的参考系一致，此处为world）
        pose_goal.header.frame_id = self.BASE_FRAME
        # 设置时间戳为当前节点时间（确保数据时效性，避免过期数据被忽略）
        pose_goal.header.stamp = self.get_clock().now().to_msg()
        
        # 赋值目标位置（xyz坐标，单位米）
        pose_goal.pose.position.x = x
        pose_goal.pose.position.y = y
        pose_goal.pose.position.z = z

        # 欧拉角转四元数：
        # 1. math.radians()：将角度（度）转换为弧度（计算机视觉/机器人中标准单位）
        # 2. quaternion_from_euler()：将roll（滚转）、pitch（俯仰）、yaw（偏航）转换为四元数
        # 原因：欧拉角存在万向锁问题，四元数是机器人姿态的标准表示方式
        q = quaternion_from_euler(math.radians(roll), math.radians(pitch), math.radians(yaw))
        # 赋值目标姿态（四元数xyzw，确保姿态无歧义）
        pose_goal.pose.orientation.x = q[0]
        pose_goal.pose.orientation.y = q[1]
        pose_goal.pose.orientation.z = q[2]
        pose_goal.pose.orientation.w = q[3]
        
        # 返回创建好的目标姿态（供send_goal方法使用）
        return pose_goal

    # 核心方法：向MoveGroup服务发送运动规划目标
    # 输入参数：pose_stamped_goal（create_pose_goal创建的目标姿态）
    def send_goal(self, pose_stamped_goal):
        """
        发送一个运动规划目标（优化规划参数和约束条件）
        移除ROS 2不支持的 allow_replanning 等无效参数
        """
        # 初始化MoveGroup动作的目标消息（符合MoveGroup.action定义的格式）
        goal_msg = MoveGroup.Goal()
        
        # 初始化运动规划请求对象（包含规划的核心参数）
        request = MotionPlanRequest()
        # 指定规划组（必须与self.PLANNING_GROUP一致，告诉MoveIt要控制哪个机械臂组）
        request.group_name = self.PLANNING_GROUP
        # 规划尝试次数：从10次增加到20次（提升找到有效路径的概率，尤其复杂场景）
        request.num_planning_attempts = 20
        # 允许规划时间：从10秒延长到20秒（给规划器更多时间搜索路径，避免超时失败）
        request.allowed_planning_time = 20.0
        # 规划器类型：从RRTConnect改为RRTstar（RRTstar支持路径优化，边界目标点/狭窄空间更易成功）
        request.planner_id = "RRTstar"
        
        # 初始化约束集合（用于限制机械臂运动的约束条件）
        constraints = Constraints()
        
        # 构建位置约束（限制末端执行器的位置范围）
        pos_constraint = PositionConstraint()
        # 位置约束的参考坐标系（与目标姿态一致，确保约束有效）
        pos_constraint.header.frame_id = self.BASE_FRAME
        # 约束作用的连杆：末端连杆Link6（从move_group日志中确认，必须与URDF配置一致）
        pos_constraint.link_name = "Link6"
        # 约束权重：1.0表示强制满足（0~1之间，0表示不强制）
        pos_constraint.weight = 1.0
        
        # 定义位置约束的空间形状：立方体（SolidPrimitive.BOX）
        box = SolidPrimitive()
        box.type = SolidPrimitive.BOX
        # 立方体尺寸：[0.05, 0.05, 0.05]（单位m），表示位置公差±5cm
        # 优化逻辑：原1cm公差过严，机械臂难以精确满足，宽松后降低规划难度
        box.dimensions = [0.05, 0.05, 0.05]
        
        # 将立方体形状添加到约束区域（约束末端执行器必须在该立方体内）
        pos_constraint.constraint_region.primitives.append(box)
        # 立方体的中心位置：即目标姿态的位置（末端执行器需到达该中心附近±5cm范围）
        pos_constraint.constraint_region.primitive_poses.append(pose_stamped_goal.pose)
        
        # 构建姿态约束（限制末端执行器的姿态范围）
        orient_constraint = OrientationConstraint()
        # 姿态约束的参考坐标系（与位置约束一致，确保约束统一）
        orient_constraint.header.frame_id = self.BASE_FRAME
        # 约束作用的连杆：与位置约束一致，均为末端连杆Link6
        orient_constraint.link_name = "Link6"
        # 目标姿态（即create_pose_goal转换后的四元数）
        orient_constraint.orientation = pose_stamped_goal.pose.orientation
        # 姿态公差：X/Y/Z轴各±0.3弧度（约17度）
        # 优化逻辑：原0.1弧度（≈5.7度）过严，宽松后提升规划灵活性，不影响核心功能
        orient_constraint.absolute_x_axis_tolerance = 0.3
        orient_constraint.absolute_y_axis_tolerance = 0.3
        orient_constraint.absolute_z_axis_tolerance = 0.3
        # 约束权重：1.0表示强制满足
        orient_constraint.weight = 1.0

        # 将位置约束添加到约束集合
        constraints.position_constraints.append(pos_constraint)
        # 将姿态约束添加到约束集合
        constraints.orientation_constraints.append(orient_constraint)
        
        # 将约束集合添加到规划请求（告诉MoveIt规划时需满足这些约束）
        request.goal_constraints.append(constraints)
        # 将规划请求赋值给动作目标消息
        goal_msg.request = request
        
        # 输出日志：打印当前发送的目标位置（便于调试，确认目标是否正确）
        self.get_logger().info(
            f"发送目标: P({pose_stamped_goal.pose.position.x:.2f}, "
            f"{pose_stamped_goal.pose.position.y:.2f}, "
            f"{pose_stamped_goal.pose.position.z:.2f})"
        )
        
        # 异步发送运动目标：
        # 1. send_goal_async()：非阻塞发送，不影响节点其他逻辑
        # 2. feedback_callback：指定反馈回调函数（运动过程中接收规划/执行反馈）
        self._send_goal_future = self._action_client.send_goal_async(
            goal_msg,
            feedback_callback=self.feedback_callback
        )
        
        # 为目标发送结果添加回调函数（当服务响应"目标是否被接受"时触发）
        self._send_goal_future.add_done_callback(self.goal_response_callback)

    # 反馈回调函数：接收MoveGroup服务的实时反馈（如规划进度、执行状态）
    def feedback_callback(self, feedback_msg):
        """反馈回调函数（可选：添加日志输出）"""
        # 获取反馈数据（包含规划时间、路径长度等信息）
        feedback = feedback_msg.feedback
        # 可选日志：打印规划进度（注释未启用，需调试时可解开）
        # self.get_logger().info(f"规划进度: {feedback.planning_time:.2f}秒")

    # 目标响应回调函数：处理服务对"目标是否被接受"的响应
    def goal_response_callback(self, future):
        # 获取目标处理结果（future是异步调用的返回对象，result()获取实际结果）
        goal_handle = future.result()
        # 判断目标是否被服务拒绝（如规划组错误、约束无效等）
        if not goal_handle.accepted:
            self.get_logger().error("目标被拒绝 :(")
            # 检查是否还有未执行的目标点
            if self.goals_to_execute:
                self.get_logger().info("尝试下一个目标...")
                # 取出下一个目标点并发送
                next_goal = self.goals_to_execute.pop(0)
                self.send_goal(next_goal)
            else:
                # 无更多目标，关闭节点
                self.get_logger().info("所有目标尝试完毕，关闭节点。")
                rclpy.shutdown()
            return

        # 目标被接受，输出日志
        self.get_logger().info("目标已接受 :)")

        # 异步获取运动结果（等待规划+执行完成后返回结果）
        self._get_result_future = goal_handle.get_result_async()
        # 为结果获取添加回调函数（运动完成后触发，处理成功/失败）
        self._get_result_future.add_done_callback(self.get_result_callback)

    # 结果回调函数：处理运动规划+执行的最终结果
    def get_result_callback(self, future):
        # 获取结果数据（包含错误代码、路径等信息）
        result = future.result().result
        # 判断运动是否成功：MoveIt错误代码中1表示SUCCESS（成功）
        if result.error_code.val == 1:
            self.get_logger().info("运动成功!")
        else:
            # 运动失败，输出错误代码（可参考注释链接查询错误原因）
            self.get_logger().error(f"运动失败，错误代码: {result.error_code.val}")
            # 错误代码参考：ROS 2 Humble的MoveIt错误代码文档
            # https://docs.ros.org/en/humble/api/moveit_msgs/html/msg/MoveItErrorCodes.html

        # 检查是否还有未执行的目标点
        if self.goals_to_execute:
            # 取出下一个目标点并发送
            next_goal = self.goals_to_execute.pop(0)
            self.send_goal(next_goal)
        else:
            # 无更多目标，关闭节点
            self.get_logger().info("所有目标执行完毕，关闭节点。")
            rclpy.shutdown()

    # 自定义方法：定义要执行的目标点列表，初始化后触发第一个目标
    def execute_goals(self):
        """
        定义要执行的目标点列表（优化第二个目标点为可达位置）
        格式：(X, Y, Z, Roll, Pitch, Yaw)
        """
        # 第一个目标点（原成功点，保留不变）：位置(0.3,0.1,0.4)，姿态(180,0,0)度
        goal_a_coords = (0.3, 0.1, 0.4, 180.0, 0.0, 0.0) 
        # 第二个目标点（优化后）：Y轴从0.3→0.2，Z轴从0.5→0.45
        # 优化逻辑：原目标可能超出机械臂工作空间，调整为更保守的可达位置
        goal_b_coords = (0.3, 0.2, 0.45, 180.0, 0.0, 0.0)

        # 调用create_pose_goal，将坐标转换为MoveIt支持的PoseStamped类型
        goal_a = self.create_pose_goal(*goal_a_coords)
        goal_b = self.create_pose_goal(*goal_b_coords)
        
        # 构建目标队列（按顺序执行：先goal_a，后goal_b）
        self.goals_to_execute = [goal_a, goal_b]
        
        # 取出第一个目标点，调用send_goal发送（启动运动流程）
        first_goal = self.goals_to_execute.pop(0)
        self.send_goal(first_goal)

# 主函数（程序入口）
def main(args=None):
    # 初始化ROS 2上下文（必须调用，初始化ROS 2核心功能）
    rclpy.init(args=args)
    # 创建自定义动作客户端实例（触发__init__方法，启动节点）
    action_client = MoveRm65ActionClient()
    # 自旋节点（阻塞当前线程，保持节点运行，直到rclpy.shutdown()被调用）
    rclpy.spin(action_client) 

# 程序入口判断（当脚本直接运行时执行main函数）
if __name__ == '__main__':
    main()
