// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rm_ros_interfaces:msg/RS485params.idl
// generated code does not contain a copyright notice

#ifndef RM_ROS_INTERFACES__MSG__DETAIL__RS485PARAMS__STRUCT_H_
#define RM_ROS_INTERFACES__MSG__DETAIL__RS485PARAMS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/RS485params in the package rm_ros_interfaces.
typedef struct rm_ros_interfaces__msg__RS485params
{
  /// 0代表默认RS485串行通讯，1代表modbus-RTU主站模式，2-代表modbus-RTU从站模式。
  int32_t mode;
  /// 波特率(当前支持9600 19200 38400 57600 115200 230400 460800)
  int32_t baudrate;
  /// 查询状态 true查询成功 false查询失败
  bool state;
} rm_ros_interfaces__msg__RS485params;

// Struct for a sequence of rm_ros_interfaces__msg__RS485params.
typedef struct rm_ros_interfaces__msg__RS485params__Sequence
{
  rm_ros_interfaces__msg__RS485params * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rm_ros_interfaces__msg__RS485params__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RM_ROS_INTERFACES__MSG__DETAIL__RS485PARAMS__STRUCT_H_
