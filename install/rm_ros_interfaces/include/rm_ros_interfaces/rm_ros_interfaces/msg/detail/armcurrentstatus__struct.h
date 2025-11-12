// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rm_ros_interfaces:msg/Armcurrentstatus.idl
// generated code does not contain a copyright notice

#ifndef RM_ROS_INTERFACES__MSG__DETAIL__ARMCURRENTSTATUS__STRUCT_H_
#define RM_ROS_INTERFACES__MSG__DETAIL__ARMCURRENTSTATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/Armcurrentstatus in the package rm_ros_interfaces.
typedef struct rm_ros_interfaces__msg__Armcurrentstatus
{
  uint16_t arm_current_status;
} rm_ros_interfaces__msg__Armcurrentstatus;

// Struct for a sequence of rm_ros_interfaces__msg__Armcurrentstatus.
typedef struct rm_ros_interfaces__msg__Armcurrentstatus__Sequence
{
  rm_ros_interfaces__msg__Armcurrentstatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rm_ros_interfaces__msg__Armcurrentstatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RM_ROS_INTERFACES__MSG__DETAIL__ARMCURRENTSTATUS__STRUCT_H_
