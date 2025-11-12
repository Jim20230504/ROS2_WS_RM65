// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rm_ros_interfaces:msg/Toolsoftwareversionv4.idl
// generated code does not contain a copyright notice

#ifndef RM_ROS_INTERFACES__MSG__DETAIL__TOOLSOFTWAREVERSIONV4__STRUCT_H_
#define RM_ROS_INTERFACES__MSG__DETAIL__TOOLSOFTWAREVERSIONV4__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'tool_version'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/Toolsoftwareversionv4 in the package rm_ros_interfaces.
typedef struct rm_ros_interfaces__msg__Toolsoftwareversionv4
{
  /// 末端版本
  rosidl_runtime_c__String tool_version;
  /// 查询状态，成功返回true,失败返回false
  bool state;
} rm_ros_interfaces__msg__Toolsoftwareversionv4;

// Struct for a sequence of rm_ros_interfaces__msg__Toolsoftwareversionv4.
typedef struct rm_ros_interfaces__msg__Toolsoftwareversionv4__Sequence
{
  rm_ros_interfaces__msg__Toolsoftwareversionv4 * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rm_ros_interfaces__msg__Toolsoftwareversionv4__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RM_ROS_INTERFACES__MSG__DETAIL__TOOLSOFTWAREVERSIONV4__STRUCT_H_
