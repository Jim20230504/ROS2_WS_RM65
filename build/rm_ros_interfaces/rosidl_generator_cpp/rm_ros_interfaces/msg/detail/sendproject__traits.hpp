// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rm_ros_interfaces:msg/Sendproject.idl
// generated code does not contain a copyright notice

#ifndef RM_ROS_INTERFACES__MSG__DETAIL__SENDPROJECT__TRAITS_HPP_
#define RM_ROS_INTERFACES__MSG__DETAIL__SENDPROJECT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "rm_ros_interfaces/msg/detail/sendproject__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace rm_ros_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const Sendproject & msg,
  std::ostream & out)
{
  out << "{";
  // member: project_path
  {
    out << "project_path: ";
    rosidl_generator_traits::value_to_yaml(msg.project_path, out);
    out << ", ";
  }

  // member: project_path_len
  {
    out << "project_path_len: ";
    rosidl_generator_traits::value_to_yaml(msg.project_path_len, out);
    out << ", ";
  }

  // member: plan_speed
  {
    out << "plan_speed: ";
    rosidl_generator_traits::value_to_yaml(msg.plan_speed, out);
    out << ", ";
  }

  // member: only_save
  {
    out << "only_save: ";
    rosidl_generator_traits::value_to_yaml(msg.only_save, out);
    out << ", ";
  }

  // member: save_id
  {
    out << "save_id: ";
    rosidl_generator_traits::value_to_yaml(msg.save_id, out);
    out << ", ";
  }

  // member: step_flag
  {
    out << "step_flag: ";
    rosidl_generator_traits::value_to_yaml(msg.step_flag, out);
    out << ", ";
  }

  // member: auto_start
  {
    out << "auto_start: ";
    rosidl_generator_traits::value_to_yaml(msg.auto_start, out);
    out << ", ";
  }

  // member: project_type
  {
    out << "project_type: ";
    rosidl_generator_traits::value_to_yaml(msg.project_type, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Sendproject & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: project_path
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "project_path: ";
    rosidl_generator_traits::value_to_yaml(msg.project_path, out);
    out << "\n";
  }

  // member: project_path_len
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "project_path_len: ";
    rosidl_generator_traits::value_to_yaml(msg.project_path_len, out);
    out << "\n";
  }

  // member: plan_speed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "plan_speed: ";
    rosidl_generator_traits::value_to_yaml(msg.plan_speed, out);
    out << "\n";
  }

  // member: only_save
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "only_save: ";
    rosidl_generator_traits::value_to_yaml(msg.only_save, out);
    out << "\n";
  }

  // member: save_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "save_id: ";
    rosidl_generator_traits::value_to_yaml(msg.save_id, out);
    out << "\n";
  }

  // member: step_flag
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "step_flag: ";
    rosidl_generator_traits::value_to_yaml(msg.step_flag, out);
    out << "\n";
  }

  // member: auto_start
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "auto_start: ";
    rosidl_generator_traits::value_to_yaml(msg.auto_start, out);
    out << "\n";
  }

  // member: project_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "project_type: ";
    rosidl_generator_traits::value_to_yaml(msg.project_type, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Sendproject & msg, bool use_flow_style = false)
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
  const rm_ros_interfaces::msg::Sendproject & msg,
  std::ostream & out, size_t indentation = 0)
{
  rm_ros_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use rm_ros_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const rm_ros_interfaces::msg::Sendproject & msg)
{
  return rm_ros_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<rm_ros_interfaces::msg::Sendproject>()
{
  return "rm_ros_interfaces::msg::Sendproject";
}

template<>
inline const char * name<rm_ros_interfaces::msg::Sendproject>()
{
  return "rm_ros_interfaces/msg/Sendproject";
}

template<>
struct has_fixed_size<rm_ros_interfaces::msg::Sendproject>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<rm_ros_interfaces::msg::Sendproject>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<rm_ros_interfaces::msg::Sendproject>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // RM_ROS_INTERFACES__MSG__DETAIL__SENDPROJECT__TRAITS_HPP_
