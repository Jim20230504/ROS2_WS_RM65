// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rm_ros_interfaces:msg/Stop.idl
// generated code does not contain a copyright notice

#ifndef RM_ROS_INTERFACES__MSG__DETAIL__STOP__STRUCT_H_
#define RM_ROS_INTERFACES__MSG__DETAIL__STOP__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/Stop in the package rm_ros_interfaces.
typedef struct rm_ros_interfaces__msg__Stop
{
  /// true: 急停 false:恢复
  bool state;
} rm_ros_interfaces__msg__Stop;

// Struct for a sequence of rm_ros_interfaces__msg__Stop.
typedef struct rm_ros_interfaces__msg__Stop__Sequence
{
  rm_ros_interfaces__msg__Stop * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rm_ros_interfaces__msg__Stop__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RM_ROS_INTERFACES__MSG__DETAIL__STOP__STRUCT_H_
