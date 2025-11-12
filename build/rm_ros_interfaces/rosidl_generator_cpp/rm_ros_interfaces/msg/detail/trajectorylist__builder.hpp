// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rm_ros_interfaces:msg/Trajectorylist.idl
// generated code does not contain a copyright notice

#ifndef RM_ROS_INTERFACES__MSG__DETAIL__TRAJECTORYLIST__BUILDER_HPP_
#define RM_ROS_INTERFACES__MSG__DETAIL__TRAJECTORYLIST__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rm_ros_interfaces/msg/detail/trajectorylist__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rm_ros_interfaces
{

namespace msg
{

namespace builder
{

class Init_Trajectorylist_state
{
public:
  explicit Init_Trajectorylist_state(::rm_ros_interfaces::msg::Trajectorylist & msg)
  : msg_(msg)
  {}
  ::rm_ros_interfaces::msg::Trajectorylist state(::rm_ros_interfaces::msg::Trajectorylist::_state_type arg)
  {
    msg_.state = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rm_ros_interfaces::msg::Trajectorylist msg_;
};

class Init_Trajectorylist_tra_list
{
public:
  explicit Init_Trajectorylist_tra_list(::rm_ros_interfaces::msg::Trajectorylist & msg)
  : msg_(msg)
  {}
  Init_Trajectorylist_state tra_list(::rm_ros_interfaces::msg::Trajectorylist::_tra_list_type arg)
  {
    msg_.tra_list = std::move(arg);
    return Init_Trajectorylist_state(msg_);
  }

private:
  ::rm_ros_interfaces::msg::Trajectorylist msg_;
};

class Init_Trajectorylist_vague_search
{
public:
  explicit Init_Trajectorylist_vague_search(::rm_ros_interfaces::msg::Trajectorylist & msg)
  : msg_(msg)
  {}
  Init_Trajectorylist_tra_list vague_search(::rm_ros_interfaces::msg::Trajectorylist::_vague_search_type arg)
  {
    msg_.vague_search = std::move(arg);
    return Init_Trajectorylist_tra_list(msg_);
  }

private:
  ::rm_ros_interfaces::msg::Trajectorylist msg_;
};

class Init_Trajectorylist_total_size
{
public:
  explicit Init_Trajectorylist_total_size(::rm_ros_interfaces::msg::Trajectorylist & msg)
  : msg_(msg)
  {}
  Init_Trajectorylist_vague_search total_size(::rm_ros_interfaces::msg::Trajectorylist::_total_size_type arg)
  {
    msg_.total_size = std::move(arg);
    return Init_Trajectorylist_vague_search(msg_);
  }

private:
  ::rm_ros_interfaces::msg::Trajectorylist msg_;
};

class Init_Trajectorylist_page_size
{
public:
  explicit Init_Trajectorylist_page_size(::rm_ros_interfaces::msg::Trajectorylist & msg)
  : msg_(msg)
  {}
  Init_Trajectorylist_total_size page_size(::rm_ros_interfaces::msg::Trajectorylist::_page_size_type arg)
  {
    msg_.page_size = std::move(arg);
    return Init_Trajectorylist_total_size(msg_);
  }

private:
  ::rm_ros_interfaces::msg::Trajectorylist msg_;
};

class Init_Trajectorylist_page_num
{
public:
  Init_Trajectorylist_page_num()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Trajectorylist_page_size page_num(::rm_ros_interfaces::msg::Trajectorylist::_page_num_type arg)
  {
    msg_.page_num = std::move(arg);
    return Init_Trajectorylist_page_size(msg_);
  }

private:
  ::rm_ros_interfaces::msg::Trajectorylist msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rm_ros_interfaces::msg::Trajectorylist>()
{
  return rm_ros_interfaces::msg::builder::Init_Trajectorylist_page_num();
}

}  // namespace rm_ros_interfaces

#endif  // RM_ROS_INTERFACES__MSG__DETAIL__TRAJECTORYLIST__BUILDER_HPP_
