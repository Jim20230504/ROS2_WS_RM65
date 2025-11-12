// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rm_ros_interfaces:msg/Toolsoftwareversionv4.idl
// generated code does not contain a copyright notice

#ifndef RM_ROS_INTERFACES__MSG__DETAIL__TOOLSOFTWAREVERSIONV4__TRAITS_HPP_
#define RM_ROS_INTERFACES__MSG__DETAIL__TOOLSOFTWAREVERSIONV4__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "rm_ros_interfaces/msg/detail/toolsoftwareversionv4__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace rm_ros_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const Toolsoftwareversionv4 & msg,
  std::ostream & out)
{
  out << "{";
  // member: tool_version
  {
    out << "tool_version: ";
    rosidl_generator_traits::value_to_yaml(msg.tool_version, out);
    out << ", ";
  }

  // member: state
  {
    out << "state: ";
    rosidl_generator_traits::value_to_yaml(msg.state, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Toolsoftwareversionv4 & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: tool_version
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "tool_version: ";
    rosidl_generator_traits::value_to_yaml(msg.tool_version, out);
    out << "\n";
  }

  // member: state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "state: ";
    rosidl_generator_traits::value_to_yaml(msg.state, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Toolsoftwareversionv4 & msg, bool use_flow_style = false)
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
  const rm_ros_interfaces::msg::Toolsoftwareversionv4 & msg,
  std::ostream & out, size_t indentation = 0)
{
  rm_ros_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use rm_ros_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const rm_ros_interfaces::msg::Toolsoftwareversionv4 & msg)
{
  return rm_ros_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<rm_ros_interfaces::msg::Toolsoftwareversionv4>()
{
  return "rm_ros_interfaces::msg::Toolsoftwareversionv4";
}

template<>
inline const char * name<rm_ros_interfaces::msg::Toolsoftwareversionv4>()
{
  return "rm_ros_interfaces/msg/Toolsoftwareversionv4";
}

template<>
struct has_fixed_size<rm_ros_interfaces::msg::Toolsoftwareversionv4>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<rm_ros_interfaces::msg::Toolsoftwareversionv4>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<rm_ros_interfaces::msg::Toolsoftwareversionv4>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // RM_ROS_INTERFACES__MSG__DETAIL__TOOLSOFTWAREVERSIONV4__TRAITS_HPP_
