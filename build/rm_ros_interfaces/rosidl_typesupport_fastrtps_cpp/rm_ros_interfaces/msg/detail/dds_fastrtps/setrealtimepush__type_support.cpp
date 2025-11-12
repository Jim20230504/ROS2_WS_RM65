// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from rm_ros_interfaces:msg/Setrealtimepush.idl
// generated code does not contain a copyright notice
#include "rm_ros_interfaces/msg/detail/setrealtimepush__rosidl_typesupport_fastrtps_cpp.hpp"
#include "rm_ros_interfaces/msg/detail/setrealtimepush__struct.hpp"

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

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_rm_ros_interfaces
cdr_serialize(
  const rm_ros_interfaces::msg::Setrealtimepush & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: cycle
  cdr << ros_message.cycle;
  // Member: port
  cdr << ros_message.port;
  // Member: force_coordinate
  cdr << ros_message.force_coordinate;
  // Member: ip
  cdr << ros_message.ip;
  // Member: aloha_state_enable
  cdr << (ros_message.aloha_state_enable ? true : false);
  // Member: arm_current_status_enable
  cdr << (ros_message.arm_current_status_enable ? true : false);
  // Member: expand_state_enable
  cdr << (ros_message.expand_state_enable ? true : false);
  // Member: hand_enable
  cdr << (ros_message.hand_enable ? true : false);
  // Member: joint_speed_enable
  cdr << (ros_message.joint_speed_enable ? true : false);
  // Member: lift_state_enable
  cdr << (ros_message.lift_state_enable ? true : false);
  // Member: plus_base_enable
  cdr << (ros_message.plus_base_enable ? true : false);
  // Member: plus_state_enable
  cdr << (ros_message.plus_state_enable ? true : false);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_rm_ros_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  rm_ros_interfaces::msg::Setrealtimepush & ros_message)
{
  // Member: cycle
  cdr >> ros_message.cycle;

  // Member: port
  cdr >> ros_message.port;

  // Member: force_coordinate
  cdr >> ros_message.force_coordinate;

  // Member: ip
  cdr >> ros_message.ip;

  // Member: aloha_state_enable
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.aloha_state_enable = tmp ? true : false;
  }

  // Member: arm_current_status_enable
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.arm_current_status_enable = tmp ? true : false;
  }

  // Member: expand_state_enable
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.expand_state_enable = tmp ? true : false;
  }

  // Member: hand_enable
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.hand_enable = tmp ? true : false;
  }

  // Member: joint_speed_enable
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.joint_speed_enable = tmp ? true : false;
  }

  // Member: lift_state_enable
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.lift_state_enable = tmp ? true : false;
  }

  // Member: plus_base_enable
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.plus_base_enable = tmp ? true : false;
  }

  // Member: plus_state_enable
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.plus_state_enable = tmp ? true : false;
  }

  return true;
}  // NOLINT(readability/fn_size)

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_rm_ros_interfaces
get_serialized_size(
  const rm_ros_interfaces::msg::Setrealtimepush & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: cycle
  {
    size_t item_size = sizeof(ros_message.cycle);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: port
  {
    size_t item_size = sizeof(ros_message.port);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: force_coordinate
  {
    size_t item_size = sizeof(ros_message.force_coordinate);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: ip
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.ip.size() + 1);
  // Member: aloha_state_enable
  {
    size_t item_size = sizeof(ros_message.aloha_state_enable);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: arm_current_status_enable
  {
    size_t item_size = sizeof(ros_message.arm_current_status_enable);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: expand_state_enable
  {
    size_t item_size = sizeof(ros_message.expand_state_enable);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: hand_enable
  {
    size_t item_size = sizeof(ros_message.hand_enable);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: joint_speed_enable
  {
    size_t item_size = sizeof(ros_message.joint_speed_enable);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: lift_state_enable
  {
    size_t item_size = sizeof(ros_message.lift_state_enable);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: plus_base_enable
  {
    size_t item_size = sizeof(ros_message.plus_base_enable);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: plus_state_enable
  {
    size_t item_size = sizeof(ros_message.plus_state_enable);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_rm_ros_interfaces
max_serialized_size_Setrealtimepush(
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


  // Member: cycle
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: port
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: force_coordinate
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: ip
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

  // Member: aloha_state_enable
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: arm_current_status_enable
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: expand_state_enable
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: hand_enable
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: joint_speed_enable
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: lift_state_enable
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: plus_base_enable
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: plus_state_enable
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
    using DataType = rm_ros_interfaces::msg::Setrealtimepush;
    is_plain =
      (
      offsetof(DataType, plus_state_enable) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _Setrealtimepush__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const rm_ros_interfaces::msg::Setrealtimepush *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _Setrealtimepush__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<rm_ros_interfaces::msg::Setrealtimepush *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _Setrealtimepush__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const rm_ros_interfaces::msg::Setrealtimepush *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _Setrealtimepush__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_Setrealtimepush(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _Setrealtimepush__callbacks = {
  "rm_ros_interfaces::msg",
  "Setrealtimepush",
  _Setrealtimepush__cdr_serialize,
  _Setrealtimepush__cdr_deserialize,
  _Setrealtimepush__get_serialized_size,
  _Setrealtimepush__max_serialized_size
};

static rosidl_message_type_support_t _Setrealtimepush__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_Setrealtimepush__callbacks,
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
get_message_type_support_handle<rm_ros_interfaces::msg::Setrealtimepush>()
{
  return &rm_ros_interfaces::msg::typesupport_fastrtps_cpp::_Setrealtimepush__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, rm_ros_interfaces, msg, Setrealtimepush)() {
  return &rm_ros_interfaces::msg::typesupport_fastrtps_cpp::_Setrealtimepush__handle;
}

#ifdef __cplusplus
}
#endif
