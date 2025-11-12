// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rm_ros_interfaces:msg/Rmplusbase.idl
// generated code does not contain a copyright notice

#ifndef RM_ROS_INTERFACES__MSG__DETAIL__RMPLUSBASE__TRAITS_HPP_
#define RM_ROS_INTERFACES__MSG__DETAIL__RMPLUSBASE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "rm_ros_interfaces/msg/detail/rmplusbase__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace rm_ros_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const Rmplusbase & msg,
  std::ostream & out)
{
  out << "{";
  // member: manu
  {
    out << "manu: ";
    rosidl_generator_traits::value_to_yaml(msg.manu, out);
    out << ", ";
  }

  // member: type
  {
    out << "type: ";
    rosidl_generator_traits::value_to_yaml(msg.type, out);
    out << ", ";
  }

  // member: hv
  {
    out << "hv: ";
    rosidl_generator_traits::value_to_yaml(msg.hv, out);
    out << ", ";
  }

  // member: sv
  {
    out << "sv: ";
    rosidl_generator_traits::value_to_yaml(msg.sv, out);
    out << ", ";
  }

  // member: bv
  {
    out << "bv: ";
    rosidl_generator_traits::value_to_yaml(msg.bv, out);
    out << ", ";
  }

  // member: id
  {
    out << "id: ";
    rosidl_generator_traits::value_to_yaml(msg.id, out);
    out << ", ";
  }

  // member: dof
  {
    out << "dof: ";
    rosidl_generator_traits::value_to_yaml(msg.dof, out);
    out << ", ";
  }

  // member: check
  {
    out << "check: ";
    rosidl_generator_traits::value_to_yaml(msg.check, out);
    out << ", ";
  }

  // member: bee
  {
    out << "bee: ";
    rosidl_generator_traits::value_to_yaml(msg.bee, out);
    out << ", ";
  }

  // member: force
  {
    out << "force: ";
    rosidl_generator_traits::value_to_yaml(msg.force, out);
    out << ", ";
  }

  // member: touch
  {
    out << "touch: ";
    rosidl_generator_traits::value_to_yaml(msg.touch, out);
    out << ", ";
  }

  // member: touch_num
  {
    out << "touch_num: ";
    rosidl_generator_traits::value_to_yaml(msg.touch_num, out);
    out << ", ";
  }

  // member: touch_sw
  {
    out << "touch_sw: ";
    rosidl_generator_traits::value_to_yaml(msg.touch_sw, out);
    out << ", ";
  }

  // member: hand
  {
    out << "hand: ";
    rosidl_generator_traits::value_to_yaml(msg.hand, out);
    out << ", ";
  }

  // member: pos_up
  {
    if (msg.pos_up.size() == 0) {
      out << "pos_up: []";
    } else {
      out << "pos_up: [";
      size_t pending_items = msg.pos_up.size();
      for (auto item : msg.pos_up) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: pos_low
  {
    if (msg.pos_low.size() == 0) {
      out << "pos_low: []";
    } else {
      out << "pos_low: [";
      size_t pending_items = msg.pos_low.size();
      for (auto item : msg.pos_low) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: angle_up
  {
    if (msg.angle_up.size() == 0) {
      out << "angle_up: []";
    } else {
      out << "angle_up: [";
      size_t pending_items = msg.angle_up.size();
      for (auto item : msg.angle_up) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: angle_low
  {
    if (msg.angle_low.size() == 0) {
      out << "angle_low: []";
    } else {
      out << "angle_low: [";
      size_t pending_items = msg.angle_low.size();
      for (auto item : msg.angle_low) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: speed_up
  {
    if (msg.speed_up.size() == 0) {
      out << "speed_up: []";
    } else {
      out << "speed_up: [";
      size_t pending_items = msg.speed_up.size();
      for (auto item : msg.speed_up) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: speed_low
  {
    if (msg.speed_low.size() == 0) {
      out << "speed_low: []";
    } else {
      out << "speed_low: [";
      size_t pending_items = msg.speed_low.size();
      for (auto item : msg.speed_low) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: force_up
  {
    if (msg.force_up.size() == 0) {
      out << "force_up: []";
    } else {
      out << "force_up: [";
      size_t pending_items = msg.force_up.size();
      for (auto item : msg.force_up) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: force_low
  {
    if (msg.force_low.size() == 0) {
      out << "force_low: []";
    } else {
      out << "force_low: [";
      size_t pending_items = msg.force_low.size();
      for (auto item : msg.force_low) {
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
  const Rmplusbase & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: manu
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "manu: ";
    rosidl_generator_traits::value_to_yaml(msg.manu, out);
    out << "\n";
  }

  // member: type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "type: ";
    rosidl_generator_traits::value_to_yaml(msg.type, out);
    out << "\n";
  }

  // member: hv
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hv: ";
    rosidl_generator_traits::value_to_yaml(msg.hv, out);
    out << "\n";
  }

  // member: sv
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sv: ";
    rosidl_generator_traits::value_to_yaml(msg.sv, out);
    out << "\n";
  }

  // member: bv
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "bv: ";
    rosidl_generator_traits::value_to_yaml(msg.bv, out);
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

  // member: dof
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "dof: ";
    rosidl_generator_traits::value_to_yaml(msg.dof, out);
    out << "\n";
  }

  // member: check
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "check: ";
    rosidl_generator_traits::value_to_yaml(msg.check, out);
    out << "\n";
  }

  // member: bee
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "bee: ";
    rosidl_generator_traits::value_to_yaml(msg.bee, out);
    out << "\n";
  }

  // member: force
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "force: ";
    rosidl_generator_traits::value_to_yaml(msg.force, out);
    out << "\n";
  }

  // member: touch
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "touch: ";
    rosidl_generator_traits::value_to_yaml(msg.touch, out);
    out << "\n";
  }

  // member: touch_num
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "touch_num: ";
    rosidl_generator_traits::value_to_yaml(msg.touch_num, out);
    out << "\n";
  }

  // member: touch_sw
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "touch_sw: ";
    rosidl_generator_traits::value_to_yaml(msg.touch_sw, out);
    out << "\n";
  }

  // member: hand
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hand: ";
    rosidl_generator_traits::value_to_yaml(msg.hand, out);
    out << "\n";
  }

  // member: pos_up
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.pos_up.size() == 0) {
      out << "pos_up: []\n";
    } else {
      out << "pos_up:\n";
      for (auto item : msg.pos_up) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: pos_low
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.pos_low.size() == 0) {
      out << "pos_low: []\n";
    } else {
      out << "pos_low:\n";
      for (auto item : msg.pos_low) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: angle_up
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.angle_up.size() == 0) {
      out << "angle_up: []\n";
    } else {
      out << "angle_up:\n";
      for (auto item : msg.angle_up) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: angle_low
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.angle_low.size() == 0) {
      out << "angle_low: []\n";
    } else {
      out << "angle_low:\n";
      for (auto item : msg.angle_low) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: speed_up
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.speed_up.size() == 0) {
      out << "speed_up: []\n";
    } else {
      out << "speed_up:\n";
      for (auto item : msg.speed_up) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: speed_low
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.speed_low.size() == 0) {
      out << "speed_low: []\n";
    } else {
      out << "speed_low:\n";
      for (auto item : msg.speed_low) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: force_up
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.force_up.size() == 0) {
      out << "force_up: []\n";
    } else {
      out << "force_up:\n";
      for (auto item : msg.force_up) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: force_low
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.force_low.size() == 0) {
      out << "force_low: []\n";
    } else {
      out << "force_low:\n";
      for (auto item : msg.force_low) {
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

inline std::string to_yaml(const Rmplusbase & msg, bool use_flow_style = false)
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
  const rm_ros_interfaces::msg::Rmplusbase & msg,
  std::ostream & out, size_t indentation = 0)
{
  rm_ros_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use rm_ros_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const rm_ros_interfaces::msg::Rmplusbase & msg)
{
  return rm_ros_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<rm_ros_interfaces::msg::Rmplusbase>()
{
  return "rm_ros_interfaces::msg::Rmplusbase";
}

template<>
inline const char * name<rm_ros_interfaces::msg::Rmplusbase>()
{
  return "rm_ros_interfaces/msg/Rmplusbase";
}

template<>
struct has_fixed_size<rm_ros_interfaces::msg::Rmplusbase>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<rm_ros_interfaces::msg::Rmplusbase>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<rm_ros_interfaces::msg::Rmplusbase>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // RM_ROS_INTERFACES__MSG__DETAIL__RMPLUSBASE__TRAITS_HPP_
