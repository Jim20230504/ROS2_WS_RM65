// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from rm_ros_interfaces:msg/Rmplusbase.idl
// generated code does not contain a copyright notice
#include "rm_ros_interfaces/msg/detail/rmplusbase__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rm_ros_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "rm_ros_interfaces/msg/detail/rmplusbase__struct.h"
#include "rm_ros_interfaces/msg/detail/rmplusbase__functions.h"
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

#include "rosidl_runtime_c/string.h"  // bv, hv, manu, sv
#include "rosidl_runtime_c/string_functions.h"  // bv, hv, manu, sv

// forward declare type support functions


using _Rmplusbase__ros_msg_type = rm_ros_interfaces__msg__Rmplusbase;

static bool _Rmplusbase__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _Rmplusbase__ros_msg_type * ros_message = static_cast<const _Rmplusbase__ros_msg_type *>(untyped_ros_message);
  // Field name: manu
  {
    const rosidl_runtime_c__String * str = &ros_message->manu;
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

  // Field name: type
  {
    cdr << ros_message->type;
  }

  // Field name: hv
  {
    const rosidl_runtime_c__String * str = &ros_message->hv;
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

  // Field name: sv
  {
    const rosidl_runtime_c__String * str = &ros_message->sv;
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

  // Field name: bv
  {
    const rosidl_runtime_c__String * str = &ros_message->bv;
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

  // Field name: id
  {
    cdr << ros_message->id;
  }

  // Field name: dof
  {
    cdr << ros_message->dof;
  }

  // Field name: check
  {
    cdr << ros_message->check;
  }

  // Field name: bee
  {
    cdr << ros_message->bee;
  }

  // Field name: force
  {
    cdr << (ros_message->force ? true : false);
  }

  // Field name: touch
  {
    cdr << (ros_message->touch ? true : false);
  }

  // Field name: touch_num
  {
    cdr << ros_message->touch_num;
  }

  // Field name: touch_sw
  {
    cdr << ros_message->touch_sw;
  }

  // Field name: hand
  {
    cdr << ros_message->hand;
  }

  // Field name: pos_up
  {
    size_t size = 12;
    auto array_ptr = ros_message->pos_up;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: pos_low
  {
    size_t size = 12;
    auto array_ptr = ros_message->pos_low;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: angle_up
  {
    size_t size = 12;
    auto array_ptr = ros_message->angle_up;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: angle_low
  {
    size_t size = 12;
    auto array_ptr = ros_message->angle_low;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: speed_up
  {
    size_t size = 12;
    auto array_ptr = ros_message->speed_up;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: speed_low
  {
    size_t size = 12;
    auto array_ptr = ros_message->speed_low;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: force_up
  {
    size_t size = 12;
    auto array_ptr = ros_message->force_up;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: force_low
  {
    size_t size = 12;
    auto array_ptr = ros_message->force_low;
    cdr.serializeArray(array_ptr, size);
  }

  return true;
}

static bool _Rmplusbase__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _Rmplusbase__ros_msg_type * ros_message = static_cast<_Rmplusbase__ros_msg_type *>(untyped_ros_message);
  // Field name: manu
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->manu.data) {
      rosidl_runtime_c__String__init(&ros_message->manu);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->manu,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'manu'\n");
      return false;
    }
  }

  // Field name: type
  {
    cdr >> ros_message->type;
  }

  // Field name: hv
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->hv.data) {
      rosidl_runtime_c__String__init(&ros_message->hv);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->hv,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'hv'\n");
      return false;
    }
  }

  // Field name: sv
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->sv.data) {
      rosidl_runtime_c__String__init(&ros_message->sv);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->sv,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'sv'\n");
      return false;
    }
  }

  // Field name: bv
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->bv.data) {
      rosidl_runtime_c__String__init(&ros_message->bv);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->bv,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'bv'\n");
      return false;
    }
  }

  // Field name: id
  {
    cdr >> ros_message->id;
  }

  // Field name: dof
  {
    cdr >> ros_message->dof;
  }

  // Field name: check
  {
    cdr >> ros_message->check;
  }

  // Field name: bee
  {
    cdr >> ros_message->bee;
  }

  // Field name: force
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->force = tmp ? true : false;
  }

  // Field name: touch
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->touch = tmp ? true : false;
  }

  // Field name: touch_num
  {
    cdr >> ros_message->touch_num;
  }

  // Field name: touch_sw
  {
    cdr >> ros_message->touch_sw;
  }

  // Field name: hand
  {
    cdr >> ros_message->hand;
  }

  // Field name: pos_up
  {
    size_t size = 12;
    auto array_ptr = ros_message->pos_up;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: pos_low
  {
    size_t size = 12;
    auto array_ptr = ros_message->pos_low;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: angle_up
  {
    size_t size = 12;
    auto array_ptr = ros_message->angle_up;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: angle_low
  {
    size_t size = 12;
    auto array_ptr = ros_message->angle_low;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: speed_up
  {
    size_t size = 12;
    auto array_ptr = ros_message->speed_up;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: speed_low
  {
    size_t size = 12;
    auto array_ptr = ros_message->speed_low;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: force_up
  {
    size_t size = 12;
    auto array_ptr = ros_message->force_up;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: force_low
  {
    size_t size = 12;
    auto array_ptr = ros_message->force_low;
    cdr.deserializeArray(array_ptr, size);
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rm_ros_interfaces
size_t get_serialized_size_rm_ros_interfaces__msg__Rmplusbase(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Rmplusbase__ros_msg_type * ros_message = static_cast<const _Rmplusbase__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name manu
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->manu.size + 1);
  // field.name type
  {
    size_t item_size = sizeof(ros_message->type);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name hv
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->hv.size + 1);
  // field.name sv
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->sv.size + 1);
  // field.name bv
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->bv.size + 1);
  // field.name id
  {
    size_t item_size = sizeof(ros_message->id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name dof
  {
    size_t item_size = sizeof(ros_message->dof);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name check
  {
    size_t item_size = sizeof(ros_message->check);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name bee
  {
    size_t item_size = sizeof(ros_message->bee);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name force
  {
    size_t item_size = sizeof(ros_message->force);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name touch
  {
    size_t item_size = sizeof(ros_message->touch);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name touch_num
  {
    size_t item_size = sizeof(ros_message->touch_num);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name touch_sw
  {
    size_t item_size = sizeof(ros_message->touch_sw);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name hand
  {
    size_t item_size = sizeof(ros_message->hand);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name pos_up
  {
    size_t array_size = 12;
    auto array_ptr = ros_message->pos_up;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name pos_low
  {
    size_t array_size = 12;
    auto array_ptr = ros_message->pos_low;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name angle_up
  {
    size_t array_size = 12;
    auto array_ptr = ros_message->angle_up;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name angle_low
  {
    size_t array_size = 12;
    auto array_ptr = ros_message->angle_low;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name speed_up
  {
    size_t array_size = 12;
    auto array_ptr = ros_message->speed_up;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name speed_low
  {
    size_t array_size = 12;
    auto array_ptr = ros_message->speed_low;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name force_up
  {
    size_t array_size = 12;
    auto array_ptr = ros_message->force_up;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name force_low
  {
    size_t array_size = 12;
    auto array_ptr = ros_message->force_low;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _Rmplusbase__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_rm_ros_interfaces__msg__Rmplusbase(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rm_ros_interfaces
size_t max_serialized_size_rm_ros_interfaces__msg__Rmplusbase(
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

  // member: manu
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
  // member: type
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: hv
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
  // member: sv
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
  // member: bv
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
  // member: id
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: dof
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: check
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: bee
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: force
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: touch
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: touch_num
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: touch_sw
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: hand
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: pos_up
  {
    size_t array_size = 12;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: pos_low
  {
    size_t array_size = 12;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: angle_up
  {
    size_t array_size = 12;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: angle_low
  {
    size_t array_size = 12;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: speed_up
  {
    size_t array_size = 12;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: speed_low
  {
    size_t array_size = 12;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: force_up
  {
    size_t array_size = 12;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: force_low
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
    using DataType = rm_ros_interfaces__msg__Rmplusbase;
    is_plain =
      (
      offsetof(DataType, force_low) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _Rmplusbase__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_rm_ros_interfaces__msg__Rmplusbase(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_Rmplusbase = {
  "rm_ros_interfaces::msg",
  "Rmplusbase",
  _Rmplusbase__cdr_serialize,
  _Rmplusbase__cdr_deserialize,
  _Rmplusbase__get_serialized_size,
  _Rmplusbase__max_serialized_size
};

static rosidl_message_type_support_t _Rmplusbase__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Rmplusbase,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, rm_ros_interfaces, msg, Rmplusbase)() {
  return &_Rmplusbase__type_support;
}

#if defined(__cplusplus)
}
#endif
