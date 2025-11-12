// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rm_ros_interfaces:msg/Programrunstate.idl
// generated code does not contain a copyright notice

#ifndef RM_ROS_INTERFACES__MSG__DETAIL__PROGRAMRUNSTATE__STRUCT_H_
#define RM_ROS_INTERFACES__MSG__DETAIL__PROGRAMRUNSTATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'loop_num'
// Member 'loop_cont'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/Programrunstate in the package rm_ros_interfaces.
typedef struct rm_ros_interfaces__msg__Programrunstate
{
  /// 运行状态 0 未开始 1运行中 2暂停中
  int32_t run_state;
  /// 运行轨迹编号
  int32_t id;
  /// 上次编辑的在线编程编号 id
  int32_t edit_id;
  /// 运行行数
  int32_t plan_num;
  /// 循环指令数量
  int32_t total_loop;
  /// 单步模式，1 为单步模式，0 为非单步模式
  int32_t step_mode;
  /// 全局规划速度比例 1-100
  int32_t plan_speed;
  /// 循环行数
  rosidl_runtime_c__int32__Sequence loop_num;
  /// 对应循环次数
  rosidl_runtime_c__int32__Sequence loop_cont;
  /// 文件下发状态，成功true,失败false
  bool state;
} rm_ros_interfaces__msg__Programrunstate;

// Struct for a sequence of rm_ros_interfaces__msg__Programrunstate.
typedef struct rm_ros_interfaces__msg__Programrunstate__Sequence
{
  rm_ros_interfaces__msg__Programrunstate * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rm_ros_interfaces__msg__Programrunstate__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RM_ROS_INTERFACES__MSG__DETAIL__PROGRAMRUNSTATE__STRUCT_H_
