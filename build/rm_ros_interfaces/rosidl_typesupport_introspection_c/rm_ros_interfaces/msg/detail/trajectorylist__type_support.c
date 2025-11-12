// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from rm_ros_interfaces:msg/Trajectorylist.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "rm_ros_interfaces/msg/detail/trajectorylist__rosidl_typesupport_introspection_c.h"
#include "rm_ros_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "rm_ros_interfaces/msg/detail/trajectorylist__functions.h"
#include "rm_ros_interfaces/msg/detail/trajectorylist__struct.h"


// Include directives for member types
// Member `vague_search`
#include "rosidl_runtime_c/string_functions.h"
// Member `tra_list`
#include "rm_ros_interfaces/msg/trajectoryinfo.h"
// Member `tra_list`
#include "rm_ros_interfaces/msg/detail/trajectoryinfo__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void rm_ros_interfaces__msg__Trajectorylist__rosidl_typesupport_introspection_c__Trajectorylist_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  rm_ros_interfaces__msg__Trajectorylist__init(message_memory);
}

void rm_ros_interfaces__msg__Trajectorylist__rosidl_typesupport_introspection_c__Trajectorylist_fini_function(void * message_memory)
{
  rm_ros_interfaces__msg__Trajectorylist__fini(message_memory);
}

size_t rm_ros_interfaces__msg__Trajectorylist__rosidl_typesupport_introspection_c__size_function__Trajectorylist__tra_list(
  const void * untyped_member)
{
  const rm_ros_interfaces__msg__Trajectoryinfo__Sequence * member =
    (const rm_ros_interfaces__msg__Trajectoryinfo__Sequence *)(untyped_member);
  return member->size;
}

const void * rm_ros_interfaces__msg__Trajectorylist__rosidl_typesupport_introspection_c__get_const_function__Trajectorylist__tra_list(
  const void * untyped_member, size_t index)
{
  const rm_ros_interfaces__msg__Trajectoryinfo__Sequence * member =
    (const rm_ros_interfaces__msg__Trajectoryinfo__Sequence *)(untyped_member);
  return &member->data[index];
}

void * rm_ros_interfaces__msg__Trajectorylist__rosidl_typesupport_introspection_c__get_function__Trajectorylist__tra_list(
  void * untyped_member, size_t index)
{
  rm_ros_interfaces__msg__Trajectoryinfo__Sequence * member =
    (rm_ros_interfaces__msg__Trajectoryinfo__Sequence *)(untyped_member);
  return &member->data[index];
}

void rm_ros_interfaces__msg__Trajectorylist__rosidl_typesupport_introspection_c__fetch_function__Trajectorylist__tra_list(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rm_ros_interfaces__msg__Trajectoryinfo * item =
    ((const rm_ros_interfaces__msg__Trajectoryinfo *)
    rm_ros_interfaces__msg__Trajectorylist__rosidl_typesupport_introspection_c__get_const_function__Trajectorylist__tra_list(untyped_member, index));
  rm_ros_interfaces__msg__Trajectoryinfo * value =
    (rm_ros_interfaces__msg__Trajectoryinfo *)(untyped_value);
  *value = *item;
}

void rm_ros_interfaces__msg__Trajectorylist__rosidl_typesupport_introspection_c__assign_function__Trajectorylist__tra_list(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rm_ros_interfaces__msg__Trajectoryinfo * item =
    ((rm_ros_interfaces__msg__Trajectoryinfo *)
    rm_ros_interfaces__msg__Trajectorylist__rosidl_typesupport_introspection_c__get_function__Trajectorylist__tra_list(untyped_member, index));
  const rm_ros_interfaces__msg__Trajectoryinfo * value =
    (const rm_ros_interfaces__msg__Trajectoryinfo *)(untyped_value);
  *item = *value;
}

