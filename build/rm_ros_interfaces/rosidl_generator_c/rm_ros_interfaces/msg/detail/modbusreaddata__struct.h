// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rm_ros_interfaces:msg/Modbusreaddata.idl
// generated code does not contain a copyright notice

#ifndef RM_ROS_INTERFACES__MSG__DETAIL__MODBUSREADDATA__STRUCT_H_
#define RM_ROS_INTERFACES__MSG__DETAIL__MODBUSREADDATA__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'read_data'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/Modbusreaddata in the package rm_ros_interfaces.
typedef struct rm_ros_interfaces__msg__Modbusreaddata
{
  /// 读取到的modbus数据
  rosidl_runtime_c__int32__Sequence read_data;
  /// 查询状态信息，失败为false，成功true
  bool state;
} rm_ros_interfaces__msg__Modbusreaddata;

// Struct for a sequence of rm_ros_interfaces__msg__Modbusreaddata.
typedef struct rm_ros_interfaces__msg__Modbusreaddata__Sequence
{
  rm_ros_interfaces__msg__Modbusreaddata * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rm_ros_interfaces__msg__Modbusreaddata__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RM_ROS_INTERFACES__MSG__DETAIL__MODBUSREADDATA__STRUCT_H_
