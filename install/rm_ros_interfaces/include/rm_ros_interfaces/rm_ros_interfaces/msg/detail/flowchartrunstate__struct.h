// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rm_ros_interfaces:msg/Flowchartrunstate.idl
// generated code does not contain a copyright notice

#ifndef RM_ROS_INTERFACES__MSG__DETAIL__FLOWCHARTRUNSTATE__STRUCT_H_
#define RM_ROS_INTERFACES__MSG__DETAIL__FLOWCHARTRUNSTATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'name'
// Member 'modal_id'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/Flowchartrunstate in the package rm_ros_interfaces.
typedef struct rm_ros_interfaces__msg__Flowchartrunstate
{
  /// 运行状态 0 未开始 1运行中 2暂停中
  uint8_t run_state;
  /// 当前使能的文件id。
  uint8_t id;
  /// 当前使能的文件名称。
  rosidl_runtime_c__String name;
  /// 当前使能的文件全局规划速度比例 1-100。
  uint8_t plan_speed;
  /// 单步模式，0为空，1为正常, 2为单步。
  uint8_t step_mode;
  /// 运行到的流程图块的id。未运行则不返回
  rosidl_runtime_c__String modal_id;
  /// 查询状态信息
  bool state;
} rm_ros_interfaces__msg__Flowchartrunstate;

// Struct for a sequence of rm_ros_interfaces__msg__Flowchartrunstate.
typedef struct rm_ros_interfaces__msg__Flowchartrunstate__Sequence
{
  rm_ros_interfaces__msg__Flowchartrunstate * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rm_ros_interfaces__msg__Flowchartrunstate__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RM_ROS_INTERFACES__MSG__DETAIL__FLOWCHARTRUNSTATE__STRUCT_H_
