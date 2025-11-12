// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rm_ros_interfaces:msg/Armcurrentstatus.idl
// generated code does not contain a copyright notice

#ifndef RM_ROS_INTERFACES__MSG__DETAIL__ARMCURRENTSTATUS__TRAITS_HPP_
#define RM_ROS_INTERFACES__MSG__DETAIL__ARMCURRENTSTATUS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "rm_ros_interfaces/msg/detail/armcurrentstatus__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace rm_ros_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const Armcurrentstatus & msg,
  std::ostream & out)
{
  out << "{";
  // member: arm_current_status
  {
    out << "arm_current_status: ";
    rosidl_generator_traits::value_to_yaml(msg.arm_current_status, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Armcurrentstatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: arm_current_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "arm_current_status: ";
    rosidl_generator_traits::value_to_yaml(msg.arm_current_status, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Armcurrentstatus & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace rm_ros_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use rm_ros_interfaces::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const rm_ros_interfaces::msg::Armcurrentstatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  rm_ros_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use rm_ros_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const rm_ros_interfaces::msg::Armcurrentstatus & msg)
{
  return rm_ros_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<rm_ros_interfaces::msg::Armcurrentstatus>()
{
  return "rm_ros_interfaces::msg::Armcurrentstatus";
}

template<>
inline const char * name<rm_ros_interfaces::msg::Armcurrentstatus>()
{
  return "rm_ros_interfaces/msg/Armcurrentstatus";
}

template<>
struct has_fixed_size<rm_ros_interfaces::msg::Armcurrentstatus>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<rm_ros_interfaces::msg::Armcurrentstatus>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<rm_ros_interfaces::msg::Armcurrentstatus>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // RM_ROS_INTERFACES__MSG__DETAIL__ARMCURRENTSTATUS__TRAITS_HPP_
