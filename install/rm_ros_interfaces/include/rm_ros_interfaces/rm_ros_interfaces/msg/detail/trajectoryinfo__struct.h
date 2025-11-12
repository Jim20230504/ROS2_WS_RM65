// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rm_ros_interfaces:msg/Trajectoryinfo.idl
// generated code does not contain a copyright notice

#ifndef RM_ROS_INTERFACES__MSG__DETAIL__TRAJECTORYINFO__STRUCT_H_
#define RM_ROS_INTERFACES__MSG__DETAIL__TRAJECTORYINFO__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'name'
// Member 'create_time'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/Trajectoryinfo in the package rm_ros_interfaces.
typedef struct rm_ros_interfaces__msg__Trajectoryinfo
{
  /// 轨迹名称
  rosidl_runtime_c__String name;
  /// 创建时间
  rosidl_runtime_c__String create_time;
  /// 轨迹点数量
  int32_t point_num;
  /// 查询状态 成功true 失败false
  bool state;
} rm_ros_interfaces__msg__Trajectoryinfo;

// Struct for a sequence of rm_ros_interfaces__msg__Trajectoryinfo.
typedef struct rm_ros_interfaces__msg__Trajectoryinfo__Sequence
{
  rm_ros_interfaces__msg__Trajectoryinfo * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rm_ros_interfaces__msg__Trajectoryinfo__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RM_ROS_INTERFACES__MSG__DETAIL__TRAJECTORYINFO__STRUCT_H_