bool rm_ros_interfaces__msg__Trajectorylist__rosidl_typesupport_introspection_c__resize_function__Trajectorylist__tra_list(
  void * untyped_member, size_t size)
{
  rm_ros_interfaces__msg__Trajectoryinfo__Sequence * member =
    (rm_ros_interfaces__msg__Trajectoryinfo__Sequence *)(untyped_member);
  rm_ros_interfaces__msg__Trajectoryinfo__Sequence__fini(member);
  return rm_ros_interfaces__msg__Trajectoryinfo__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember rm_ros_interfaces__msg__Trajectorylist__rosidl_typesupport_introspection_c__Trajectorylist_message_member_array[6] = {
  {
    "page_num",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rm_ros_interfaces__msg__Trajectorylist, page_num),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "page_size",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rm_ros_interfaces__msg__Trajectorylist, page_size),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "total_size",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rm_ros_interfaces__msg__Trajectorylist, total_size),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "vague_search",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rm_ros_interfaces__msg__Trajectorylist, vague_search),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "tra_list",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rm_ros_interfaces__msg__Trajectorylist, tra_list),  // bytes offset in struct
    NULL,  // default value
    rm_ros_interfaces__msg__Trajectorylist__rosidl_typesupport_introspection_c__size_function__Trajectorylist__tra_list,  // size() function pointer
    rm_ros_interfaces__msg__Trajectorylist__rosidl_typesupport_introspection_c__get_const_function__Trajectorylist__tra_list,  // get_const(index) function pointer
    rm_ros_interfaces__msg__Trajectorylist__rosidl_typesupport_introspection_c__get_function__Trajectorylist__tra_list,  // get(index) function pointer
    rm_ros_interfaces__msg__Trajectorylist__rosidl_typesupport_introspection_c__fetch_function__Trajectorylist__tra_list,  // fetch(index, &value) function pointer
    rm_ros_interfaces__msg__Trajectorylist__rosidl_typesupport_introspection_c__assign_function__Trajectorylist__tra_list,  // assign(index, value) function pointer
    rm_ros_interfaces__msg__Trajectorylist__rosidl_typesupport_introspection_c__resize_function__Trajectorylist__tra_list  // resize(index) function pointer
  },
  {
    "state",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rm_ros_interfaces__msg__Trajectorylist, state),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers rm_ros_interfaces__msg__Trajectorylist__rosidl_typesupport_introspection_c__Trajectorylist_message_members = {
  "rm_ros_interfaces__msg",  // message namespace
  "Trajectorylist",  // message name
  6,  // number of fields
  sizeof(rm_ros_interfaces__msg__Trajectorylist),
  rm_ros_interfaces__msg__Trajectorylist__rosidl_typesupport_introspection_c__Trajectorylist_message_member_array,  // message members
  rm_ros_interfaces__msg__Trajectorylist__rosidl_typesupport_introspection_c__Trajectorylist_init_function,  // function to initialize message memory (memory has to be allocated)
  rm_ros_interfaces__msg__Trajectorylist__rosidl_typesupport_introspection_c__Trajectorylist_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t rm_ros_interfaces__msg__Trajectorylist__rosidl_typesupport_introspection_c__Trajectorylist_message_type_support_handle = {
  0,
  &rm_ros_interfaces__msg__Trajectorylist__rosidl_typesupport_introspection_c__Trajectorylist_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_rm_ros_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rm_ros_interfaces, msg, Trajectorylist)() {
  rm_ros_interfaces__msg__Trajectorylist__rosidl_typesupport_introspection_c__Trajectorylist_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rm_ros_interfaces, msg, Trajectoryinfo)();
  if (!rm_ros_interfaces__msg__Trajectorylist__rosidl_typesupport_introspection_c__Trajectorylist_message_type_support_handle.typesupport_identifier) {
    rm_ros_interfaces__msg__Trajectorylist__rosidl_typesupport_introspection_c__Trajectorylist_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &rm_ros_interfaces__msg__Trajectorylist__rosidl_typesupport_introspection_c__Trajectorylist_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
