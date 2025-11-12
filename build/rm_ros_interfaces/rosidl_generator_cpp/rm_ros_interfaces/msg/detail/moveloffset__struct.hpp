// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from rm_ros_interfaces:msg/Moveloffset.idl
// generated code does not contain a copyright notice

#ifndef RM_ROS_INTERFACES__MSG__DETAIL__MOVELOFFSET__STRUCT_HPP_
#define RM_ROS_INTERFACES__MSG__DETAIL__MOVELOFFSET__STRUCT_HPP_

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
# define DEPRECATED__rm_ros_interfaces__msg__Moveloffset __attribute__((deprecated))
#else
# define DEPRECATED__rm_ros_interfaces__msg__Moveloffset __declspec(deprecated)
#endif

namespace rm_ros_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Moveloffset_
{
  using Type = Moveloffset_<ContainerAllocator>;

  explicit Moveloffset_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : pose(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->speed = 0l;
      this->r = 0l;
      this->trajectory_connect = false;
      this->frame_type = false;
      this->block = false;
    }
  }

  explicit Moveloffset_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : pose(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->speed = 0l;
      this->r = 0l;
      this->trajectory_connect = false;
      this->frame_type = false;
      this->block = false;
    }
  }

  // field types and members
  using _pose_type =
    geometry_msgs::msg::Pose_<ContainerAllocator>;
  _pose_type pose;
  using _speed_type =
    int32_t;
  _speed_type speed;
  using _r_type =
    int32_t;
  _r_type r;
  using _trajectory_connect_type =
    bool;
  _trajectory_connect_type trajectory_connect;
  using _frame_type_type =
    bool;
  _frame_type_type frame_type;
  using _block_type =
    bool;
  _block_type block;

  // setters for named parameter idiom
  Type & set__pose(
    const geometry_msgs::msg::Pose_<ContainerAllocator> & _arg)
  {
    this->pose = _arg;
    return *this;
  }
  Type & set__speed(
    const int32_t & _arg)
  {
    this->speed = _arg;
    return *this;
  }
  Type & set__r(
    const int32_t & _arg)
  {
    this->r = _arg;
    return *this;
  }
  Type & set__trajectory_connect(
    const bool & _arg)
  {
    this->trajectory_connect = _arg;
    return *this;
  }
  Type & set__frame_type(
    const bool & _arg)
  {
    this->frame_type = _arg;
    return *this;
  }
  Type & set__block(
    const bool & _arg)
  {
    this->block = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    rm_ros_interfaces::msg::Moveloffset_<ContainerAllocator> *;
  using ConstRawPtr =
    const rm_ros_interfaces::msg::Moveloffset_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rm_ros_interfaces::msg::Moveloffset_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rm_ros_interfaces::msg::Moveloffset_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rm_ros_interfaces::msg::Moveloffset_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rm_ros_interfaces::msg::Moveloffset_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rm_ros_interfaces::msg::Moveloffset_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rm_ros_interfaces::msg::Moveloffset_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rm_ros_interfaces::msg::Moveloffset_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rm_ros_interfaces::msg::Moveloffset_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rm_ros_interfaces__msg__Moveloffset
    std::shared_ptr<rm_ros_interfaces::msg::Moveloffset_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rm_ros_interfaces__msg__Moveloffset
    std::shared_ptr<rm_ros_interfaces::msg::Moveloffset_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Moveloffset_ & other) const
  {
    if (this->pose != other.pose) {
      return false;
    }
    if (this->speed != other.speed) {
      return false;
    }
    if (this->r != other.r) {
      return false;
    }
    if (this->trajectory_connect != other.trajectory_connect) {
      return false;
    }
    if (this->frame_type != other.frame_type) {
      return false;
    }
    if (this->block != other.block) {
      return false;
    }
    return true;
  }
  bool operator!=(const Moveloffset_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Moveloffset_

// alias to use template instance with default allocator
using Moveloffset =
  rm_ros_interfaces::msg::Moveloffset_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace rm_ros_interfaces

#endif  // RM_ROS_INTERFACES__MSG__DETAIL__MOVELOFFSET__STRUCT_HPP_
