// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rm_ros_interfaces:msg/Trajectorylist.idl
// generated code does not contain a copyright notice

#ifndef RM_ROS_INTERFACES__MSG__DETAIL__TRAJECTORYLIST__STRUCT_H_
#define RM_ROS_INTERFACES__MSG__DETAIL__TRAJECTORYLIST__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'vague_search'
#include "rosidl_runtime_c/string.h"
// Member 'tra_list'
#include "rm_ros_interfaces/msg/detail/trajectoryinfo__struct.h"

/// Struct defined in msg/Trajectorylist in the package rm_ros_interfaces.
typedef struct rm_ros_interfaces__msg__Trajectorylist
{
  /// 页码
  int32_t page_num;
  /// 每页大小
  int32_t page_size;
  /// 列表长度
  int32_t total_size;
  /// 模糊搜索
  rosidl_runtime_c__String vague_search;
  /// 返回符合的轨迹列表
  rm_ros_interfaces__msg__Trajectoryinfo__Sequence tra_list;
  /// 查询状态 成功true 失败false
  bool state;
} rm_ros_interfaces__msg__Trajectorylist;

// Struct for a sequence of rm_ros_interfaces__msg__Trajectorylist.
typedef struct rm_ros_interfaces__msg__Trajectorylist__Sequence
{
  rm_ros_interfaces__msg__Trajectorylist * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rm_ros_interfaces__msg__Trajectorylist__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RM_ROS_INTERFACES__MSG__DETAIL__TRAJECTORYLIST__STRUCT_H_
