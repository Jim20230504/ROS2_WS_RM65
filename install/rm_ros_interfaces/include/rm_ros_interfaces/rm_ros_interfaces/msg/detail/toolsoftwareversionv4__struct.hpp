// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from rm_ros_interfaces:msg/Toolsoftwareversionv4.idl
// generated code does not contain a copyright notice

#ifndef RM_ROS_INTERFACES__MSG__DETAIL__TOOLSOFTWAREVERSIONV4__STRUCT_HPP_
#define RM_ROS_INTERFACES__MSG__DETAIL__TOOLSOFTWAREVERSIONV4__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__rm_ros_interfaces__msg__Toolsoftwareversionv4 __attribute__((deprecated))
#else
# define DEPRECATED__rm_ros_interfaces__msg__Toolsoftwareversionv4 __declspec(deprecated)
#endif

namespace rm_ros_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Toolsoftwareversionv4_
{
  using Type = Toolsoftwareversionv4_<ContainerAllocator>;

  explicit Toolsoftwareversionv4_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->tool_version = "";
      this->state = false;
    }
  }

  explicit Toolsoftwareversionv4_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : tool_version(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->tool_version = "";
      this->state = false;
    }
  }

  // field types and members
  using _tool_version_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _tool_version_type tool_version;
  using _state_type =
    bool;
  _state_type state;

  // setters for named parameter idiom
  Type & set__tool_version(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->tool_version = _arg;
    return *this;
  }
  Type & set__state(
    const bool & _arg)
  {
    this->state = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    rm_ros_interfaces::msg::Toolsoftwareversionv4_<ContainerAllocator> *;
  using ConstRawPtr =
    const rm_ros_interfaces::msg::Toolsoftwareversionv4_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rm_ros_interfaces::msg::Toolsoftwareversionv4_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rm_ros_interfaces::msg::Toolsoftwareversionv4_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rm_ros_interfaces::msg::Toolsoftwareversionv4_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rm_ros_interfaces::msg::Toolsoftwareversionv4_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rm_ros_interfaces::msg::Toolsoftwareversionv4_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rm_ros_interfaces::msg::Toolsoftwareversionv4_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rm_ros_interfaces::msg::Toolsoftwareversionv4_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rm_ros_interfaces::msg::Toolsoftwareversionv4_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rm_ros_interfaces__msg__Toolsoftwareversionv4
    std::shared_ptr<rm_ros_interfaces::msg::Toolsoftwareversionv4_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rm_ros_interfaces__msg__Toolsoftwareversionv4
    std::shared_ptr<rm_ros_interfaces::msg::Toolsoftwareversionv4_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Toolsoftwareversionv4_ & other) const
  {
    if (this->tool_version != other.tool_version) {
      return false;
    }
    if (this->state != other.state) {
      return false;
    }
    return true;
  }
  bool operator!=(const Toolsoftwareversionv4_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Toolsoftwareversionv4_

// alias to use template instance with default allocator
using Toolsoftwareversionv4 =
  rm_ros_interfaces::msg::Toolsoftwareversionv4_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace rm_ros_interfaces

#endif  // RM_ROS_INTERFACES__MSG__DETAIL__TOOLSOFTWAREVERSIONV4__STRUCT_HPP_
