// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from rm_ros_interfaces:msg/Rmplusstate.idl
// generated code does not contain a copyright notice
#include "rm_ros_interfaces/msg/detail/rmplusstate__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rm_ros_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "rm_ros_interfaces/msg/detail/rmplusstate__struct.h"
#include "rm_ros_interfaces/msg/detail/rmplusstate__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _Rmplusstate__ros_msg_type = rm_ros_interfaces__msg__Rmplusstate;

static bool _Rmplusstate__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _Rmplusstate__ros_msg_type * ros_message = static_cast<const _Rmplusstate__ros_msg_type *>(untyped_ros_message);
  // Field name: sys_state
  {
    cdr << ros_message->sys_state;
  }

  // Field name: dof_state
  {
    size_t size = 12;
    auto array_ptr = ros_message->dof_state;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: dof_err
  {
    size_t size = 12;
    auto array_ptr = ros_message->dof_err;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: pos
  {
    size_t size = 12;
    auto array_ptr = ros_message->pos;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: speed
  {
    size_t size = 12;
    auto array_ptr = ros_message->speed;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: angle
  {
    size_t size = 12;
    auto array_ptr = ros_message->angle;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: current
  {
    size_t size = 12;
    auto array_ptr = ros_message->current;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: normal_force
  {
    size_t size = 18;
    auto array_ptr = ros_message->normal_force;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: tangential_force
  {
    size_t size = 18;
    auto array_ptr = ros_message->tangential_force;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: tangential_force_dir
  {
    size_t size = 18;
    auto array_ptr = ros_message->tangential_force_dir;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: tsa
  {
    size_t size = 12;
    auto array_ptr = ros_message->tsa;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: tma
  {
    size_t size = 12;
    auto array_ptr = ros_message->tma;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: touch_data
  {
    size_t size = 18;
    auto array_ptr = ros_message->touch_data;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: force
  {
    size_t size = 12;
    auto array_ptr = ros_message->force;
    cdr.serializeArray(array_ptr, size);
  }

  return true;
}

static bool _Rmplusstate__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _Rmplusstate__ros_msg_type * ros_message = static_cast<_Rmplusstate__ros_msg_type *>(untyped_ros_message);
  // Field name: sys_state
  {
    cdr >> ros_message->sys_state;
  }

  // Field name: dof_state
  {
    size_t size = 12;
    auto array_ptr = ros_message->dof_state;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: dof_err
  {
    size_t size = 12;
    auto array_ptr = ros_message->dof_err;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: pos
  {
    size_t size = 12;
    auto array_ptr = ros_message->pos;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: speed
  {
    size_t size = 12;
    auto array_ptr = ros_message->speed;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: angle
  {
    size_t size = 12;
    auto array_ptr = ros_message->angle;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: current
  {
    size_t size = 12;
    auto array_ptr = ros_message->current;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: normal_force
  {
    size_t size = 18;
    auto array_ptr = ros_message->normal_force;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: tangential_force
  {
    size_t size = 18;
    auto array_ptr = ros_message->tangential_force;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: tangential_force_dir
  {
    size_t size = 18;
    auto array_ptr = ros_message->tangential_force_dir;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: tsa
  {
    size_t size = 12;
    auto array_ptr = ros_message->tsa;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: tma
  {
    size_t size = 12;
    auto array_ptr = ros_message->tma;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: touch_data
  {
    size_t size = 18;
    auto array_ptr = ros_message->touch_data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: force
  {
    size_t size = 12;
    auto array_ptr = ros_message->force;
    cdr.deserializeArray(array_ptr, size);
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rm_ros_interfaces
size_t get_serialized_size_rm_ros_interfaces__msg__Rmplusstate(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Rmplusstate__ros_msg_type * ros_message = static_cast<const _Rmplusstate__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name sys_state
  {
    size_t item_size = sizeof(ros_message->sys_state);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name dof_state
  {
    size_t array_size = 12;
    auto array_ptr = ros_message->dof_state;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name dof_err
  {
    size_t array_size = 12;
    auto array_ptr = ros_message->dof_err;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name pos
  {
    size_t array_size = 12;
    auto array_ptr = ros_message->pos;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name speed
  {
    size_t array_size = 12;
    auto array_ptr = ros_message->speed;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name angle
  {
    size_t array_size = 12;
    auto array_ptr = ros_message->angle;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name current
  {
    size_t array_size = 12;
    auto array_ptr = ros_message->current;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name normal_force
  {
    size_t array_size = 18;
    auto array_ptr = ros_message->normal_force;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name tangential_force
  {
    size_t array_size = 18;
    auto array_ptr = ros_message->tangential_force;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name tangential_force_dir
  {
    size_t array_size = 18;
    auto array_ptr = ros_message->tangential_force_dir;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name tsa
  {
    size_t array_size = 12;
    auto array_ptr = ros_message->tsa;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name tma
  {
    size_t array_size = 12;
    auto array_ptr = ros_message->tma;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name touch_data
  {
    size_t array_size = 18;
    auto array_ptr = ros_message->touch_data;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name force
  {
    size_t array_size = 12;
    auto array_ptr = ros_message->force;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _Rmplusstate__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_rm_ros_interfaces__msg__Rmplusstate(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rm_ros_interfaces
size_t max_serialized_size_rm_ros_interfaces__msg__Rmplusstate(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: sys_state
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: dof_state
  {
    size_t array_size = 12;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: dof_err
  {
    size_t array_size = 12;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: pos
  {
    size_t array_size = 12;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: speed
  {
    size_t array_size = 12;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: angle
  {
    size_t array_size = 12;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: current
  {
    size_t array_size = 12;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: normal_force
  {
    size_t array_size = 18;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: tangential_force
  {
    size_t array_size = 18;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: tangential_force_dir
  {
    size_t array_size = 18;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: tsa
  {
    size_t array_size = 12;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: tma
  {
    size_t array_size = 12;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: touch_data
  {
    size_t array_size = 18;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: force
  {
    size_t array_size = 12;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = rm_ros_interfaces__msg__Rmplusstate;
    is_plain =
      (
      offsetof(DataType, force) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _Rmplusstate__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_rm_ros_interfaces__msg__Rmplusstate(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_Rmplusstate = {
  "rm_ros_interfaces::msg",
  "Rmplusstate",
  _Rmplusstate__cdr_serialize,
  _Rmplusstate__cdr_deserialize,
  _Rmplusstate__get_serialized_size,
  _Rmplusstate__max_serialized_size
};

static rosidl_message_type_support_t _Rmplusstate__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Rmplusstate,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, rm_ros_interfaces, msg, Rmplusstate)() {
  return &_Rmplusstate__type_support;
}

#if defined(__cplusplus)
}
#endif
