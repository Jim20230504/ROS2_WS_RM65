// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rm_ros_interfaces:msg/Mastername.idl
// generated code does not contain a copyright notice

#ifndef RM_ROS_INTERFACES__MSG__DETAIL__MASTERNAME__STRUCT_H_
#define RM_ROS_INTERFACES__MSG__DETAIL__MASTERNAME__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'master_name'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/Mastername in the package rm_ros_interfaces.
typedef struct rm_ros_interfaces__msg__Mastername
{
  /// 主站名称
  rosidl_runtime_c__String master_name;
} rm_ros_interfaces__msg__Mastername;

// Struct for a sequence of rm_ros_interfaces__msg__Mastername.
typedef struct rm_ros_interfaces__msg__Mastername__Sequence
{
  rm_ros_interfaces__msg__Mastername * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rm_ros_interfaces__msg__Mastername__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RM_ROS_INTERFACES__MSG__DETAIL__MASTERNAME__STRUCT_H_
