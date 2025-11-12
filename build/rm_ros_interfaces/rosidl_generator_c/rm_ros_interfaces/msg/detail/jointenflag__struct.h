// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rm_ros_interfaces:msg/Jointenflag.idl
// generated code does not contain a copyright notice

#ifndef RM_ROS_INTERFACES__MSG__DETAIL__JOINTENFLAG__STRUCT_H_
#define RM_ROS_INTERFACES__MSG__DETAIL__JOINTENFLAG__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'joint_en_flag'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/Jointenflag in the package rm_ros_interfaces.
typedef struct rm_ros_interfaces__msg__Jointenflag
{
  rosidl_runtime_c__boolean__Sequence joint_en_flag;
} rm_ros_interfaces__msg__Jointenflag;

// Struct for a sequence of rm_ros_interfaces__msg__Jointenflag.
typedef struct rm_ros_interfaces__msg__Jointenflag__Sequence
{
  rm_ros_interfaces__msg__Jointenflag * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rm_ros_interfaces__msg__Jointenflag__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RM_ROS_INTERFACES__MSG__DETAIL__JOINTENFLAG__STRUCT_H_
