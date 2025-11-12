// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rm_ros_interfaces:msg/Moveloffset.idl
// generated code does not contain a copyright notice

#ifndef RM_ROS_INTERFACES__MSG__DETAIL__MOVELOFFSET__STRUCT_H_
#define RM_ROS_INTERFACES__MSG__DETAIL__MOVELOFFSET__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'pose'
#include "geometry_msgs/msg/detail/pose__struct.h"

/// Struct defined in msg/Moveloffset in the package rm_ros_interfaces.
typedef struct rm_ros_interfaces__msg__Moveloffset
{
  /// 位置姿态偏移，位置单位：米，姿态单位：弧度
  geometry_msgs__msg__Pose pose;
  /// v 速度比例1~100，即规划速度和加速度占机械臂末端最大线速度和线加速度的百分比
  int32_t speed;
  /// r 轨迹交融半径，目前默认0。
  int32_t r;
  /// trajectory_connect 轨迹连接标志 0：立即规划并执行轨迹，不与后续轨迹连接。1：将当前轨迹与下一条轨迹一起规划，但不立即执行。阻塞模式下，即使发送成功也会立即返回。
  bool trajectory_connect;
  /// 参考坐标系类型:0-工作，1-工具
  bool frame_type;
  /// 0：非阻塞模式，发送指令后立即返回。1：阻塞模式，等待机械臂到达目标位置或规划失败后返回。
  bool block;
} rm_ros_interfaces__msg__Moveloffset;

// Struct for a sequence of rm_ros_interfaces__msg__Moveloffset.
typedef struct rm_ros_interfaces__msg__Moveloffset__Sequence
{
  rm_ros_interfaces__msg__Moveloffset * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rm_ros_interfaces__msg__Moveloffset__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RM_ROS_INTERFACES__MSG__DETAIL__MOVELOFFSET__STRUCT_H_
