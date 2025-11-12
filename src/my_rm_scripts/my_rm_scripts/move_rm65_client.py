import rclpy
from rclpy.action import ActionClient
from rclpy.node import Node
from moveit_msgs.action import MoveGroup
from moveit_msgs.msg import MotionPlanRequest, Constraints, JointConstraint, PositionConstraint, OrientationConstraint, BoundingVolume
from geometry_msgs.msg import PoseStamped, Pose
from shape_msgs.msg import SolidPrimitive
from tf_transformations import quaternion_from_euler
import math

class MoveRm65ActionClient(Node):

    def __init__(self):
        super().__init__('move_rm65_action_client')
        self.get_logger().info("节点 'move_rm65_action_client' 已启动")
        
        # !! 修正 1: 根据您的日志，规划组是 'rm_group'
        self.PLANNING_GROUP = "rm_group" 
        
        self.BASE_FRAME = "base_link" 

        self._action_client = ActionClient(self, MoveGroup, '/move_action')
        
        self.get_logger().info("等待 /move_action 服务...")
        self._action_client.wait_for_server()
        self.get_logger().info("/move_action 服务已连接")
        
        self.execute_goals()

    def create_pose_goal(self, x, y, z, roll, pitch, yaw):
        """
        辅助函数：根据 XYZ 和 RPY (欧拉角) 创建一个 PoseStamped 目标
        """
        pose_goal = PoseStamped()
        pose_goal.header.frame_id = self.BASE_FRAME
        pose_goal.header.stamp = self.get_clock().now().to_msg()
        
        pose_goal.pose.position.x = x
        pose_goal.pose.position.y = y
        pose_goal.pose.position.z = z

        q = quaternion_from_euler(math.radians(roll), math.radians(pitch), math.radians(yaw))
        pose_goal.pose.orientation.x = q[0]
        pose_goal.pose.orientation.y = q[1]
        pose_goal.pose.orientation.z = q[2]
        pose_goal.pose.orientation.w = q[3]
        
        return pose_goal

    def send_goal(self, pose_stamped_goal):
        """
        发送一个运动规划目标
        """
        goal_msg = MoveGroup.Goal()
        
        request = MotionPlanRequest()
        request.group_name = self.PLANNING_GROUP
        request.num_planning_attempts = 10
        request.allowed_planning_time = 10.0
        request.planner_id = "RRTConnect" 
        
        constraints = Constraints()
        
        # 位置约束
        pos_constraint = PositionConstraint()
        pos_constraint.header.frame_id = self.BASE_FRAME
        
        # !! 修正 2: 根据您的日志，末端连杆是 'Link6' (大写L)
        pos_constraint.link_name = "Link6" 
        pos_constraint.weight = 1.0
        
        box = SolidPrimitive()
        box.type = SolidPrimitive.BOX
        box.dimensions = [0.01, 0.01, 0.01] 
        
        pos_constraint.constraint_region.primitives.append(box)
        pos_constraint.constraint_region.primitive_poses.append(pose_stamped_goal.pose)
        
        # 方向约束
        orient_constraint = OrientationConstraint()
        orient_constraint.header.frame_id = self.BASE_FRAME
        
        # !! 修正 2: 根据您的日志，末端连杆是 'Link6' (大写L)
        orient_constraint.link_name = "Link6" 
        orient_constraint.orientation = pose_stamped_goal.pose.orientation
        orient_constraint.absolute_x_axis_tolerance = 0.1 
        orient_constraint.absolute_y_axis_tolerance = 0.1
        orient_constraint.absolute_z_axis_tolerance = 0.1
        orient_constraint.weight = 1.0

        constraints.position_constraints.append(pos_constraint)
        constraints.orientation_constraints.append(orient_constraint)
        
        request.goal_constraints.append(constraints)
        goal_msg.request = request
        
        self.get_logger().info(f"发送目标: P({pose_stamped_goal.pose.position.x:.2f}, {pose_stamped_goal.pose.position.y:.2f}, {pose_stamped_goal.pose.position.z:.2f})")
        
        self._send_goal_future = self._action_client.send_goal_async(
            goal_msg,
            feedback_callback=self.feedback_callback
        )
        
        self._send_goal_future.add_done_callback(self.goal_response_callback)

    def feedback_callback(self, feedback_msg):
        feedback = feedback_msg.feedback
        pass 

    def goal_response_callback(self, future):
        goal_handle = future.result()
        if not goal_handle.accepted:
            self.get_logger().error("目标被拒绝 :(")
            # 检查是否还有下一个目标
            if self.goals_to_execute:
                self.get_logger().info("尝试下一个目标...")
                next_goal = self.goals_to_execute.pop(0)
                self.send_goal(next_goal)
            else:
                self.get_logger().info("所有目标尝试完毕，关闭节点。")
                rclpy.shutdown()
            return

        self.get_logger().info("目标已接受 :)")

        self._get_result_future = goal_handle.get_result_async()
        self._get_result_future.add_done_callback(self.get_result_callback)

    def get_result_callback(self, future):
        result = future.result().result
        if result.error_code.val == 1: # 1 == SUCCESS
            self.get_logger().info("运动成功!")
        else:
            self.get_logger().error(f"运动失败，错误代码: {result.error_code.val}")

        # 检查是否还有下一个目标
        if self.goals_to_execute:
            # 执行列表中的下一个目标
            next_goal = self.goals_to_execute.pop(0)
            self.send_goal(next_goal)
        else:
            self.get_logger().info("所有目标执行完毕，关闭节点。")
            rclpy.shutdown()

    def execute_goals(self):
        """
        定义要执行的目标点列表
        """
        # (X, Y, Z, Roll, Pitch, Yaw)
        goal_a_coords = (0.3, 0.1, 0.4, 180.0, 0.0, 0.0) 
        goal_b_coords = (0.1, 0.3, 0.5, 180.0, 0.0, 90.0)

        goal_a = self.create_pose_goal(*goal_a_coords)
        goal_b = self.create_pose_goal(*goal_b_coords)
        
        self.goals_to_execute = [goal_a, goal_b]
        
        first_goal = self.goals_to_execute.pop(0)
        self.send_goal(first_goal)


def main(args=None):
    rclpy.init(args=args)
    action_client = MoveRm65ActionClient()
    rclpy.spin(action_client) 

if __name__ == '__main__':
    main()