// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from rm_ros_interfaces:msg/Rmplusstate.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "rm_ros_interfaces/msg/detail/rmplusstate__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace rm_ros_interfaces
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void Rmplusstate_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) rm_ros_interfaces::msg::Rmplusstate(_init);
}

void Rmplusstate_fini_function(void * message_memory)
{
  auto typed_message = static_cast<rm_ros_interfaces::msg::Rmplusstate *>(message_memory);
  typed_message->~Rmplusstate();
}

size_t size_function__Rmplusstate__dof_state(const void * untyped_member)
{
  (void)untyped_member;
  return 12;
}

const void * get_const_function__Rmplusstate__dof_state(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<int32_t, 12> *>(untyped_member);
  return &member[index];
}

void * get_function__Rmplusstate__dof_state(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<int32_t, 12> *>(untyped_member);
  return &member[index];
}

void fetch_function__Rmplusstate__dof_state(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const int32_t *>(
    get_const_function__Rmplusstate__dof_state(untyped_member, index));
  auto & value = *reinterpret_cast<int32_t *>(untyped_value);
  value = item;
}

void assign_function__Rmplusstate__dof_state(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<int32_t *>(
    get_function__Rmplusstate__dof_state(untyped_member, index));
  const auto & value = *reinterpret_cast<const int32_t *>(untyped_value);
  item = value;
}

size_t size_function__Rmplusstate__dof_err(const void * untyped_member)
{
  (void)untyped_member;
  return 12;
}

const void * get_const_function__Rmplusstate__dof_err(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<int32_t, 12> *>(untyped_member);
  return &member[index];
}

void * get_function__Rmplusstate__dof_err(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<int32_t, 12> *>(untyped_member);
  return &member[index];
}

void fetch_function__Rmplusstate__dof_err(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const int32_t *>(
    get_const_function__Rmplusstate__dof_err(untyped_member, index));
  auto & value = *reinterpret_cast<int32_t *>(untyped_value);
  value = item;
}

void assign_function__Rmplusstate__dof_err(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<int32_t *>(
    get_function__Rmplusstate__dof_err(untyped_member, index));
  const auto & value = *reinterpret_cast<const int32_t *>(untyped_value);
  item = value;
}

size_t size_function__Rmplusstate__pos(const void * untyped_member)
{
  (void)untyped_member;
  return 12;
}

const void * get_const_function__Rmplusstate__pos(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<int32_t, 12> *>(untyped_member);
  return &member[index];
}

void * get_function__Rmplusstate__pos(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<int32_t, 12> *>(untyped_member);
  return &member[index];
}

void fetch_function__Rmplusstate__pos(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const int32_t *>(
    get_const_function__Rmplusstate__pos(untyped_member, index));
  auto & value = *reinterpret_cast<int32_t *>(untyped_value);
  value = item;
}

void assign_function__Rmplusstate__pos(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<int32_t *>(
    get_function__Rmplusstate__pos(untyped_member, index));
  const auto & value = *reinterpret_cast<const int32_t *>(untyped_value);
  item = value;
}

size_t size_function__Rmplusstate__speed(const void * untyped_member)
{
  (void)untyped_member;
  return 12;
}

const void * get_const_function__Rmplusstate__speed(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<int32_t, 12> *>(untyped_member);
  return &member[index];
}

void * get_function__Rmplusstate__speed(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<int32_t, 12> *>(untyped_member);
  return &member[index];
}

void fetch_function__Rmplusstate__speed(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const int32_t *>(
    get_const_function__Rmplusstate__speed(untyped_member, index));
  auto & value = *reinterpret_cast<int32_t *>(untyped_value);
  value = item;
}

void assign_function__Rmplusstate__speed(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<int32_t *>(
    get_function__Rmplusstate__speed(untyped_member, index));
  const auto & value = *reinterpret_cast<const int32_t *>(untyped_value);
  item = value;
}

size_t size_function__Rmplusstate__angle(const void * untyped_member)
{
  (void)untyped_member;
  return 12;
}

