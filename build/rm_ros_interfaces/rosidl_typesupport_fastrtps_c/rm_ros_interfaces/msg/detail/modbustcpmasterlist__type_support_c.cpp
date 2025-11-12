// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from rm_ros_interfaces:msg/Modbustcpmasterlist.idl
// generated code does not contain a copyright notice
#include "rm_ros_interfaces/msg/detail/modbustcpmasterlist__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rm_ros_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "rm_ros_interfaces/msg/detail/modbustcpmasterlist__struct.h"
#include "rm_ros_interfaces/msg/detail/modbustcpmasterlist__functions.h"
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

#include "rm_ros_interfaces/msg/detail/modbustcpmasterinfo__functions.h"  // master_list
#include "rosidl_runtime_c/string.h"  // vague_search
#include "rosidl_runtime_c/string_functions.h"  // vague_search

// forward declare type support functions
size_t get_serialized_size_rm_ros_interfaces__msg__Modbustcpmasterinfo(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_rm_ros_interfaces__msg__Modbustcpmasterinfo(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, rm_ros_interfaces, msg, Modbustcpmasterinfo)();


using _Modbustcpmasterlist__ros_msg_type = rm_ros_interfaces__msg__Modbustcpmasterlist;

static bool _Modbustcpmasterlist__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _Modbustcpmasterlist__ros_msg_type * ros_message = static_cast<const _Modbustcpmasterlist__ros_msg_type *>(untyped_ros_message);
  // Field name: page_num
  {
    cdr << ros_message->page_num;
  }

  // Field name: page_size
  {
    cdr << ros_message->page_size;
  }

  // Field name: total_size
  {
    cdr << ros_message->total_size;
  }

  // Field name: vague_search
  {
    const rosidl_runtime_c__String * str = &ros_message->vague_search;
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

  // Field name: master_list
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, rm_ros_interfaces, msg, Modbustcpmasterinfo
      )()->data);
    size_t size = ros_message->master_list.size;
    auto array_ptr = ros_message->master_list.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  // Field name: state
  {
    cdr << (ros_message->state ? true : false);
  }

  return true;
}

static bool _Modbustcpmasterlist__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _Modbustcpmasterlist__ros_msg_type * ros_message = static_cast<_Modbustcpmasterlist__ros_msg_type *>(untyped_ros_message);
  // Field name: page_num
  {
    cdr >> ros_message->page_num;
  }

  // Field name: page_size
  {
    cdr >> ros_message->page_size;
  }

  // Field name: total_size
  {
    cdr >> ros_message->total_size;
  }

  // Field name: vague_search
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->vague_search.data) {
      rosidl_runtime_c__String__init(&ros_message->vague_search);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->vague_search,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'vague_search'\n");
      return false;
    }
  }

  // Field name: master_list
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, rm_ros_interfaces, msg, Modbustcpmasterinfo
      )()->data);
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

    if (ros_message->master_list.data) {
      rm_ros_interfaces__msg__Modbustcpmasterinfo__Sequence__fini(&ros_message->master_list);
    }
    if (!rm_ros_interfaces__msg__Modbustcpmasterinfo__Sequence__init(&ros_message->master_list, size)) {
      fprintf(stderr, "failed to create array for field 'master_list'");
      return false;
    }
    auto array_ptr = ros_message->master_list.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  // Field name: state
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->state = tmp ? true : false;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rm_ros_interfaces
size_t get_serialized_size_rm_ros_interfaces__msg__Modbustcpmasterlist(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Modbustcpmasterlist__ros_msg_type * ros_message = static_cast<const _Modbustcpmasterlist__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name page_num
  {
    size_t item_size = sizeof(ros_message->page_num);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name page_size
  {
    size_t item_size = sizeof(ros_message->page_size);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name total_size
  {
    size_t item_size = sizeof(ros_message->total_size);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name vague_search
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->vague_search.size + 1);
  // field.name master_list
  {
    size_t array_size = ros_message->master_list.size;
    auto array_ptr = ros_message->master_list.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_rm_ros_interfaces__msg__Modbustcpmasterinfo(
        &array_ptr[index], current_alignment);
    }
  }
  // field.name state
  {
    size_t item_size = sizeof(ros_message->state);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _Modbustcpmasterlist__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_rm_ros_interfaces__msg__Modbustcpmasterlist(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rm_ros_interfaces
size_t max_serialized_size_rm_ros_interfaces__msg__Modbustcpmasterlist(
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

  // member: page_num
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: page_size
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: total_size
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: vague_search
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
  // member: master_list
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_rm_ros_interfaces__msg__Modbustcpmasterinfo(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: state
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
    using DataType = rm_ros_interfaces__msg__Modbustcpmasterlist;
    is_plain =
      (
      offsetof(DataType, state) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _Modbustcpmasterlist__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_rm_ros_interfaces__msg__Modbustcpmasterlist(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_Modbustcpmasterlist = {
  "rm_ros_interfaces::msg",
  "Modbustcpmasterlist",
  _Modbustcpmasterlist__cdr_serialize,
  _Modbustcpmasterlist__cdr_deserialize,
  _Modbustcpmasterlist__get_serialized_size,
  _Modbustcpmasterlist__max_serialized_size
};

static rosidl_message_type_support_t _Modbustcpmasterlist__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Modbustcpmasterlist,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, rm_ros_interfaces, msg, Modbustcpmasterlist)() {
  return &_Modbustcpmasterlist__type_support;
}

#if defined(__cplusplus)
}
#endif
