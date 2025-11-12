// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rm_ros_interfaces:msg/Jointcurrent.idl
// generated code does not contain a copyright notice

#ifndef RM_ROS_INTERFACES__MSG__DETAIL__JOINTCURRENT__STRUCT_H_
#define RM_ROS_INTERFACES__MSG__DETAIL__JOINTCURRENT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'joint_current'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/Jointcurrent in the package rm_ros_interfaces.
typedef struct rm_ros_interfaces__msg__Jointcurrent
{
  rosidl_runtime_c__float__Sequence joint_current;
} rm_ros_interfaces__msg__Jointcurrent;

// Struct for a sequence of rm_ros_interfaces__msg__Jointcurrent.
typedef struct rm_ros_interfaces__msg__Jointcurrent__Sequence
{
  rm_ros_interfaces__msg__Jointcurrent * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rm_ros_interfaces__msg__Jointcurrent__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RM_ROS_INTERFACES__MSG__DETAIL__JOINTCURRENT__STRUCT_H_
