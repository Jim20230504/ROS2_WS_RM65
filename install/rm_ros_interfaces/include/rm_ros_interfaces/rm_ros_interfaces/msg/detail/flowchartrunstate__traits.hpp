// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rm_ros_interfaces:msg/Flowchartrunstate.idl
// generated code does not contain a copyright notice

#ifndef RM_ROS_INTERFACES__MSG__DETAIL__FLOWCHARTRUNSTATE__TRAITS_HPP_
#define RM_ROS_INTERFACES__MSG__DETAIL__FLOWCHARTRUNSTATE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "rm_ros_interfaces/msg/detail/flowchartrunstate__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace rm_ros_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const Flowchartrunstate & msg,
  std::ostream & out)
{
  out << "{";
  // member: run_state
  {
    out << "run_state: ";
    rosidl_generator_traits::value_to_yaml(msg.run_state, out);
    out << ", ";
  }

  // member: id
  {
    out << "id: ";
    rosidl_generator_traits::value_to_yaml(msg.id, out);
    out << ", ";
  }

  // member: name
  {
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
    out << ", ";
  }

  // member: plan_speed
  {
    out << "plan_speed: ";
    rosidl_generator_traits::value_to_yaml(msg.plan_speed, out);
    out << ", ";
  }

  // member: step_mode
  {
    out << "step_mode: ";
    rosidl_generator_traits::value_to_yaml(msg.step_mode, out);
    out << ", ";
  }

  // member: modal_id
  {
    out << "modal_id: ";
    rosidl_generator_traits::value_to_yaml(msg.modal_id, out);
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
  const Flowchartrunstate & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: run_state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "run_state: ";
    rosidl_generator_traits::value_to_yaml(msg.run_state, out);
    out << "\n";
  }

  // member: id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "id: ";
    rosidl_generator_traits::value_to_yaml(msg.id, out);
    out << "\n";
  }

  // member: name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
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

  // member: step_mode
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "step_mode: ";
    rosidl_generator_traits::value_to_yaml(msg.step_mode, out);
    out << "\n";
  }

  // member: modal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "modal_id: ";
    rosidl_generator_traits::value_to_yaml(msg.modal_id, out);
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

inline std::string to_yaml(const Flowchartrunstate & msg, bool use_flow_style = false)
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
  const rm_ros_interfaces::msg::Flowchartrunstate & msg,
  std::ostream & out, size_t indentation = 0)
{
  rm_ros_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use rm_ros_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const rm_ros_interfaces::msg::Flowchartrunstate & msg)
{
  return rm_ros_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<rm_ros_interfaces::msg::Flowchartrunstate>()
{
  return "rm_ros_interfaces::msg::Flowchartrunstate";
}

template<>
inline const char * name<rm_ros_interfaces::msg::Flowchartrunstate>()
{
  return "rm_ros_interfaces/msg/Flowchartrunstate";
}

template<>
struct has_fixed_size<rm_ros_interfaces::msg::Flowchartrunstate>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<rm_ros_interfaces::msg::Flowchartrunstate>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<rm_ros_interfaces::msg::Flowchartrunstate>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // RM_ROS_INTERFACES__MSG__DETAIL__FLOWCHARTRUNSTATE__TRAITS_HPP_
