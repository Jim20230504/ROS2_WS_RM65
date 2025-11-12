// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from rm_ros_interfaces:msg/Sendproject.idl
// generated code does not contain a copyright notice
#include "rm_ros_interfaces/msg/detail/sendproject__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rm_ros_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "rm_ros_interfaces/msg/detail/sendproject__struct.h"
#include "rm_ros_interfaces/msg/detail/sendproject__functions.h"
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

#include "rosidl_runtime_c/string.h"  // project_path
#include "rosidl_runtime_c/string_functions.h"  // project_path

// forward declare type support functions


using _Sendproject__ros_msg_type = rm_ros_interfaces__msg__Sendproject;

static bool _Sendproject__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _Sendproject__ros_msg_type * ros_message = static_cast<const _Sendproject__ros_msg_type *>(untyped_ros_message);
  // Field name: project_path
  {
    const rosidl_runtime_c__String * str = &ros_message->project_path;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: project_path_len
  {
    cdr << ros_message->project_path_len;
  }

  // Field name: plan_speed
  {
    cdr << ros_message->plan_speed;
  }

  // Field name: only_save
  {
    cdr << ros_message->only_save;
  }

  // Field name: save_id
  {
    cdr << ros_message->save_id;
  }

  // Field name: step_flag
  {
    cdr << ros_message->step_flag;
  }

  // Field name: auto_start
  {
    cdr << ros_message->auto_start;
  }

  // Field name: project_type
  {
    cdr << ros_message->project_type;
  }

  return true;
}

static bool _Sendproject__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _Sendproject__ros_msg_type * ros_message = static_cast<_Sendproject__ros_msg_type *>(untyped_ros_message);
  // Field name: project_path
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->project_path.data) {
      rosidl_runtime_c__String__init(&ros_message->project_path);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->project_path,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'project_path'\n");
      return false;
    }
  }

  // Field name: project_path_len
  {
    cdr >> ros_message->project_path_len;
  }

  // Field name: plan_speed
  {
    cdr >> ros_message->plan_speed;
  }

  // Field name: only_save
  {
    cdr >> ros_message->only_save;
  }

  // Field name: save_id
  {
    cdr >> ros_message->save_id;
  }

  // Field name: step_flag
  {
    cdr >> ros_message->step_flag;
  }

  // Field name: auto_start
  {
    cdr >> ros_message->auto_start;
  }

  // Field name: project_type
  {
    cdr >> ros_message->project_type;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rm_ros_interfaces
size_t get_serialized_size_rm_ros_interfaces__msg__Sendproject(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Sendproject__ros_msg_type * ros_message = static_cast<const _Sendproject__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name project_path
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->project_path.size + 1);
  // field.name project_path_len
  {
    size_t item_size = sizeof(ros_message->project_path_len);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name plan_speed
  {
    size_t item_size = sizeof(ros_message->plan_speed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name only_save
  {
    size_t item_size = sizeof(ros_message->only_save);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name save_id
  {
    size_t item_size = sizeof(ros_message->save_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name step_flag
  {
    size_t item_size = sizeof(ros_message->step_flag);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name auto_start
  {
    size_t item_size = sizeof(ros_message->auto_start);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name project_type
  {
    size_t item_size = sizeof(ros_message->project_type);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _Sendproject__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_rm_ros_interfaces__msg__Sendproject(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rm_ros_interfaces
size_t max_serialized_size_rm_ros_interfaces__msg__Sendproject(
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

  // member: project_path
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: project_path_len
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: plan_speed
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: only_save
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: save_id
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: step_flag
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: auto_start
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: project_type
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = rm_ros_interfaces__msg__Sendproject;
    is_plain =
      (
      offsetof(DataType, project_type) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _Sendproject__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_rm_ros_interfaces__msg__Sendproject(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_Sendproject = {
  "rm_ros_interfaces::msg",
  "Sendproject",
  _Sendproject__cdr_serialize,
  _Sendproject__cdr_deserialize,
  _Sendproject__get_serialized_size,
  _Sendproject__max_serialized_size
};

static rosidl_message_type_support_t _Sendproject__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Sendproject,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, rm_ros_interfaces, msg, Sendproject)() {
  return &_Sendproject__type_support;
}

#if defined(__cplusplus)
}
#endif