const void * get_const_function__Rmplusstate__angle(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<int32_t, 12> *>(untyped_member);
  return &member[index];
}

void * get_function__Rmplusstate__angle(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<int32_t, 12> *>(untyped_member);
  return &member[index];
}

void fetch_function__Rmplusstate__angle(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const int32_t *>(
    get_const_function__Rmplusstate__angle(untyped_member, index));
  auto & value = *reinterpret_cast<int32_t *>(untyped_value);
  value = item;
}

void assign_function__Rmplusstate__angle(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<int32_t *>(
    get_function__Rmplusstate__angle(untyped_member, index));
  const auto & value = *reinterpret_cast<const int32_t *>(untyped_value);
  item = value;
}

size_t size_function__Rmplusstate__current(const void * untyped_member)
{
  (void)untyped_member;
  return 12;
}

const void * get_const_function__Rmplusstate__current(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<int32_t, 12> *>(untyped_member);
  return &member[index];
}

void * get_function__Rmplusstate__current(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<int32_t, 12> *>(untyped_member);
  return &member[index];
}

void fetch_function__Rmplusstate__current(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const int32_t *>(
    get_const_function__Rmplusstate__current(untyped_member, index));
  auto & value = *reinterpret_cast<int32_t *>(untyped_value);
  value = item;
}

void assign_function__Rmplusstate__current(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<int32_t *>(
    get_function__Rmplusstate__current(untyped_member, index));
  const auto & value = *reinterpret_cast<const int32_t *>(untyped_value);
  item = value;
}

size_t size_function__Rmplusstate__normal_force(const void * untyped_member)
{
  (void)untyped_member;
  return 18;
}

const void * get_const_function__Rmplusstate__normal_force(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<int32_t, 18> *>(untyped_member);
  return &member[index];
}

void * get_function__Rmplusstate__normal_force(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<int32_t, 18> *>(untyped_member);
  return &member[index];
}

void fetch_function__Rmplusstate__normal_force(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const int32_t *>(
    get_const_function__Rmplusstate__normal_force(untyped_member, index));
  auto & value = *reinterpret_cast<int32_t *>(untyped_value);
  value = item;
}

void assign_function__Rmplusstate__normal_force(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<int32_t *>(
    get_function__Rmplusstate__normal_force(untyped_member, index));
  const auto & value = *reinterpret_cast<const int32_t *>(untyped_value);
  item = value;
}

size_t size_function__Rmplusstate__tangential_force(const void * untyped_member)
{
  (void)untyped_member;
  return 18;
}

const void * get_const_function__Rmplusstate__tangential_force(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<int32_t, 18> *>(untyped_member);
  return &member[index];
}

void * get_function__Rmplusstate__tangential_force(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<int32_t, 18> *>(untyped_member);
  return &member[index];
}

void fetch_function__Rmplusstate__tangential_force(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const int32_t *>(
    get_const_function__Rmplusstate__tangential_force(untyped_member, index));
  auto & value = *reinterpret_cast<int32_t *>(untyped_value);
  value = item;
}

void assign_function__Rmplusstate__tangential_force(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<int32_t *>(
    get_function__Rmplusstate__tangential_force(untyped_member, index));
  const auto & value = *reinterpret_cast<const int32_t *>(untyped_value);
  item = value;
}

size_t size_function__Rmplusstate__tangential_force_dir(const void * untyped_member)
{
  (void)untyped_member;
  return 18;
}

const void * get_const_function__Rmplusstate__tangential_force_dir(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<int32_t, 18> *>(untyped_member);
  return &member[index];
}

void * get_function__Rmplusstate__tangential_force_dir(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<int32_t, 18> *>(untyped_member);
  return &member[index];
}

void fetch_function__Rmplusstate__tangential_force_dir(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const int32_t *>(
    get_const_function__Rmplusstate__tangential_force_dir(untyped_member, index));
  auto & value = *reinterpret_cast<int32_t *>(untyped_value);
  value = item;
}

