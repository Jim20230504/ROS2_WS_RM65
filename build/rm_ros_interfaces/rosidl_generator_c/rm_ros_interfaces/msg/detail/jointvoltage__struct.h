// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rm_ros_interfaces:msg/Jointvoltage.idl
// generated code does not contain a copyright notice

#ifndef RM_ROS_INTERFACES__MSG__DETAIL__JOINTVOLTAGE__STRUCT_H_
#define RM_ROS_INTERFACES__MSG__DETAIL__JOINTVOLTAGE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'joint_voltage'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/Jointvoltage in the package rm_ros_interfaces.
typedef struct rm_ros_interfaces__msg__Jointvoltage
{
  rosidl_runtime_c__float__Sequence joint_voltage;
} rm_ros_interfaces__msg__Jointvoltage;

// Struct for a sequence of rm_ros_interfaces__msg__Jointvoltage.
typedef struct rm_ros_interfaces__msg__Jointvoltage__Sequence
{
  rm_ros_interfaces__msg__Jointvoltage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rm_ros_interfaces__msg__Jointvoltage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RM_ROS_INTERFACES__MSG__DETAIL__JOINTVOLTAGE__STRUCT_H_
