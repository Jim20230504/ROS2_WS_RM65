// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from rm_ros_interfaces:msg/Armsoftversion.idl
// generated code does not contain a copyright notice
#include "rm_ros_interfaces/msg/detail/armsoftversion__rosidl_typesupport_fastrtps_cpp.hpp"
#include "rm_ros_interfaces/msg/detail/armsoftversion__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions
namespace rm_ros_interfaces
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const rm_ros_interfaces::msg::Softwarebuildinfo &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  rm_ros_interfaces::msg::Softwarebuildinfo &);
size_t get_serialized_size(
  const rm_ros_interfaces::msg::Softwarebuildinfo &,
  size_t current_alignment);
size_t
max_serialized_size_Softwarebuildinfo(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace rm_ros_interfaces

// functions for rm_ros_interfaces::msg::Softwarebuildinfo already declared above

// functions for rm_ros_interfaces::msg::Softwarebuildinfo already declared above

// functions for rm_ros_interfaces::msg::Softwarebuildinfo already declared above


namespace rm_ros_interfaces
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_rm_ros_interfaces
cdr_serialize(
  const rm_ros_interfaces::msg::Armsoftversion & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: product_version
  cdr << ros_message.product_version;
  // Member: controller_version
  cdr << ros_message.controller_version;
  // Member: algorithm_info
  cdr << ros_message.algorithm_info;
  // Member: ctrl_info
  rm_ros_interfaces::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.ctrl_info,
    cdr);
  // Member: dynamic_info
  cdr << ros_message.dynamic_info;
  // Member: plan_info
  rm_ros_interfaces::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.plan_info,
    cdr);
  // Member: com_info
  rm_ros_interfaces::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.com_info,
    cdr);
  // Member: program_info
  rm_ros_interfaces::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.program_info,
    cdr);
  // Member: state
  cdr << (ros_message.state ? true : false);
  // Member: planversion
  cdr << ros_message.planversion;
  // Member: ctrlversion
  cdr << ros_message.ctrlversion;
  // Member: kernal1
  cdr << ros_message.kernal1;
  // Member: kernal2
  cdr << ros_message.kernal2;
  // Member: productversion
  cdr << ros_message.productversion;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_rm_ros_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  rm_ros_interfaces::msg::Armsoftversion & ros_message)
{
  // Member: product_version
  cdr >> ros_message.product_version;

  // Member: controller_version
  cdr >> ros_message.controller_version;

  // Member: algorithm_info
  cdr >> ros_message.algorithm_info;

  // Member: ctrl_info
  rm_ros_interfaces::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.ctrl_info);

  // Member: dynamic_info
  cdr >> ros_message.dynamic_info;

  // Member: plan_info
  rm_ros_interfaces::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.plan_info);

  // Member: com_info
  rm_ros_interfaces::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.com_info);

  // Member: program_info
  rm_ros_interfaces::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.program_info);

  // Member: state
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.state = tmp ? true : false;
  }

  // Member: planversion
  cdr >> ros_message.planversion;

  // Member: ctrlversion
  cdr >> ros_message.ctrlversion;

  // Member: kernal1
  cdr >> ros_message.kernal1;

  // Member: kernal2
  cdr >> ros_message.kernal2;

  // Member: productversion
  cdr >> ros_message.productversion;

  return true;
}  // NOLINT(readability/fn_size)

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_rm_ros_interfaces
get_serialized_size(
  const rm_ros_interfaces::msg::Armsoftversion & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: product_version
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.product_version.size() + 1);
  // Member: controller_version
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.controller_version.size() + 1);
  // Member: algorithm_info
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.algorithm_info.size() + 1);
  // Member: ctrl_info

  current_alignment +=
    rm_ros_interfaces::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.ctrl_info, current_alignment);
  // Member: dynamic_info
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.dynamic_info.size() + 1);
  // Member: plan_info

  current_alignment +=
    rm_ros_interfaces::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.plan_info, current_alignment);
  // Member: com_info

  current_alignment +=
    rm_ros_interfaces::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.com_info, current_alignment);
  // Member: program_info

  current_alignment +=
    rm_ros_interfaces::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.program_info, current_alignment);
  // Member: state
  {
    size_t item_size = sizeof(ros_message.state);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: planversion
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.planversion.size() + 1);
  // Member: ctrlversion
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.ctrlversion.size() + 1);
  // Member: kernal1
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.kernal1.size() + 1);
  // Member: kernal2
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.kernal2.size() + 1);
  // Member: productversion
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.productversion.size() + 1);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_rm_ros_interfaces
max_serialized_size_Armsoftversion(
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


  // Member: product_version
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

  // Member: controller_version
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

  // Member: algorithm_info
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

  // Member: ctrl_info
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        rm_ros_interfaces::msg::typesupport_fastrtps_cpp::max_serialized_size_Softwarebuildinfo(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: dynamic_info
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

  // Member: plan_info
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        rm_ros_interfaces::msg::typesupport_fastrtps_cpp::max_serialized_size_Softwarebuildinfo(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: com_info
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        rm_ros_interfaces::msg::typesupport_fastrtps_cpp::max_serialized_size_Softwarebuildinfo(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: program_info
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        rm_ros_interfaces::msg::typesupport_fastrtps_cpp::max_serialized_size_Softwarebuildinfo(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: state
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: planversion
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

  // Member: ctrlversion
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

  // Member: kernal1
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

  // Member: kernal2
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

  // Member: productversion
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

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = rm_ros_interfaces::msg::Armsoftversion;
    is_plain =
      (
      offsetof(DataType, productversion) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _Armsoftversion__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const rm_ros_interfaces::msg::Armsoftversion *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _Armsoftversion__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<rm_ros_interfaces::msg::Armsoftversion *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _Armsoftversion__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const rm_ros_interfaces::msg::Armsoftversion *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _Armsoftversion__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_Armsoftversion(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _Armsoftversion__callbacks = {
  "rm_ros_interfaces::msg",
  "Armsoftversion",
  _Armsoftversion__cdr_serialize,
  _Armsoftversion__cdr_deserialize,
  _Armsoftversion__get_serialized_size,
  _Armsoftversion__max_serialized_size
};

static rosidl_message_type_support_t _Armsoftversion__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_Armsoftversion__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace rm_ros_interfaces

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_rm_ros_interfaces
const rosidl_message_type_support_t *
get_message_type_support_handle<rm_ros_interfaces::msg::Armsoftversion>()
{
  return &rm_ros_interfaces::msg::typesupport_fastrtps_cpp::_Armsoftversion__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, rm_ros_interfaces, msg, Armsoftversion)() {
  return &rm_ros_interfaces::msg::typesupport_fastrtps_cpp::_Armsoftversion__handle;
}

#ifdef __cplusplus
}
#endif
