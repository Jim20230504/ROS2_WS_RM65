// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from rm_ros_interfaces:msg/Jointposeeuler.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "rm_ros_interfaces/msg/detail/jointposeeuler__struct.hpp"
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

void Jointposeeuler_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) rm_ros_interfaces::msg::Jointposeeuler(_init);
}

void Jointposeeuler_fini_function(void * message_memory)
{
  auto typed_message = static_cast<rm_ros_interfaces::msg::Jointposeeuler *>(message_memory);
  typed_message->~Jointposeeuler();
}

size_t size_function__Jointposeeuler__euler(const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * get_const_function__Jointposeeuler__euler(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<float, 3> *>(untyped_member);
  return &member[index];
}

void * get_function__Jointposeeuler__euler(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<float, 3> *>(untyped_member);
  return &member[index];
}

void fetch_function__Jointposeeuler__euler(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__Jointposeeuler__euler(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__Jointposeeuler__euler(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__Jointposeeuler__euler(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

size_t size_function__Jointposeeuler__position(const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * get_const_function__Jointposeeuler__position(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<float, 3> *>(untyped_member);
  return &member[index];
}

void * get_function__Jointposeeuler__position(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<float, 3> *>(untyped_member);
  return &member[index];
}

void fetch_function__Jointposeeuler__position(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__Jointposeeuler__position(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__Jointposeeuler__position(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__Jointposeeuler__position(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember Jointposeeuler_message_member_array[2] = {
  {
    "euler",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(rm_ros_interfaces::msg::Jointposeeuler, euler),  // bytes offset in struct
    nullptr,  // default value
    size_function__Jointposeeuler__euler,  // size() function pointer
    get_const_function__Jointposeeuler__euler,  // get_const(index) function pointer
    get_function__Jointposeeuler__euler,  // get(index) function pointer
    fetch_function__Jointposeeuler__euler,  // fetch(index, &value) function pointer
    assign_function__Jointposeeuler__euler,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "position",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(rm_ros_interfaces::msg::Jointposeeuler, position),  // bytes offset in struct
    nullptr,  // default value
    size_function__Jointposeeuler__position,  // size() function pointer
    get_const_function__Jointposeeuler__position,  // get_const(index) function pointer
    get_function__Jointposeeuler__position,  // get(index) function pointer
    fetch_function__Jointposeeuler__position,  // fetch(index, &value) function pointer
    assign_function__Jointposeeuler__position,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers Jointposeeuler_message_members = {
  "rm_ros_interfaces::msg",  // message namespace
  "Jointposeeuler",  // message name
  2,  // number of fields
  sizeof(rm_ros_interfaces::msg::Jointposeeuler),
  Jointposeeuler_message_member_array,  // message members
  Jointposeeuler_init_function,  // function to initialize message memory (memory has to be allocated)
  Jointposeeuler_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t Jointposeeuler_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &Jointposeeuler_message_members,
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
get_message_type_support_handle<rm_ros_interfaces::msg::Jointposeeuler>()
{
  return &::rm_ros_interfaces::msg::rosidl_typesupport_introspection_cpp::Jointposeeuler_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, rm_ros_interfaces, msg, Jointposeeuler)() {
  return &::rm_ros_interfaces::msg::rosidl_typesupport_introspection_cpp::Jointposeeuler_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
