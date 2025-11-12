// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rm_ros_interfaces:msg/RobotInfo.idl
// generated code does not contain a copyright notice

#ifndef RM_ROS_INTERFACES__MSG__DETAIL__ROBOT_INFO__STRUCT_H_
#define RM_ROS_INTERFACES__MSG__DETAIL__ROBOT_INFO__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/RobotInfo in the package rm_ros_interfaces.
/**
  * 机械臂自由度（关节数量）
 */
typedef struct rm_ros_interfaces__msg__RobotInfo
{
  uint8_t arm_dof;
  /// 机械臂型号
  /// 示例：0=RM_65, 1=RM_75, 2=RML_63I(已弃用), 3=RML_63II,4=RML_63III,5=ECO_65,6=ECO_62,7=GEN_72,8=ECO63,9=通用机器人
  uint8_t arm_model;
  /// 末端力传感器版本
  /// 示例：0=标准版, 1=一维力版, 2=六维力版, 3=一体化六维力版
  uint8_t force_type;
  /// 机械臂控制器版本（3：三代，4：四代）
  uint8_t robot_controller_version;
  /// 是否读取成功
  bool state;
} rm_ros_interfaces__msg__RobotInfo;

// Struct for a sequence of rm_ros_interfaces__msg__RobotInfo.
typedef struct rm_ros_interfaces__msg__RobotInfo__Sequence
{
  rm_ros_interfaces__msg__RobotInfo * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rm_ros_interfaces__msg__RobotInfo__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RM_ROS_INTERFACES__MSG__DETAIL__ROBOT_INFO__STRUCT_H_
