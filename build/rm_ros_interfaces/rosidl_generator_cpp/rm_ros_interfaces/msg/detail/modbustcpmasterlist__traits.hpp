// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rm_ros_interfaces:msg/Modbustcpmasterlist.idl
// generated code does not contain a copyright notice

#ifndef RM_ROS_INTERFACES__MSG__DETAIL__MODBUSTCPMASTERLIST__TRAITS_HPP_
#define RM_ROS_INTERFACES__MSG__DETAIL__MODBUSTCPMASTERLIST__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "rm_ros_interfaces/msg/detail/modbustcpmasterlist__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'master_list'
#include "rm_ros_interfaces/msg/detail/modbustcpmasterinfo__traits.hpp"

namespace rm_ros_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const Modbustcpmasterlist & msg,
  std::ostream & out)
{
  out << "{";
  // member: page_num
  {
    out << "page_num: ";
    rosidl_generator_traits::value_to_yaml(msg.page_num, out);
    out << ", ";
  }

  // member: page_size
  {
    out << "page_size: ";
    rosidl_generator_traits::value_to_yaml(msg.page_size, out);
    out << ", ";
  }

  // member: total_size
  {
    out << "total_size: ";
    rosidl_generator_traits::value_to_yaml(msg.total_size, out);
    out << ", ";
  }

  // member: vague_search
  {
    out << "vague_search: ";
    rosidl_generator_traits::value_to_yaml(msg.vague_search, out);
    out << ", ";
  }

  // member: master_list
  {
    if (msg.master_list.size() == 0) {
      out << "master_list: []";
    } else {
      out << "master_list: [";
      size_t pending_items = msg.master_list.size();
      for (auto item : msg.master_list) {
        to_flow_style_yaml(item, out);
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
  const Modbustcpmasterlist & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: page_num
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "page_num: ";
    rosidl_generator_traits::value_to_yaml(msg.page_num, out);
    out << "\n";
  }

  // member: page_size
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "page_size: ";
    rosidl_generator_traits::value_to_yaml(msg.page_size, out);
    out << "\n";
  }

  // member: total_size
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "total_size: ";
    rosidl_generator_traits::value_to_yaml(msg.total_size, out);
    out << "\n";
  }

  // member: vague_search
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vague_search: ";
    rosidl_generator_traits::value_to_yaml(msg.vague_search, out);
    out << "\n";
  }

  // member: master_list
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.master_list.size() == 0) {
      out << "master_list: []\n";
    } else {
      out << "master_list:\n";
      for (auto item : msg.master_list) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
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

inline std::string to_yaml(const Modbustcpmasterlist & msg, bool use_flow_style = false)
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
  const rm_ros_interfaces::msg::Modbustcpmasterlist & msg,
  std::ostream & out, size_t indentation = 0)
{
  rm_ros_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use rm_ros_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const rm_ros_interfaces::msg::Modbustcpmasterlist & msg)
{
  return rm_ros_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<rm_ros_interfaces::msg::Modbustcpmasterlist>()
{
  return "rm_ros_interfaces::msg::Modbustcpmasterlist";
}

template<>
inline const char * name<rm_ros_interfaces::msg::Modbustcpmasterlist>()
{
  return "rm_ros_interfaces/msg/Modbustcpmasterlist";
}

template<>
struct has_fixed_size<rm_ros_interfaces::msg::Modbustcpmasterlist>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<rm_ros_interfaces::msg::Modbustcpmasterlist>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<rm_ros_interfaces::msg::Modbustcpmasterlist>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // RM_ROS_INTERFACES__MSG__DETAIL__MODBUSTCPMASTERLIST__TRAITS_HPP_