void assign_function__Rmplusstate__tangential_force_dir(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<int32_t *>(
    get_function__Rmplusstate__tangential_force_dir(untyped_member, index));
  const auto & value = *reinterpret_cast<const int32_t *>(untyped_value);
  item = value;
}

size_t size_function__Rmplusstate__tsa(const void * untyped_member)
{
  (void)untyped_member;
  return 12;
}

const void * get_const_function__Rmplusstate__tsa(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<uint32_t, 12> *>(untyped_member);
  return &member[index];
}

void * get_function__Rmplusstate__tsa(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<uint32_t, 12> *>(untyped_member);
  return &member[index];
}

void fetch_function__Rmplusstate__tsa(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const uint32_t *>(
    get_const_function__Rmplusstate__tsa(untyped_member, index));
  auto & value = *reinterpret_cast<uint32_t *>(untyped_value);
  value = item;
}

void assign_function__Rmplusstate__tsa(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<uint32_t *>(
    get_function__Rmplusstate__tsa(untyped_member, index));
  const auto & value = *reinterpret_cast<const uint32_t *>(untyped_value);
  item = value;
}

size_t size_function__Rmplusstate__tma(const void * untyped_member)
{
  (void)untyped_member;
  return 12;
}

const void * get_const_function__Rmplusstate__tma(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<uint32_t, 12> *>(untyped_member);
  return &member[index];
}

void * get_function__Rmplusstate__tma(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<uint32_t, 12> *>(untyped_member);
  return &member[index];
}

void fetch_function__Rmplusstate__tma(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const uint32_t *>(
    get_const_function__Rmplusstate__tma(untyped_member, index));
  auto & value = *reinterpret_cast<uint32_t *>(untyped_value);
  value = item;
}

void assign_function__Rmplusstate__tma(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<uint32_t *>(
    get_function__Rmplusstate__tma(untyped_member, index));
  const auto & value = *reinterpret_cast<const uint32_t *>(untyped_value);
  item = value;
}

size_t size_function__Rmplusstate__touch_data(const void * untyped_member)
{
  (void)untyped_member;
  return 18;
}

const void * get_const_function__Rmplusstate__touch_data(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<int32_t, 18> *>(untyped_member);
  return &member[index];
}

void * get_function__Rmplusstate__touch_data(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<int32_t, 18> *>(untyped_member);
  return &member[index];
}

void fetch_function__Rmplusstate__touch_data(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const int32_t *>(
    get_const_function__Rmplusstate__touch_data(untyped_member, index));
  auto & value = *reinterpret_cast<int32_t *>(untyped_value);
  value = item;
}

void assign_function__Rmplusstate__touch_data(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<int32_t *>(
    get_function__Rmplusstate__touch_data(untyped_member, index));
  const auto & value = *reinterpret_cast<const int32_t *>(untyped_value);
  item = value;
}

size_t size_function__Rmplusstate__force(const void * untyped_member)
{
  (void)untyped_member;
  return 12;
}

const void * get_const_function__Rmplusstate__force(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<int32_t, 12> *>(untyped_member);
  return &member[index];
}

void * get_function__Rmplusstate__force(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<int32_t, 12> *>(untyped_member);
  return &member[index];
}

void fetch_function__Rmplusstate__force(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const int32_t *>(
    get_const_function__Rmplusstate__force(untyped_member, index));
  auto & value = *reinterpret_cast<int32_t *>(untyped_value);
  value = item;
}

