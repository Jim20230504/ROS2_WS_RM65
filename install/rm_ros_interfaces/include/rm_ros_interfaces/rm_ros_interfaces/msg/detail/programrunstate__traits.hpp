// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rm_ros_interfaces:msg/Programrunstate.idl
// generated code does not contain a copyright notice

#ifndef RM_ROS_INTERFACES__MSG__DETAIL__PROGRAMRUNSTATE__TRAITS_HPP_
#define RM_ROS_INTERFACES__MSG__DETAIL__PROGRAMRUNSTATE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "rm_ros_interfaces/msg/detail/programrunstate__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace rm_ros_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const Programrunstate & msg,
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

  // member: edit_id
  {
    out << "edit_id: ";
    rosidl_generator_traits::value_to_yaml(msg.edit_id, out);
    out << ", ";
  }

  // member: plan_num
  {
    out << "plan_num: ";
    rosidl_generator_traits::value_to_yaml(msg.plan_num, out);
    out << ", ";
  }

  // member: total_loop
  {
    out << "total_loop: ";
    rosidl_generator_traits::value_to_yaml(msg.total_loop, out);
    out << ", ";
  }

  // member: step_mode
  {
    out << "step_mode: ";
    rosidl_generator_traits::value_to_yaml(msg.step_mode, out);
    out << ", ";
  }

  // member: plan_speed
  {
    out << "plan_speed: ";
    rosidl_generator_traits::value_to_yaml(msg.plan_speed, out);
    out << ", ";
  }

  // member: loop_num
  {
    if (msg.loop_num.size() == 0) {
      out << "loop_num: []";
    } else {
      out << "loop_num: [";
      size_t pending_items = msg.loop_num.size();
      for (auto item : msg.loop_num) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: loop_cont
  {
    if (msg.loop_cont.size() == 0) {
      out << "loop_cont: []";
    } else {
      out << "loop_cont: [";
      size_t pending_items = msg.loop_cont.size();
      for (auto item : msg.loop_cont) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
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
  const Programrunstate & msg,
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

  // member: edit_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "edit_id: ";
    rosidl_generator_traits::value_to_yaml(msg.edit_id, out);
    out << "\n";
  }

  // member: plan_num
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "plan_num: ";
    rosidl_generator_traits::value_to_yaml(msg.plan_num, out);
    out << "\n";
  }

  // member: total_loop
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "total_loop: ";
    rosidl_generator_traits::value_to_yaml(msg.total_loop, out);
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

  // member: plan_speed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "plan_speed: ";
    rosidl_generator_traits::value_to_yaml(msg.plan_speed, out);
    out << "\n";
  }

  // member: loop_num
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.loop_num.size() == 0) {
      out << "loop_num: []\n";
    } else {
      out << "loop_num:\n";
      for (auto item : msg.loop_num) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: loop_cont
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.loop_cont.size() == 0) {
      out << "loop_cont: []\n";
    } else {
      out << "loop_cont:\n";
      for (auto item : msg.loop_cont) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
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

inline std::string to_yaml(const Programrunstate & msg, bool use_flow_style = false)
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
  const rm_ros_interfaces::msg::Programrunstate & msg,
  std::ostream & out, size_t indentation = 0)
{
  rm_ros_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use rm_ros_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const rm_ros_interfaces::msg::Programrunstate & msg)
{
  return rm_ros_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<rm_ros_interfaces::msg::Programrunstate>()
{
  return "rm_ros_interfaces::msg::Programrunstate";
}

template<>
inline const char * name<rm_ros_interfaces::msg::Programrunstate>()
{
  return "rm_ros_interfaces/msg/Programrunstate";
}

template<>
struct has_fixed_size<rm_ros_interfaces::msg::Programrunstate>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<rm_ros_interfaces::msg::Programrunstate>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<rm_ros_interfaces::msg::Programrunstate>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // RM_ROS_INTERFACES__MSG__DETAIL__PROGRAMRUNSTATE__TRAITS_HPP_
