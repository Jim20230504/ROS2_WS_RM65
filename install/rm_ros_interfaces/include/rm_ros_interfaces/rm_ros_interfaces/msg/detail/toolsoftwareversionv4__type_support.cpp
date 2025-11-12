// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from rm_ros_interfaces:msg/Toolsoftwareversionv4.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "rm_ros_interfaces/msg/detail/toolsoftwareversionv4__struct.hpp"
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

void Toolsoftwareversionv4_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) rm_ros_interfaces::msg::Toolsoftwareversionv4(_init);
}

void Toolsoftwareversionv4_fini_function(void * message_memory)
{
  auto typed_message = static_cast<rm_ros_interfaces::msg::Toolsoftwareversionv4 *>(message_memory);
  typed_message->~Toolsoftwareversionv4();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember Toolsoftwareversionv4_message_member_array[2] = {
  {
    "tool_version",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rm_ros_interfaces::msg::Toolsoftwareversionv4, tool_version),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "state",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rm_ros_interfaces::msg::Toolsoftwareversionv4, state),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers Toolsoftwareversionv4_message_members = {
  "rm_ros_interfaces::msg",  // message namespace
  "Toolsoftwareversionv4",  // message name
  2,  // number of fields
  sizeof(rm_ros_interfaces::msg::Toolsoftwareversionv4),
  Toolsoftwareversionv4_message_member_array,  // message members
  Toolsoftwareversionv4_init_function,  // function to initialize message memory (memory has to be allocated)
  Toolsoftwareversionv4_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t Toolsoftwareversionv4_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &Toolsoftwareversionv4_message_members,
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
get_message_type_support_handle<rm_ros_interfaces::msg::Toolsoftwareversionv4>()
{
  return &::rm_ros_interfaces::msg::rosidl_typesupport_introspection_cpp::Toolsoftwareversionv4_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, rm_ros_interfaces, msg, Toolsoftwareversionv4)() {
  return &::rm_ros_interfaces::msg::rosidl_typesupport_introspection_cpp::Toolsoftwareversionv4_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
