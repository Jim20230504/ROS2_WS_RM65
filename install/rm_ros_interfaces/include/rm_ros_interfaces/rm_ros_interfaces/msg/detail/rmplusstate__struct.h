// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rm_ros_interfaces:msg/Rmplusstate.idl
// generated code does not contain a copyright notice

#ifndef RM_ROS_INTERFACES__MSG__DETAIL__RMPLUSSTATE__STRUCT_H_
#define RM_ROS_INTERFACES__MSG__DETAIL__RMPLUSSTATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/Rmplusstate in the package rm_ros_interfaces.
typedef struct rm_ros_interfaces__msg__Rmplusstate
{
  /// 系统状态
  int32_t sys_state;
  /// 各自由度当前状态
  int32_t dof_state[12];
  /// 各自由度错误信息
  int32_t dof_err[12];
  /// 各自由度当前位置
  int32_t pos[12];
  /// 各自由度当前速度
  int32_t speed[12];
  /// 各自由度当前角度
  int32_t angle[12];
  /// 各自由度当前电流
  int32_t current[12];
  /// 自由度触觉三维力的法向力
  int32_t normal_force[18];
  /// 自由度触觉三维力的切向力
  int32_t tangential_force[18];
  /// 自由度触觉三维力的切向力方向
  int32_t tangential_force_dir[18];
  /// 自由度触觉自接近
  uint32_t tsa[12];
  /// 自由度触觉互接近
  uint32_t tma[12];
  /// 触觉传感器原始数据
  int32_t touch_data[18];
  /// 自由度力矩
  int32_t force[12];
} rm_ros_interfaces__msg__Rmplusstate;

// Struct for a sequence of rm_ros_interfaces__msg__Rmplusstate.
typedef struct rm_ros_interfaces__msg__Rmplusstate__Sequence
{
  rm_ros_interfaces__msg__Rmplusstate * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rm_ros_interfaces__msg__Rmplusstate__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RM_ROS_INTERFACES__MSG__DETAIL__RMPLUSSTATE__STRUCT_H_
