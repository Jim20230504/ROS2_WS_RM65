// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rm_ros_interfaces:msg/Rmplusstate.idl
// generated code does not contain a copyright notice

#ifndef RM_ROS_INTERFACES__MSG__DETAIL__RMPLUSSTATE__TRAITS_HPP_
#define RM_ROS_INTERFACES__MSG__DETAIL__RMPLUSSTATE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "rm_ros_interfaces/msg/detail/rmplusstate__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace rm_ros_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const Rmplusstate & msg,
  std::ostream & out)
{
  out << "{";
  // member: sys_state
  {
    out << "sys_state: ";
    rosidl_generator_traits::value_to_yaml(msg.sys_state, out);
    out << ", ";
  }

  // member: dof_state
  {
    if (msg.dof_state.size() == 0) {
      out << "dof_state: []";
    } else {
      out << "dof_state: [";
      size_t pending_items = msg.dof_state.size();
      for (auto item : msg.dof_state) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: dof_err
  {
    if (msg.dof_err.size() == 0) {
      out << "dof_err: []";
    } else {
      out << "dof_err: [";
      size_t pending_items = msg.dof_err.size();
      for (auto item : msg.dof_err) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: pos
  {
    if (msg.pos.size() == 0) {
      out << "pos: []";
    } else {
      out << "pos: [";
      size_t pending_items = msg.pos.size();
      for (auto item : msg.pos) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: speed
  {
    if (msg.speed.size() == 0) {
      out << "speed: []";
    } else {
      out << "speed: [";
      size_t pending_items = msg.speed.size();
      for (auto item : msg.speed) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: angle
  {
    if (msg.angle.size() == 0) {
      out << "angle: []";
    } else {
      out << "angle: [";
      size_t pending_items = msg.angle.size();
      for (auto item : msg.angle) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: current
  {
    if (msg.current.size() == 0) {
      out << "current: []";
    } else {
      out << "current: [";
      size_t pending_items = msg.current.size();
      for (auto item : msg.current) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: normal_force
  {
    if (msg.normal_force.size() == 0) {
      out << "normal_force: []";
    } else {
      out << "normal_force: [";
      size_t pending_items = msg.normal_force.size();
      for (auto item : msg.normal_force) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: tangential_force
  {
    if (msg.tangential_force.size() == 0) {
      out << "tangential_force: []";
    } else {
      out << "tangential_force: [";
      size_t pending_items = msg.tangential_force.size();
      for (auto item : msg.tangential_force) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: tangential_force_dir
  {
    if (msg.tangential_force_dir.size() == 0) {
      out << "tangential_force_dir: []";
    } else {
      out << "tangential_force_dir: [";
      size_t pending_items = msg.tangential_force_dir.size();
      for (auto item : msg.tangential_force_dir) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: tsa
  {
    if (msg.tsa.size() == 0) {
      out << "tsa: []";
    } else {
      out << "tsa: [";
      size_t pending_items = msg.tsa.size();
      for (auto item : msg.tsa) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: tma
  {
    if (msg.tma.size() == 0) {
      out << "tma: []";
    } else {
      out << "tma: [";
      size_t pending_items = msg.tma.size();
      for (auto item : msg.tma) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: touch_data
  {
    if (msg.touch_data.size() == 0) {
      out << "touch_data: []";
    } else {
      out << "touch_data: [";
      size_t pending_items = msg.touch_data.size();
      for (auto item : msg.touch_data) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: force
  {
    if (msg.force.size() == 0) {
      out << "force: []";
    } else {
      out << "force: [";
      size_t pending_items = msg.force.size();
      for (auto item : msg.force) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Rmplusstate & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: sys_state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sys_state: ";
    rosidl_generator_traits::value_to_yaml(msg.sys_state, out);
    out << "\n";
  }

  // member: dof_state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.dof_state.size() == 0) {
      out << "dof_state: []\n";
    } else {
      out << "dof_state:\n";
      for (auto item : msg.dof_state) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: dof_err
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.dof_err.size() == 0) {
      out << "dof_err: []\n";
    } else {
      out << "dof_err:\n";
      for (auto item : msg.dof_err) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: pos
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.pos.size() == 0) {
      out << "pos: []\n";
    } else {
      out << "pos:\n";
      for (auto item : msg.pos) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: speed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.speed.size() == 0) {
      out << "speed: []\n";
    } else {
      out << "speed:\n";
      for (auto item : msg.speed) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: angle
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.angle.size() == 0) {
      out << "angle: []\n";
    } else {
      out << "angle:\n";
      for (auto item : msg.angle) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: current
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.current.size() == 0) {
      out << "current: []\n";
    } else {
      out << "current:\n";
      for (auto item : msg.current) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: normal_force
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.normal_force.size() == 0) {
      out << "normal_force: []\n";
    } else {
      out << "normal_force:\n";
      for (auto item : msg.normal_force) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: tangential_force
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.tangential_force.size() == 0) {
      out << "tangential_force: []\n";
    } else {
      out << "tangential_force:\n";
      for (auto item : msg.tangential_force) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: tangential_force_dir
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.tangential_force_dir.size() == 0) {
      out << "tangential_force_dir: []\n";
    } else {
      out << "tangential_force_dir:\n";
      for (auto item : msg.tangential_force_dir) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: tsa
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.tsa.size() == 0) {
      out << "tsa: []\n";
    } else {
      out << "tsa:\n";
      for (auto item : msg.tsa) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: tma
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.tma.size() == 0) {
      out << "tma: []\n";
    } else {
      out << "tma:\n";
      for (auto item : msg.tma) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: touch_data
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.touch_data.size() == 0) {
      out << "touch_data: []\n";
    } else {
      out << "touch_data:\n";
      for (auto item : msg.touch_data) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: force
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.force.size() == 0) {
      out << "force: []\n";
    } else {
      out << "force:\n";
      for (auto item : msg.force) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Rmplusstate & msg, bool use_flow_style = false)
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
  const rm_ros_interfaces::msg::Rmplusstate & msg,
  std::ostream & out, size_t indentation = 0)
{
  rm_ros_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use rm_ros_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const rm_ros_interfaces::msg::Rmplusstate & msg)
{
  return rm_ros_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<rm_ros_interfaces::msg::Rmplusstate>()
{
  return "rm_ros_interfaces::msg::Rmplusstate";
}

template<>
inline const char * name<rm_ros_interfaces::msg::Rmplusstate>()
{
  return "rm_ros_interfaces/msg/Rmplusstate";
}

template<>
struct has_fixed_size<rm_ros_interfaces::msg::Rmplusstate>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<rm_ros_interfaces::msg::Rmplusstate>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<rm_ros_interfaces::msg::Rmplusstate>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // RM_ROS_INTERFACES__MSG__DETAIL__RMPLUSSTATE__TRAITS_HPP_
