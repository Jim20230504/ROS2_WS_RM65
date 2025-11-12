// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rm_ros_interfaces:msg/Getmodbustcpmasterlist.idl
// generated code does not contain a copyright notice

#ifndef RM_ROS_INTERFACES__MSG__DETAIL__GETMODBUSTCPMASTERLIST__BUILDER_HPP_
#define RM_ROS_INTERFACES__MSG__DETAIL__GETMODBUSTCPMASTERLIST__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rm_ros_interfaces/msg/detail/getmodbustcpmasterlist__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rm_ros_interfaces
{

namespace msg
{

namespace builder
{

class Init_Getmodbustcpmasterlist_vague_search
{
public:
  explicit Init_Getmodbustcpmasterlist_vague_search(::rm_ros_interfaces::msg::Getmodbustcpmasterlist & msg)
  : msg_(msg)
  {}
  ::rm_ros_interfaces::msg::Getmodbustcpmasterlist vague_search(::rm_ros_interfaces::msg::Getmodbustcpmasterlist::_vague_search_type arg)
  {
    msg_.vague_search = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rm_ros_interfaces::msg::Getmodbustcpmasterlist msg_;
};

class Init_Getmodbustcpmasterlist_page_size
{
public:
  explicit Init_Getmodbustcpmasterlist_page_size(::rm_ros_interfaces::msg::Getmodbustcpmasterlist & msg)
  : msg_(msg)
  {}
  Init_Getmodbustcpmasterlist_vague_search page_size(::rm_ros_interfaces::msg::Getmodbustcpmasterlist::_page_size_type arg)
  {
    msg_.page_size = std::move(arg);
    return Init_Getmodbustcpmasterlist_vague_search(msg_);
  }

private:
  ::rm_ros_interfaces::msg::Getmodbustcpmasterlist msg_;
};

class Init_Getmodbustcpmasterlist_page_num
{
public:
  Init_Getmodbustcpmasterlist_page_num()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Getmodbustcpmasterlist_page_size page_num(::rm_ros_interfaces::msg::Getmodbustcpmasterlist::_page_num_type arg)
  {
    msg_.page_num = std::move(arg);
    return Init_Getmodbustcpmasterlist_page_size(msg_);
  }

private:
  ::rm_ros_interfaces::msg::Getmodbustcpmasterlist msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rm_ros_interfaces::msg::Getmodbustcpmasterlist>()
{
  return rm_ros_interfaces::msg::builder::Init_Getmodbustcpmasterlist_page_num();
}

}  // namespace rm_ros_interfaces

#endif  // RM_ROS_INTERFACES__MSG__DETAIL__GETMODBUSTCPMASTERLIST__BUILDER_HPP_
