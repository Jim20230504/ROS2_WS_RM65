// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from rm_ros_interfaces:msg/Jointtemperature.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "rm_ros_interfaces/msg/detail/jointtemperature__struct.hpp"
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

void Jointtemperature_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) rm_ros_interfaces::msg::Jointtemperature(_init);
}

void Jointtemperature_fini_function(void * message_memory)
{
  auto typed_message = static_cast<rm_ros_interfaces::msg::Jointtemperature *>(message_memory);
  typed_message->~Jointtemperature();
}

size_t size_function__Jointtemperature__joint_temperature(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<float> *>(untyped_member);
  return member->size();
}

const void * get_const_function__Jointtemperature__joint_temperature(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<float> *>(untyped_member);
  return &member[index];
}

void * get_function__Jointtemperature__joint_temperature(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<float> *>(untyped_member);
  return &member[index];
}

void fetch_function__Jointtemperature__joint_temperature(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__Jointtemperature__joint_temperature(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__Jointtemperature__joint_temperature(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__Jointtemperature__joint_temperature(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

void resize_function__Jointtemperature__joint_temperature(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<float> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember Jointtemperature_message_member_array[1] = {
  {
    "joint_temperature",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rm_ros_interfaces::msg::Jointtemperature, joint_temperature),  // bytes offset in struct
    nullptr,  // default value
    size_function__Jointtemperature__joint_temperature,  // size() function pointer
    get_const_function__Jointtemperature__joint_temperature,  // get_const(index) function pointer
    get_function__Jointtemperature__joint_temperature,  // get(index) function pointer
    fetch_function__Jointtemperature__joint_temperature,  // fetch(index, &value) function pointer
    assign_function__Jointtemperature__joint_temperature,  // assign(index, value) function pointer
    resize_function__Jointtemperature__joint_temperature  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers Jointtemperature_message_members = {
  "rm_ros_interfaces::msg",  // message namespace
  "Jointtemperature",  // message name
  1,  // number of fields
  sizeof(rm_ros_interfaces::msg::Jointtemperature),
  Jointtemperature_message_member_array,  // message members
  Jointtemperature_init_function,  // function to initialize message memory (memory has to be allocated)
  Jointtemperature_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t Jointtemperature_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &Jointtemperature_message_members,
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
get_message_type_support_handle<rm_ros_interfaces::msg::Jointtemperature>()
{
  return &::rm_ros_interfaces::msg::rosidl_typesupport_introspection_cpp::Jointtemperature_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, rm_ros_interfaces, msg, Jointtemperature)() {
  return &::rm_ros_interfaces::msg::rosidl_typesupport_introspection_cpp::Jointtemperature_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
