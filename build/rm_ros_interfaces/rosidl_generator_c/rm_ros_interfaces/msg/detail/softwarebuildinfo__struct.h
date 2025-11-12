// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rm_ros_interfaces:msg/Softwarebuildinfo.idl
// generated code does not contain a copyright notice

#ifndef RM_ROS_INTERFACES__MSG__DETAIL__SOFTWAREBUILDINFO__STRUCT_H_
#define RM_ROS_INTERFACES__MSG__DETAIL__SOFTWAREBUILDINFO__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'build_time'
// Member 'version'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/Softwarebuildinfo in the package rm_ros_interfaces.
typedef struct rm_ros_interfaces__msg__Softwarebuildinfo
{
  rosidl_runtime_c__String build_time;
  rosidl_runtime_c__String version;
} rm_ros_interfaces__msg__Softwarebuildinfo;

// Struct for a sequence of rm_ros_interfaces__msg__Softwarebuildinfo.
typedef struct rm_ros_interfaces__msg__Softwarebuildinfo__Sequence
{
  rm_ros_interfaces__msg__Softwarebuildinfo * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rm_ros_interfaces__msg__Softwarebuildinfo__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RM_ROS_INTERFACES__MSG__DETAIL__SOFTWAREBUILDINFO__STRUCT_H_
