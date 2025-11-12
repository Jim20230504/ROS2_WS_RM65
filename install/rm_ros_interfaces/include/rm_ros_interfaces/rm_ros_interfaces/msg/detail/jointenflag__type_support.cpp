// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from rm_ros_interfaces:msg/Jointenflag.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "rm_ros_interfaces/msg/detail/jointenflag__struct.hpp"
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

void Jointenflag_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) rm_ros_interfaces::msg::Jointenflag(_init);
}

void Jointenflag_fini_function(void * message_memory)
{
  auto typed_message = static_cast<rm_ros_interfaces::msg::Jointenflag *>(message_memory);
  typed_message->~Jointenflag();
}

size_t size_function__Jointenflag__joint_en_flag(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<bool> *>(untyped_member);
  return member->size();
}

void fetch_function__Jointenflag__joint_en_flag(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & member = *reinterpret_cast<const std::vector<bool> *>(untyped_member);
  auto & value = *reinterpret_cast<bool *>(untyped_value);
  value = member[index];
}

void assign_function__Jointenflag__joint_en_flag(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & member = *reinterpret_cast<std::vector<bool> *>(untyped_member);
  const auto & value = *reinterpret_cast<const bool *>(untyped_value);
  member[index] = value;
}

void resize_function__Jointenflag__joint_en_flag(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<bool> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember Jointenflag_message_member_array[1] = {
  {
    "joint_en_flag",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rm_ros_interfaces::msg::Jointenflag, joint_en_flag),  // bytes offset in struct
    nullptr,  // default value
    size_function__Jointenflag__joint_en_flag,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    fetch_function__Jointenflag__joint_en_flag,  // fetch(index, &value) function pointer
    assign_function__Jointenflag__joint_en_flag,  // assign(index, value) function pointer
    resize_function__Jointenflag__joint_en_flag  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers Jointenflag_message_members = {
  "rm_ros_interfaces::msg",  // message namespace
  "Jointenflag",  // message name
  1,  // number of fields
  sizeof(rm_ros_interfaces::msg::Jointenflag),
  Jointenflag_message_member_array,  // message members
  Jointenflag_init_function,  // function to initialize message memory (memory has to be allocated)
  Jointenflag_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t Jointenflag_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &Jointenflag_message_members,
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
get_message_type_support_handle<rm_ros_interfaces::msg::Jointenflag>()
{
  return &::rm_ros_interfaces::msg::rosidl_typesupport_introspection_cpp::Jointenflag_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, rm_ros_interfaces, msg, Jointenflag)() {
  return &::rm_ros_interfaces::msg::rosidl_typesupport_introspection_cpp::Jointenflag_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
