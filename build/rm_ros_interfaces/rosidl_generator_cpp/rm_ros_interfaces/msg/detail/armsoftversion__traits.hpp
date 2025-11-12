// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rm_ros_interfaces:msg/Armsoftversion.idl
// generated code does not contain a copyright notice

#ifndef RM_ROS_INTERFACES__MSG__DETAIL__ARMSOFTVERSION__TRAITS_HPP_
#define RM_ROS_INTERFACES__MSG__DETAIL__ARMSOFTVERSION__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "rm_ros_interfaces/msg/detail/armsoftversion__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'ctrl_info'
// Member 'plan_info'
// Member 'com_info'
// Member 'program_info'
#include "rm_ros_interfaces/msg/detail/softwarebuildinfo__traits.hpp"

namespace rm_ros_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const Armsoftversion & msg,
  std::ostream & out)
{
  out << "{";
  // member: product_version
  {
    out << "product_version: ";
    rosidl_generator_traits::value_to_yaml(msg.product_version, out);
    out << ", ";
  }

  // member: controller_version
  {
    out << "controller_version: ";
    rosidl_generator_traits::value_to_yaml(msg.controller_version, out);
    out << ", ";
  }

  // member: algorithm_info
  {
    out << "algorithm_info: ";
    rosidl_generator_traits::value_to_yaml(msg.algorithm_info, out);
    out << ", ";
  }

  // member: ctrl_info
  {
    out << "ctrl_info: ";
    to_flow_style_yaml(msg.ctrl_info, out);
    out << ", ";
  }

  // member: dynamic_info
  {
    out << "dynamic_info: ";
    rosidl_generator_traits::value_to_yaml(msg.dynamic_info, out);
    out << ", ";
  }

  // member: plan_info
  {
    out << "plan_info: ";
    to_flow_style_yaml(msg.plan_info, out);
    out << ", ";
  }

  // member: com_info
  {
    out << "com_info: ";
    to_flow_style_yaml(msg.com_info, out);
    out << ", ";
  }

  // member: program_info
  {
    out << "program_info: ";
    to_flow_style_yaml(msg.program_info, out);
    out << ", ";
  }

  // member: state
  {
    out << "state: ";
    rosidl_generator_traits::value_to_yaml(msg.state, out);
    out << ", ";
  }

  // member: planversion
  {
    out << "planversion: ";
    rosidl_generator_traits::value_to_yaml(msg.planversion, out);
    out << ", ";
  }

  // member: ctrlversion
  {
    out << "ctrlversion: ";
    rosidl_generator_traits::value_to_yaml(msg.ctrlversion, out);
    out << ", ";
  }

  // member: kernal1
  {
    out << "kernal1: ";
    rosidl_generator_traits::value_to_yaml(msg.kernal1, out);
    out << ", ";
  }

  // member: kernal2
  {
    out << "kernal2: ";
    rosidl_generator_traits::value_to_yaml(msg.kernal2, out);
    out << ", ";
  }

  // member: productversion
  {
    out << "productversion: ";
    rosidl_generator_traits::value_to_yaml(msg.productversion, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Armsoftversion & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: product_version
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "product_version: ";
    rosidl_generator_traits::value_to_yaml(msg.product_version, out);
    out << "\n";
  }

  // member: controller_version
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "controller_version: ";
    rosidl_generator_traits::value_to_yaml(msg.controller_version, out);
    out << "\n";
  }

  // member: algorithm_info
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "algorithm_info: ";
    rosidl_generator_traits::value_to_yaml(msg.algorithm_info, out);
    out << "\n";
  }

  // member: ctrl_info
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ctrl_info:\n";
    to_block_style_yaml(msg.ctrl_info, out, indentation + 2);
  }

  // member: dynamic_info
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "dynamic_info: ";
    rosidl_generator_traits::value_to_yaml(msg.dynamic_info, out);
    out << "\n";
  }

  // member: plan_info
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "plan_info:\n";
    to_block_style_yaml(msg.plan_info, out, indentation + 2);
  }

  // member: com_info
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "com_info:\n";
    to_block_style_yaml(msg.com_info, out, indentation + 2);
  }

  // member: program_info
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "program_info:\n";
    to_block_style_yaml(msg.program_info, out, indentation + 2);
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

  // member: planversion
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "planversion: ";
    rosidl_generator_traits::value_to_yaml(msg.planversion, out);
    out << "\n";
  }

  // member: ctrlversion
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ctrlversion: ";
    rosidl_generator_traits::value_to_yaml(msg.ctrlversion, out);
    out << "\n";
  }

  // member: kernal1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "kernal1: ";
    rosidl_generator_traits::value_to_yaml(msg.kernal1, out);
    out << "\n";
  }

  // member: kernal2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "kernal2: ";
    rosidl_generator_traits::value_to_yaml(msg.kernal2, out);
    out << "\n";
  }

  // member: productversion
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "productversion: ";
    rosidl_generator_traits::value_to_yaml(msg.productversion, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Armsoftversion & msg, bool use_flow_style = false)
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
  const rm_ros_interfaces::msg::Armsoftversion & msg,
  std::ostream & out, size_t indentation = 0)
{
  rm_ros_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use rm_ros_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const rm_ros_interfaces::msg::Armsoftversion & msg)
{
  return rm_ros_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<rm_ros_interfaces::msg::Armsoftversion>()
{
  return "rm_ros_interfaces::msg::Armsoftversion";
}

template<>
inline const char * name<rm_ros_interfaces::msg::Armsoftversion>()
{
  return "rm_ros_interfaces/msg/Armsoftversion";
}

template<>
struct has_fixed_size<rm_ros_interfaces::msg::Armsoftversion>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<rm_ros_interfaces::msg::Armsoftversion>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<rm_ros_interfaces::msg::Armsoftversion>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // RM_ROS_INTERFACES__MSG__DETAIL__ARMSOFTVERSION__TRAITS_HPP_
