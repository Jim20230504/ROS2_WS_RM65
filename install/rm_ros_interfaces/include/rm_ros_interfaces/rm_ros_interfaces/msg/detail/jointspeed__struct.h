// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rm_ros_interfaces:msg/Jointspeed.idl
// generated code does not contain a copyright notice

#ifndef RM_ROS_INTERFACES__MSG__DETAIL__JOINTSPEED__STRUCT_H_
#define RM_ROS_INTERFACES__MSG__DETAIL__JOINTSPEED__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'joint_speed'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/Jointspeed in the package rm_ros_interfaces.
typedef struct rm_ros_interfaces__msg__Jointspeed
{
  rosidl_runtime_c__float__Sequence joint_speed;
} rm_ros_interfaces__msg__Jointspeed;

// Struct for a sequence of rm_ros_interfaces__msg__Jointspeed.
typedef struct rm_ros_interfaces__msg__Jointspeed__Sequence
{
  rm_ros_interfaces__msg__Jointspeed * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rm_ros_interfaces__msg__Jointspeed__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RM_ROS_INTERFACES__MSG__DETAIL__JOINTSPEED__STRUCT_H_
