// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rm_ros_interfaces:msg/Modbusrtureadparams.idl
// generated code does not contain a copyright notice

#ifndef RM_ROS_INTERFACES__MSG__DETAIL__MODBUSRTUREADPARAMS__STRUCT_H_
#define RM_ROS_INTERFACES__MSG__DETAIL__MODBUSRTUREADPARAMS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/Modbusrtureadparams in the package rm_ros_interfaces.
typedef struct rm_ros_interfaces__msg__Modbusrtureadparams
{
  /// 数据起始地址
  int32_t address;
  /// 外设设备地址
  int32_t device;
  /// 0-控制器端modbus主机；1-工具端modbus主机。
  int32_t type;
  /// 要读的数据的数量，数据长度不超过109
  int32_t num;
} rm_ros_interfaces__msg__Modbusrtureadparams;

// Struct for a sequence of rm_ros_interfaces__msg__Modbusrtureadparams.
typedef struct rm_ros_interfaces__msg__Modbusrtureadparams__Sequence
{
  rm_ros_interfaces__msg__Modbusrtureadparams * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rm_ros_interfaces__msg__Modbusrtureadparams__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RM_ROS_INTERFACES__MSG__DETAIL__MODBUSRTUREADPARAMS__STRUCT_H_
