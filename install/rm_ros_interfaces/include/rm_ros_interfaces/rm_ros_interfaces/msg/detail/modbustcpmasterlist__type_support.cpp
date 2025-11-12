// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from rm_ros_interfaces:msg/Modbustcpmasterlist.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "rm_ros_interfaces/msg/detail/modbustcpmasterlist__struct.hpp"
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

void Modbustcpmasterlist_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) rm_ros_interfaces::msg::Modbustcpmasterlist(_init);
}

void Modbustcpmasterlist_fini_function(void * message_memory)
{
  auto typed_message = static_cast<rm_ros_interfaces::msg::Modbustcpmasterlist *>(message_memory);
  typed_message->~Modbustcpmasterlist();
}

size_t size_function__Modbustcpmasterlist__master_list(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<rm_ros_interfaces::msg::Modbustcpmasterinfo> *>(untyped_member);
  return member->size();
}

const void * get_const_function__Modbustcpmasterlist__master_list(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<rm_ros_interfaces::msg::Modbustcpmasterinfo> *>(untyped_member);
  return &member[index];
}

void * get_function__Modbustcpmasterlist__master_list(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<rm_ros_interfaces::msg::Modbustcpmasterinfo> *>(untyped_member);
  return &member[index];
}

void fetch_function__Modbustcpmasterlist__master_list(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const rm_ros_interfaces::msg::Modbustcpmasterinfo *>(
    get_const_function__Modbustcpmasterlist__master_list(untyped_member, index));
  auto & value = *reinterpret_cast<rm_ros_interfaces::msg::Modbustcpmasterinfo *>(untyped_value);
  value = item;
}

void assign_function__Modbustcpmasterlist__master_list(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<rm_ros_interfaces::msg::Modbustcpmasterinfo *>(
    get_function__Modbustcpmasterlist__master_list(untyped_member, index));
  const auto & value = *reinterpret_cast<const rm_ros_interfaces::msg::Modbustcpmasterinfo *>(untyped_value);
  item = value;
}

void resize_function__Modbustcpmasterlist__master_list(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<rm_ros_interfaces::msg::Modbustcpmasterinfo> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember Modbustcpmasterlist_message_member_array[6] = {
  {
    "page_num",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rm_ros_interfaces::msg::Modbustcpmasterlist, page_num),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "page_size",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rm_ros_interfaces::msg::Modbustcpmasterlist, page_size),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "total_size",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rm_ros_interfaces::msg::Modbustcpmasterlist, total_size),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "vague_search",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rm_ros_interfaces::msg::Modbustcpmasterlist, vague_search),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "master_list",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<rm_ros_interfaces::msg::Modbustcpmasterinfo>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rm_ros_interfaces::msg::Modbustcpmasterlist, master_list),  // bytes offset in struct
    nullptr,  // default value
    size_function__Modbustcpmasterlist__master_list,  // size() function pointer
    get_const_function__Modbustcpmasterlist__master_list,  // get_const(index) function pointer
    get_function__Modbustcpmasterlist__master_list,  // get(index) function pointer
    fetch_function__Modbustcpmasterlist__master_list,  // fetch(index, &value) function pointer
    assign_function__Modbustcpmasterlist__master_list,  // assign(index, value) function pointer
    resize_function__Modbustcpmasterlist__master_list  // resize(index) function pointer
  },
  {
    "state",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rm_ros_interfaces::msg::Modbustcpmasterlist, state),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers Modbustcpmasterlist_message_members = {
  "rm_ros_interfaces::msg",  // message namespace
  "Modbustcpmasterlist",  // message name
  6,  // number of fields
  sizeof(rm_ros_interfaces::msg::Modbustcpmasterlist),
  Modbustcpmasterlist_message_member_array,  // message members
  Modbustcpmasterlist_init_function,  // function to initialize message memory (memory has to be allocated)
  Modbustcpmasterlist_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t Modbustcpmasterlist_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &Modbustcpmasterlist_message_members,
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
get_message_type_support_handle<rm_ros_interfaces::msg::Modbustcpmasterlist>()
{
  return &::rm_ros_interfaces::msg::rosidl_typesupport_introspection_cpp::Modbustcpmasterlist_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, rm_ros_interfaces, msg, Modbustcpmasterlist)() {
  return &::rm_ros_interfaces::msg::rosidl_typesupport_introspection_cpp::Modbustcpmasterlist_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