void assign_function__Rmplusstate__force(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<int32_t *>(
    get_function__Rmplusstate__force(untyped_member, index));
  const auto & value = *reinterpret_cast<const int32_t *>(untyped_value);
  item = value;
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember Rmplusstate_message_member_array[14] = {
  {
    "sys_state",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rm_ros_interfaces::msg::Rmplusstate, sys_state),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "dof_state",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    12,  // array size
    false,  // is upper bound
    offsetof(rm_ros_interfaces::msg::Rmplusstate, dof_state),  // bytes offset in struct
    nullptr,  // default value
    size_function__Rmplusstate__dof_state,  // size() function pointer
    get_const_function__Rmplusstate__dof_state,  // get_const(index) function pointer
    get_function__Rmplusstate__dof_state,  // get(index) function pointer
    fetch_function__Rmplusstate__dof_state,  // fetch(index, &value) function pointer
    assign_function__Rmplusstate__dof_state,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "dof_err",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    12,  // array size
    false,  // is upper bound
    offsetof(rm_ros_interfaces::msg::Rmplusstate, dof_err),  // bytes offset in struct
    nullptr,  // default value
    size_function__Rmplusstate__dof_err,  // size() function pointer
    get_const_function__Rmplusstate__dof_err,  // get_const(index) function pointer
    get_function__Rmplusstate__dof_err,  // get(index) function pointer
    fetch_function__Rmplusstate__dof_err,  // fetch(index, &value) function pointer
    assign_function__Rmplusstate__dof_err,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "pos",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    12,  // array size
    false,  // is upper bound
    offsetof(rm_ros_interfaces::msg::Rmplusstate, pos),  // bytes offset in struct
    nullptr,  // default value
    size_function__Rmplusstate__pos,  // size() function pointer
    get_const_function__Rmplusstate__pos,  // get_const(index) function pointer
    get_function__Rmplusstate__pos,  // get(index) function pointer
    fetch_function__Rmplusstate__pos,  // fetch(index, &value) function pointer
    assign_function__Rmplusstate__pos,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "speed",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    12,  // array size
    false,  // is upper bound
    offsetof(rm_ros_interfaces::msg::Rmplusstate, speed),  // bytes offset in struct
    nullptr,  // default value
    size_function__Rmplusstate__speed,  // size() function pointer
    get_const_function__Rmplusstate__speed,  // get_const(index) function pointer
    get_function__Rmplusstate__speed,  // get(index) function pointer
    fetch_function__Rmplusstate__speed,  // fetch(index, &value) function pointer
    assign_function__Rmplusstate__speed,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "angle",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    12,  // array size
    false,  // is upper bound
    offsetof(rm_ros_interfaces::msg::Rmplusstate, angle),  // bytes offset in struct
    nullptr,  // default value
    size_function__Rmplusstate__angle,  // size() function pointer
    get_const_function__Rmplusstate__angle,  // get_const(index) function pointer
    get_function__Rmplusstate__angle,  // get(index) function pointer
    fetch_function__Rmplusstate__angle,  // fetch(index, &value) function pointer
    assign_function__Rmplusstate__angle,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "current",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    12,  // array size
    false,  // is upper bound
    offsetof(rm_ros_interfaces::msg::Rmplusstate, current),  // bytes offset in struct
    nullptr,  // default value
    size_function__Rmplusstate__current,  // size() function pointer
    get_const_function__Rmplusstate__current,  // get_const(index) function pointer
    get_function__Rmplusstate__current,  // get(index) function pointer
    fetch_function__Rmplusstate__current,  // fetch(index, &value) function pointer
    assign_function__Rmplusstate__current,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "normal_force",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    18,  // array size
    false,  // is upper bound
    offsetof(rm_ros_interfaces::msg::Rmplusstate, normal_force),  // bytes offset in struct
    nullptr,  // default value
    size_function__Rmplusstate__normal_force,  // size() function pointer
    get_const_function__Rmplusstate__normal_force,  // get_const(index) function pointer
    get_function__Rmplusstate__normal_force,  // get(index) function pointer
    fetch_function__Rmplusstate__normal_force,  // fetch(index, &value) function pointer
    assign_function__Rmplusstate__normal_force,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "tangential_force",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    18,  // array size
    false,  // is upper bound
    offsetof(rm_ros_interfaces::msg::Rmplusstate, tangential_force),  // bytes offset in struct
    nullptr,  // default value
    size_function__Rmplusstate__tangential_force,  // size() function pointer
    get_const_function__Rmplusstate__tangential_force,  // get_const(index) function pointer
    get_function__Rmplusstate__tangential_force,  // get(index) function pointer
    fetch_function__Rmplusstate__tangential_force,  // fetch(index, &value) function pointer
    assign_function__Rmplusstate__tangential_force,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "tangential_force_dir",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    18,  // array size
    false,  // is upper bound
    offsetof(rm_ros_interfaces::msg::Rmplusstate, tangential_force_dir),  // bytes offset in struct
    nullptr,  // default value
    size_function__Rmplusstate__tangential_force_dir,  // size() function pointer
    get_const_function__Rmplusstate__tangential_force_dir,  // get_const(index) function pointer
    get_function__Rmplusstate__tangential_force_dir,  // get(index) function pointer
    fetch_function__Rmplusstate__tangential_force_dir,  // fetch(index, &value) function pointer
    assign_function__Rmplusstate__tangential_force_dir,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "tsa",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    12,  // array size
    false,  // is upper bound
    offsetof(rm_ros_interfaces::msg::Rmplusstate, tsa),  // bytes offset in struct
    nullptr,  // default value
    size_function__Rmplusstate__tsa,  // size() function pointer
    get_const_function__Rmplusstate__tsa,  // get_const(index) function pointer
    get_function__Rmplusstate__tsa,  // get(index) function pointer
    fetch_function__Rmplusstate__tsa,  // fetch(index, &value) function pointer
    assign_function__Rmplusstate__tsa,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "tma",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    12,  // array size
    false,  // is upper bound
    offsetof(rm_ros_interfaces::msg::Rmplusstate, tma),  // bytes offset in struct
    nullptr,  // default value
    size_function__Rmplusstate__tma,  // size() function pointer
    get_const_function__Rmplusstate__tma,  // get_const(index) function pointer
    get_function__Rmplusstate__tma,  // get(index) function pointer
    fetch_function__Rmplusstate__tma,  // fetch(index, &value) function pointer
    assign_function__Rmplusstate__tma,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "touch_data",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    18,  // array size
    false,  // is upper bound
    offsetof(rm_ros_interfaces::msg::Rmplusstate, touch_data),  // bytes offset in struct
    nullptr,  // default value
    size_function__Rmplusstate__touch_data,  // size() function pointer
    get_const_function__Rmplusstate__touch_data,  // get_const(index) function pointer
    get_function__Rmplusstate__touch_data,  // get(index) function pointer
    fetch_function__Rmplusstate__touch_data,  // fetch(index, &value) function pointer
    assign_function__Rmplusstate__touch_data,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "force",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    12,  // array size
    false,  // is upper bound
    offsetof(rm_ros_interfaces::msg::Rmplusstate, force),  // bytes offset in struct
    nullptr,  // default value
    size_function__Rmplusstate__force,  // size() function pointer
    get_const_function__Rmplusstate__force,  // get_const(index) function pointer
    get_function__Rmplusstate__force,  // get(index) function pointer
    fetch_function__Rmplusstate__force,  // fetch(index, &value) function pointer
    assign_function__Rmplusstate__force,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers Rmplusstate_message_members = {
  "rm_ros_interfaces::msg",  // message namespace
  "Rmplusstate",  // message name
  14,  // number of fields
  sizeof(rm_ros_interfaces::msg::Rmplusstate),
  Rmplusstate_message_member_array,  // message members
  Rmplusstate_init_function,  // function to initialize message memory (memory has to be allocated)
  Rmplusstate_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t Rmplusstate_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &Rmplusstate_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace rm_ros_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<rm_ros_interfaces::msg::Rmplusstate>()
{
  return &::rm_ros_interfaces::msg::rosidl_typesupport_introspection_cpp::Rmplusstate_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, rm_ros_interfaces, msg, Rmplusstate)() {
  return &::rm_ros_interfaces::msg::rosidl_typesupport_introspection_cpp::Rmplusstate_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
