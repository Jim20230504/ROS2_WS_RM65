// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rm_ros_interfaces:msg/Sendproject.idl
// generated code does not contain a copyright notice

#ifndef RM_ROS_INTERFACES__MSG__DETAIL__SENDPROJECT__STRUCT_H_
#define RM_ROS_INTERFACES__MSG__DETAIL__SENDPROJECT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'project_path'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/Sendproject in the package rm_ros_interfaces.
typedef struct rm_ros_interfaces__msg__Sendproject
{
  /// 下发文件路径文件名
  rosidl_runtime_c__String project_path;
  /// 名称长度
  int32_t project_path_len;
  /// 规划速度比例系数
  int32_t plan_speed;
  /// 0-保存并运行文件，1-仅保存文件，不运行
  int32_t only_save;
  /// 保存到控制器中的编号
  int32_t save_id;
  /// 设置单步运行方式模式，1-设置单步模式 0-设置正常运动模式
  int32_t step_flag;
  /// 设置默认在线编程文件，1-设置默认  0-设置非默认
  int32_t auto_start;
  /// 下发文件类型。0-在线编程文件，1-拖动示教轨迹文件
  int32_t project_type;
} rm_ros_interfaces__msg__Sendproject;

// Struct for a sequence of rm_ros_interfaces__msg__Sendproject.
typedef struct rm_ros_interfaces__msg__Sendproject__Sequence
{
  rm_ros_interfaces__msg__Sendproject * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rm_ros_interfaces__msg__Sendproject__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RM_ROS_INTERFACES__MSG__DETAIL__SENDPROJECT__STRUCT_H_
