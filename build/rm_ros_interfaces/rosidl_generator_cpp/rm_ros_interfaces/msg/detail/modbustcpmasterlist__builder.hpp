// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rm_ros_interfaces:msg/Modbustcpmasterlist.idl
// generated code does not contain a copyright notice

#ifndef RM_ROS_INTERFACES__MSG__DETAIL__MODBUSTCPMASTERLIST__BUILDER_HPP_
#define RM_ROS_INTERFACES__MSG__DETAIL__MODBUSTCPMASTERLIST__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rm_ros_interfaces/msg/detail/modbustcpmasterlist__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rm_ros_interfaces
{

namespace msg
{

namespace builder
{

class Init_Modbustcpmasterlist_state
{
public:
  explicit Init_Modbustcpmasterlist_state(::rm_ros_interfaces::msg::Modbustcpmasterlist & msg)
  : msg_(msg)
  {}
  ::rm_ros_interfaces::msg::Modbustcpmasterlist state(::rm_ros_interfaces::msg::Modbustcpmasterlist::_state_type arg)
  {
    msg_.state = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rm_ros_interfaces::msg::Modbustcpmasterlist msg_;
};

class Init_Modbustcpmasterlist_master_list
{
public:
  explicit Init_Modbustcpmasterlist_master_list(::rm_ros_interfaces::msg::Modbustcpmasterlist & msg)
  : msg_(msg)
  {}
  Init_Modbustcpmasterlist_state master_list(::rm_ros_interfaces::msg::Modbustcpmasterlist::_master_list_type arg)
  {
    msg_.master_list = std::move(arg);
    return Init_Modbustcpmasterlist_state(msg_);
  }

private:
  ::rm_ros_interfaces::msg::Modbustcpmasterlist msg_;
};

class Init_Modbustcpmasterlist_vague_search
{
public:
  explicit Init_Modbustcpmasterlist_vague_search(::rm_ros_interfaces::msg::Modbustcpmasterlist & msg)
  : msg_(msg)
  {}
  Init_Modbustcpmasterlist_master_list vague_search(::rm_ros_interfaces::msg::Modbustcpmasterlist::_vague_search_type arg)
  {
    msg_.vague_search = std::move(arg);
    return Init_Modbustcpmasterlist_master_list(msg_);
  }

private:
  ::rm_ros_interfaces::msg::Modbustcpmasterlist msg_;
};

class Init_Modbustcpmasterlist_total_size
{
public:
  explicit Init_Modbustcpmasterlist_total_size(::rm_ros_interfaces::msg::Modbustcpmasterlist & msg)
  : msg_(msg)
  {}
  Init_Modbustcpmasterlist_vague_search total_size(::rm_ros_interfaces::msg::Modbustcpmasterlist::_total_size_type arg)
  {
    msg_.total_size = std::move(arg);
    return Init_Modbustcpmasterlist_vague_search(msg_);
  }

private:
  ::rm_ros_interfaces::msg::Modbustcpmasterlist msg_;
};

class Init_Modbustcpmasterlist_page_size
{
public:
  explicit Init_Modbustcpmasterlist_page_size(::rm_ros_interfaces::msg::Modbustcpmasterlist & msg)
  : msg_(msg)
  {}
  Init_Modbustcpmasterlist_total_size page_size(::rm_ros_interfaces::msg::Modbustcpmasterlist::_page_size_type arg)
  {
    msg_.page_size = std::move(arg);
    return Init_Modbustcpmasterlist_total_size(msg_);
  }

private:
  ::rm_ros_interfaces::msg::Modbustcpmasterlist msg_;
};

class Init_Modbustcpmasterlist_page_num
{
public:
  Init_Modbustcpmasterlist_page_num()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Modbustcpmasterlist_page_size page_num(::rm_ros_interfaces::msg::Modbustcpmasterlist::_page_num_type arg)
  {
    msg_.page_num = std::move(arg);
    return Init_Modbustcpmasterlist_page_size(msg_);
  }

private:
  ::rm_ros_interfaces::msg::Modbustcpmasterlist msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rm_ros_interfaces::msg::Modbustcpmasterlist>()
{
  return rm_ros_interfaces::msg::builder::Init_Modbustcpmasterlist_page_num();
}

}  // namespace rm_ros_interfaces

#endif  // RM_ROS_INTERFACES__MSG__DETAIL__MODBUSTCPMASTERLIST__BUILDER_HPP_
