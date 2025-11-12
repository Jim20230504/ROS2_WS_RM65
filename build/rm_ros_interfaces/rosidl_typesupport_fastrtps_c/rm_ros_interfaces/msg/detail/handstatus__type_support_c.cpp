// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from rm_ros_interfaces:msg/Handstatus.idl
// generated code does not contain a copyright notice
#include "rm_ros_interfaces/msg/detail/handstatus__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rm_ros_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "rm_ros_interfaces/msg/detail/handstatus__struct.h"
#include "rm_ros_interfaces/msg/detail/handstatus__functions.h"
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


using _Handstatus__ros_msg_type = rm_ros_interfaces__msg__Handstatus;

static bool _Handstatus__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _Handstatus__ros_msg_type * ros_message = static_cast<const _Handstatus__ros_msg_type *>(untyped_ros_message);
  // Field name: hand_angle
  {
    size_t size = 6;
    auto array_ptr = ros_message->hand_angle;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: hand_pos
  {
    size_t size = 6;
    auto array_ptr = ros_message->hand_pos;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: hand_state
  {
    size_t size = 6;
    auto array_ptr = ros_message->hand_state;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: hand_force
  {
    size_t size = 6;
    auto array_ptr = ros_message->hand_force;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: hand_err
  {
    cdr << ros_message->hand_err;
  }

  return true;
}

static bool _Handstatus__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _Handstatus__ros_msg_type * ros_message = static_cast<_Handstatus__ros_msg_type *>(untyped_ros_message);
  // Field name: hand_angle
  {
    size_t size = 6;
    auto array_ptr = ros_message->hand_angle;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: hand_pos
  {
    size_t size = 6;
    auto array_ptr = ros_message->hand_pos;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: hand_state
  {
    size_t size = 6;
    auto array_ptr = ros_message->hand_state;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: hand_force
  {
    size_t size = 6;
    auto array_ptr = ros_message->hand_force;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: hand_err
  {
    cdr >> ros_message->hand_err;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rm_ros_interfaces
size_t get_serialized_size_rm_ros_interfaces__msg__Handstatus(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Handstatus__ros_msg_type * ros_message = static_cast<const _Handstatus__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name hand_angle
  {
    size_t array_size = 6;
    auto array_ptr = ros_message->hand_angle;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name hand_pos
  {
    size_t array_size = 6;
    auto array_ptr = ros_message->hand_pos;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name hand_state
  {
    size_t array_size = 6;
    auto array_ptr = ros_message->hand_state;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name hand_force
  {
    size_t array_size = 6;
    auto array_ptr = ros_message->hand_force;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name hand_err
  {
    size_t item_size = sizeof(ros_message->hand_err);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _Handstatus__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_rm_ros_interfaces__msg__Handstatus(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rm_ros_interfaces
size_t max_serialized_size_rm_ros_interfaces__msg__Handstatus(
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

  // member: hand_angle
  {
    size_t array_size = 6;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: hand_pos
  {
    size_t array_size = 6;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: hand_state
  {
    size_t array_size = 6;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: hand_force
  {
    size_t array_size = 6;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: hand_err
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = rm_ros_interfaces__msg__Handstatus;
    is_plain =
      (
      offsetof(DataType, hand_err) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _Handstatus__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_rm_ros_interfaces__msg__Handstatus(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_Handstatus = {
  "rm_ros_interfaces::msg",
  "Handstatus",
  _Handstatus__cdr_serialize,
  _Handstatus__cdr_deserialize,
  _Handstatus__get_serialized_size,
  _Handstatus__max_serialized_size
};

static rosidl_message_type_support_t _Handstatus__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Handstatus,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, rm_ros_interfaces, msg, Handstatus)() {
  return &_Handstatus__type_support;
}

#if defined(__cplusplus)
}
#endif
