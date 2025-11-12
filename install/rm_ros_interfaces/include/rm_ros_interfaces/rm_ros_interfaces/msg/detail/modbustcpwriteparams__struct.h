// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rm_ros_interfaces:msg/Modbustcpwriteparams.idl
// generated code does not contain a copyright notice

#ifndef RM_ROS_INTERFACES__MSG__DETAIL__MODBUSTCPWRITEPARAMS__STRUCT_H_
#define RM_ROS_INTERFACES__MSG__DETAIL__MODBUSTCPWRITEPARAMS__STRUCT_H_

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
// Member 'ip'
#include "rosidl_runtime_c/string.h"
// Member 'data'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/Modbustcpwriteparams in the package rm_ros_interfaces.
typedef struct rm_ros_interfaces__msg__Modbustcpwriteparams
{
  /// 数据起始地址
  int32_t address;
  /// Modbus 主站名称，最大长度15个字符，不超过15个字符（master_name与IP二选一，若有IP和port优先使用IP和port）
  rosidl_runtime_c__String master_name;
  /// 主机连接的 IP 地址（master_name与IP二选一，若有IP和port优先使用IP和port）
  rosidl_runtime_c__String ip;
  /// 主机连接的端口号
  int32_t port;
  /// 写入数据数量，最大不超过100
  int32_t num;
  /// 写入的数据，数据长度不超过100
  rosidl_runtime_c__int32__Sequence data;
} rm_ros_interfaces__msg__Modbustcpwriteparams;

// Struct for a sequence of rm_ros_interfaces__msg__Modbustcpwriteparams.
typedef struct rm_ros_interfaces__msg__Modbustcpwriteparams__Sequence
{
  rm_ros_interfaces__msg__Modbustcpwriteparams * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rm_ros_interfaces__msg__Modbustcpwriteparams__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RM_ROS_INTERFACES__MSG__DETAIL__MODBUSTCPWRITEPARAMS__STRUCT_H_
