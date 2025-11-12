// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rm_ros_interfaces:msg/Rmplusbase.idl
// generated code does not contain a copyright notice

#ifndef RM_ROS_INTERFACES__MSG__DETAIL__RMPLUSBASE__STRUCT_H_
#define RM_ROS_INTERFACES__MSG__DETAIL__RMPLUSBASE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'manu'
// Member 'hv'
// Member 'sv'
// Member 'bv'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/Rmplusbase in the package rm_ros_interfaces.
typedef struct rm_ros_interfaces__msg__Rmplusbase
{
  /// 设备厂家
  rosidl_runtime_c__String manu;
  /// 设备类型 1：两指夹爪 2：五指灵巧手 3：三指夹爪
  int8_t type;
  /// 硬件版本
  rosidl_runtime_c__String hv;
  /// 软件版本
  rosidl_runtime_c__String sv;
  /// boot版本
  rosidl_runtime_c__String bv;
  /// 设备ID
  int32_t id;
  /// 自由度
  int8_t dof;
  /// 自检开关
  int8_t check;
  /// 蜂鸣器开关
  int8_t bee;
  /// 力控支持
  bool force;
  /// 触觉支持
  bool touch;
  /// 触觉个数
  int8_t touch_num;
  /// 触觉开关
  int8_t touch_sw;
  /// 手方向 1 ：左手 2： 右手
  int8_t hand;
  /// 位置上限,单位：无量纲
  int32_t pos_up[12];
  /// 位置下限,单位：无量纲
  int32_t pos_low[12];
  /// 角度上限,单位：0.01度
  int32_t angle_up[12];
  /// 角度下限,单位：0.01度
  int32_t angle_low[12];
  /// 速度上限,单位：无量纲
  int32_t speed_up[12];
  /// 速度下限,单位：无量纲
  int32_t speed_low[12];
  /// 力上限,单位：0.001N
  int32_t force_up[12];
  /// 力下限,单位：0.001N
  int32_t force_low[12];
} rm_ros_interfaces__msg__Rmplusbase;

// Struct for a sequence of rm_ros_interfaces__msg__Rmplusbase.
typedef struct rm_ros_interfaces__msg__Rmplusbase__Sequence
{
  rm_ros_interfaces__msg__Rmplusbase * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rm_ros_interfaces__msg__Rmplusbase__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RM_ROS_INTERFACES__MSG__DETAIL__RMPLUSBASE__STRUCT_H_
