// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rm_ros_interfaces:msg/Modbustcpmasterupdata.idl
// generated code does not contain a copyright notice

#ifndef RM_ROS_INTERFACES__MSG__DETAIL__MODBUSTCPMASTERUPDATA__STRUCT_H_
#define RM_ROS_INTERFACES__MSG__DETAIL__MODBUSTCPMASTERUPDATA__STRUCT_H_

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
// Member 'new_master_name'
// Member 'ip'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/Modbustcpmasterupdata in the package rm_ros_interfaces.
typedef struct rm_ros_interfaces__msg__Modbustcpmasterupdata
{
  /// Modbus主站名称，最大长度15个字符，不超过15个字符
  rosidl_runtime_c__String master_name;
  /// Modbus要更改的主站名称，最大长度15个字符，不超过15个字符
  rosidl_runtime_c__String new_master_name;
  /// TCP主站IP地址
  rosidl_runtime_c__String ip;
  /// TCP主站端口号
  int32_t port;
} rm_ros_interfaces__msg__Modbustcpmasterupdata;

// Struct for a sequence of rm_ros_interfaces__msg__Modbustcpmasterupdata.
typedef struct rm_ros_interfaces__msg__Modbustcpmasterupdata__Sequence
{
  rm_ros_interfaces__msg__Modbustcpmasterupdata * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rm_ros_interfaces__msg__Modbustcpmasterupdata__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RM_ROS_INTERFACES__MSG__DETAIL__MODBUSTCPMASTERUPDATA__STRUCT_H_
