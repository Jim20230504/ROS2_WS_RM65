// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rm_ros_interfaces:msg/Jointversion.idl
// generated code does not contain a copyright notice

#ifndef RM_ROS_INTERFACES__MSG__DETAIL__JOINTVERSION__STRUCT_H_
#define RM_ROS_INTERFACES__MSG__DETAIL__JOINTVERSION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'joint_version'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/Jointversion in the package rm_ros_interfaces.
typedef struct rm_ros_interfaces__msg__Jointversion
{
  /// 获取到的各关节软件版本号数组，需转换为十六进制，例如获取某关节版本为54536，转换为十六进制为D508，则当前关节的版本号为 Vd5.0.8（三代控制器）
  rosidl_runtime_c__String joint_version[7];
  /// 获取状态 true获取成功 false获取失败
  bool state;
} rm_ros_interfaces__msg__Jointversion;

// Struct for a sequence of rm_ros_interfaces__msg__Jointversion.
typedef struct rm_ros_interfaces__msg__Jointversion__Sequence
{
  rm_ros_interfaces__msg__Jointversion * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rm_ros_interfaces__msg__Jointversion__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RM_ROS_INTERFACES__MSG__DETAIL__JOINTVERSION__STRUCT_H_
