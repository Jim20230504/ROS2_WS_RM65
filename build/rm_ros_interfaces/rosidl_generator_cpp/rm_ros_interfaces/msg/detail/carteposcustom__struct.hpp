// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from rm_ros_interfaces:msg/Carteposcustom.idl
// generated code does not contain a copyright notice

#ifndef RM_ROS_INTERFACES__MSG__DETAIL__CARTEPOSCUSTOM__STRUCT_HPP_
#define RM_ROS_INTERFACES__MSG__DETAIL__CARTEPOSCUSTOM__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'pose'
#include "geometry_msgs/msg/detail/pose__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__rm_ros_interfaces__msg__Carteposcustom __attribute__((deprecated))
#else
# define DEPRECATED__rm_ros_interfaces__msg__Carteposcustom __declspec(deprecated)
#endif

namespace rm_ros_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Carteposcustom_
{
  using Type = Carteposcustom_<ContainerAllocator>;

  explicit Carteposcustom_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : pose(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->follow = false;
      this->trajectory_mode = 0;
      this->radio = 0;
    }
  }

  explicit Carteposcustom_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : pose(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->follow = false;
      this->trajectory_mode = 0;
      this->radio = 0;
    }
  }

  // field types and members
  using _pose_type =
    geometry_msgs::msg::Pose_<ContainerAllocator>;
  _pose_type pose;
  using _follow_type =
    bool;
  _follow_type follow;
  using _trajectory_mode_type =
    uint8_t;
  _trajectory_mode_type trajectory_mode;
  using _radio_type =
    uint8_t;
  _radio_type radio;

  // setters for named parameter idiom
  Type & set__pose(
    const geometry_msgs::msg::Pose_<ContainerAllocator> & _arg)
  {
    this->pose = _arg;
    return *this;
  }
  Type & set__follow(
    const bool & _arg)
  {
    this->follow = _arg;
    return *this;
  }
  Type & set__trajectory_mode(
    const uint8_t & _arg)
  {
    this->trajectory_mode = _arg;
    return *this;
  }
  Type & set__radio(
    const uint8_t & _arg)
  {
    this->radio = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    rm_ros_interfaces::msg::Carteposcustom_<ContainerAllocator> *;
  using ConstRawPtr =
    const rm_ros_interfaces::msg::Carteposcustom_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rm_ros_interfaces::msg::Carteposcustom_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rm_ros_interfaces::msg::Carteposcustom_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rm_ros_interfaces::msg::Carteposcustom_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rm_ros_interfaces::msg::Carteposcustom_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rm_ros_interfaces::msg::Carteposcustom_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rm_ros_interfaces::msg::Carteposcustom_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rm_ros_interfaces::msg::Carteposcustom_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rm_ros_interfaces::msg::Carteposcustom_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rm_ros_interfaces__msg__Carteposcustom
    std::shared_ptr<rm_ros_interfaces::msg::Carteposcustom_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rm_ros_interfaces__msg__Carteposcustom
    std::shared_ptr<rm_ros_interfaces::msg::Carteposcustom_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Carteposcustom_ & other) const
  {
    if (this->pose != other.pose) {
      return false;
    }
    if (this->follow != other.follow) {
      return false;
    }
    if (this->trajectory_mode != other.trajectory_mode) {
      return false;
    }
    if (this->radio != other.radio) {
      return false;
    }
    return true;
  }
  bool operator!=(const Carteposcustom_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Carteposcustom_

// alias to use template instance with default allocator
using Carteposcustom =
  rm_ros_interfaces::msg::Carteposcustom_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace rm_ros_interfaces

#endif  // RM_ROS_INTERFACES__MSG__DETAIL__CARTEPOSCUSTOM__STRUCT_HPP_
