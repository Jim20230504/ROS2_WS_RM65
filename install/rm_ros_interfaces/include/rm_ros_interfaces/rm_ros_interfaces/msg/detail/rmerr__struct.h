// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rm_ros_interfaces:msg/Rmerr.idl
// generated code does not contain a copyright notice

#ifndef RM_ROS_INTERFACES__MSG__DETAIL__RMERR__STRUCT_H_
#define RM_ROS_INTERFACES__MSG__DETAIL__RMERR__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'err'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/Rmerr in the package rm_ros_interfaces.
typedef struct rm_ros_interfaces__msg__Rmerr
{
  uint8_t err_len;
  rosidl_runtime_c__int32__Sequence err;
} rm_ros_interfaces__msg__Rmerr;

// Struct for a sequence of rm_ros_interfaces__msg__Rmerr.
typedef struct rm_ros_interfaces__msg__Rmerr__Sequence
{
  rm_ros_interfaces__msg__Rmerr * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rm_ros_interfaces__msg__Rmerr__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RM_ROS_INTERFACES__MSG__DETAIL__RMERR__STRUCT_H_
