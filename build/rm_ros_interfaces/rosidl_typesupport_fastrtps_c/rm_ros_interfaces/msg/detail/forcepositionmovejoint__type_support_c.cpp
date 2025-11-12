// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from rm_ros_interfaces:msg/Forcepositionmovejoint.idl
// generated code does not contain a copyright notice
#include "rm_ros_interfaces/msg/detail/forcepositionmovejoint__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rm_ros_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "rm_ros_interfaces/msg/detail/forcepositionmovejoint__struct.h"
#include "rm_ros_interfaces/msg/detail/forcepositionmovejoint__functions.h"
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

#include "rosidl_runtime_c/primitives_sequence.h"  // joint
#include "rosidl_runtime_c/primitives_sequence_functions.h"  // joint

// forward declare type support functions


using _Forcepositionmovejoint__ros_msg_type = rm_ros_interfaces__msg__Forcepositionmovejoint;

static bool _Forcepositionmovejoint__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _Forcepositionmovejoint__ros_msg_type * ros_message = static_cast<const _Forcepositionmovejoint__ros_msg_type *>(untyped_ros_message);
  // Field name: joint
  {
    size_t size = ros_message->joint.size;
    auto array_ptr = ros_message->joint.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: sensor
  {
    cdr << ros_message->sensor;
  }

  // Field name: mode
  {
    cdr << ros_message->mode;
  }

  // Field name: dir
  {
    cdr << ros_message->dir;
  }

  // Field name: force
  {
    cdr << ros_message->force;
  }

  // Field name: follow
  {
    cdr << (ros_message->follow ? true : false);
  }

  // Field name: dof
  {
    cdr << ros_message->dof;
  }

  return true;
}

static bool _Forcepositionmovejoint__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _Forcepositionmovejoint__ros_msg_type * ros_message = static_cast<_Forcepositionmovejoint__ros_msg_type *>(untyped_ros_message);
  // Field name: joint
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);

    // Check there are at least 'size' remaining bytes in the CDR stream before resizing
    auto old_state = cdr.getState();
    bool correct_size = cdr.jump(size);
    cdr.setState(old_state);
    if (!correct_size) {
      fprintf(stderr, "sequence size exceeds remaining buffer\n");
      return false;
    }

    if (ros_message->joint.data) {
      rosidl_runtime_c__float__Sequence__fini(&ros_message->joint);
    }
    if (!rosidl_runtime_c__float__Sequence__init(&ros_message->joint, size)) {
      fprintf(stderr, "failed to create array for field 'joint'");
      return false;
    }
    auto array_ptr = ros_message->joint.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: sensor
  {
    cdr >> ros_message->sensor;
  }

  // Field name: mode
  {
    cdr >> ros_message->mode;
  }

  // Field name: dir
  {
    cdr >> ros_message->dir;
  }

  // Field name: force
  {
    cdr >> ros_message->force;
  }

  // Field name: follow
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->follow = tmp ? true : false;
  }

  // Field name: dof
  {
    cdr >> ros_message->dof;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rm_ros_interfaces
size_t get_serialized_size_rm_ros_interfaces__msg__Forcepositionmovejoint(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Forcepositionmovejoint__ros_msg_type * ros_message = static_cast<const _Forcepositionmovejoint__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name joint
  {
    size_t array_size = ros_message->joint.size;
    auto array_ptr = ros_message->joint.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name sensor
  {
    size_t item_size = sizeof(ros_message->sensor);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name mode
  {
    size_t item_size = sizeof(ros_message->mode);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name dir
  {
    size_t item_size = sizeof(ros_message->dir);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name force
  {
    size_t item_size = sizeof(ros_message->force);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name follow
  {
    size_t item_size = sizeof(ros_message->follow);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name dof
  {
    size_t item_size = sizeof(ros_message->dof);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _Forcepositionmovejoint__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_rm_ros_interfaces__msg__Forcepositionmovejoint(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rm_ros_interfaces
size_t max_serialized_size_rm_ros_interfaces__msg__Forcepositionmovejoint(
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

  // member: joint
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: sensor
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: mode
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: dir
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: force
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: follow
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: dof
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = rm_ros_interfaces__msg__Forcepositionmovejoint;
    is_plain =
      (
      offsetof(DataType, dof) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _Forcepositionmovejoint__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_rm_ros_interfaces__msg__Forcepositionmovejoint(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_Forcepositionmovejoint = {
  "rm_ros_interfaces::msg",
  "Forcepositionmovejoint",
  _Forcepositionmovejoint__cdr_serialize,
  _Forcepositionmovejoint__cdr_deserialize,
  _Forcepositionmovejoint__get_serialized_size,
  _Forcepositionmovejoint__max_serialized_size
};

static rosidl_message_type_support_t _Forcepositionmovejoint__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Forcepositionmovejoint,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, rm_ros_interfaces, msg, Forcepositionmovejoint)() {
  return &_Forcepositionmovejoint__type_support;
}

#if defined(__cplusplus)
}
#endif
