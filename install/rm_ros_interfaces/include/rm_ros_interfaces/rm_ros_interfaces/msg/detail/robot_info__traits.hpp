// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rm_ros_interfaces:msg/RobotInfo.idl
// generated code does not contain a copyright notice

#ifndef RM_ROS_INTERFACES__MSG__DETAIL__ROBOT_INFO__TRAITS_HPP_
#define RM_ROS_INTERFACES__MSG__DETAIL__ROBOT_INFO__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "rm_ros_interfaces/msg/detail/robot_info__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace rm_ros_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const RobotInfo & msg,
  std::ostream & out)
{
  out << "{";
  // member: arm_dof
  {
    out << "arm_dof: ";
    rosidl_generator_traits::value_to_yaml(msg.arm_dof, out);
    out << ", ";
  }

  // member: arm_model
  {
    out << "arm_model: ";
    rosidl_generator_traits::value_to_yaml(msg.arm_model, out);
    out << ", ";
  }

  // member: force_type
  {
    out << "force_type: ";
    rosidl_generator_traits::value_to_yaml(msg.force_type, out);
    out << ", ";
  }

  // member: robot_controller_version
  {
    out << "robot_controller_version: ";
    rosidl_generator_traits::value_to_yaml(msg.robot_controller_version, out);
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
  const RobotInfo & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: arm_dof
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "arm_dof: ";
    rosidl_generator_traits::value_to_yaml(msg.arm_dof, out);
    out << "\n";
  }

  // member: arm_model
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "arm_model: ";
    rosidl_generator_traits::value_to_yaml(msg.arm_model, out);
    out << "\n";
  }

  // member: force_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "force_type: ";
    rosidl_generator_traits::value_to_yaml(msg.force_type, out);
    out << "\n";
  }

  // member: robot_controller_version
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "robot_controller_version: ";
    rosidl_generator_traits::value_to_yaml(msg.robot_controller_version, out);
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

inline std::string to_yaml(const RobotInfo & msg, bool use_flow_style = false)
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
  const rm_ros_interfaces::msg::RobotInfo & msg,
  std::ostream & out, size_t indentation = 0)
{
  rm_ros_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use rm_ros_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const rm_ros_interfaces::msg::RobotInfo & msg)
{
  return rm_ros_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<rm_ros_interfaces::msg::RobotInfo>()
{
  return "rm_ros_interfaces::msg::RobotInfo";
}

template<>
inline const char * name<rm_ros_interfaces::msg::RobotInfo>()
{
  return "rm_ros_interfaces/msg/RobotInfo";
}

template<>
struct has_fixed_size<rm_ros_interfaces::msg::RobotInfo>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<rm_ros_interfaces::msg::RobotInfo>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<rm_ros_interfaces::msg::RobotInfo>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // RM_ROS_INTERFACES__MSG__DETAIL__ROBOT_INFO__TRAITS_HPP_
