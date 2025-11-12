// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rm_ros_interfaces:msg/Armsoftversion.idl
// generated code does not contain a copyright notice

#ifndef RM_ROS_INTERFACES__MSG__DETAIL__ARMSOFTVERSION__STRUCT_H_
#define RM_ROS_INTERFACES__MSG__DETAIL__ARMSOFTVERSION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'product_version'
// Member 'controller_version'
// Member 'algorithm_info'
// Member 'dynamic_info'
// Member 'planversion'
// Member 'ctrlversion'
// Member 'kernal1'
// Member 'kernal2'
// Member 'productversion'
#include "rosidl_runtime_c/string.h"
// Member 'ctrl_info'
// Member 'plan_info'
// Member 'com_info'
// Member 'program_info'
#include "rm_ros_interfaces/msg/detail/softwarebuildinfo__struct.h"

/// Struct defined in msg/Armsoftversion in the package rm_ros_interfaces.
typedef struct rm_ros_interfaces__msg__Armsoftversion
{
  /// 机械臂型号
  rosidl_runtime_c__String product_version;
  /// 机械臂控制器版本，若为四代控制器，则该字段为"4.0"
  rosidl_runtime_c__String controller_version;
  /// 算法库信息
  rosidl_runtime_c__String algorithm_info;
  /// ctrl 层软件信息
  rm_ros_interfaces__msg__Softwarebuildinfo ctrl_info;
  /// 动力学版本（三代）
  rosidl_runtime_c__String dynamic_info;
  /// plan 层软件信息（三代）
  rm_ros_interfaces__msg__Softwarebuildinfo plan_info;
  /// communication 模块软件信息（四代）
  rm_ros_interfaces__msg__Softwarebuildinfo com_info;
  /// 流程图编程模块软件信息（四代）
  rm_ros_interfaces__msg__Softwarebuildinfo program_info;
  /// 查询状态 成功true 失败false
  bool state;
  rosidl_runtime_c__String planversion;
  rosidl_runtime_c__String ctrlversion;
  rosidl_runtime_c__String kernal1;
  rosidl_runtime_c__String kernal2;
  rosidl_runtime_c__String productversion;
} rm_ros_interfaces__msg__Armsoftversion;

// Struct for a sequence of rm_ros_interfaces__msg__Armsoftversion.
typedef struct rm_ros_interfaces__msg__Armsoftversion__Sequence
{
  rm_ros_interfaces__msg__Armsoftversion * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rm_ros_interfaces__msg__Armsoftversion__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RM_ROS_INTERFACES__MSG__DETAIL__ARMSOFTVERSION__STRUCT_H_
