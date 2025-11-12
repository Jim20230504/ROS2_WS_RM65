// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from rm_ros_interfaces:msg/Armcurrentstatus.idl
// generated code does not contain a copyright notice

#ifndef RM_ROS_INTERFACES__MSG__DETAIL__ARMCURRENTSTATUS__STRUCT_HPP_
#define RM_ROS_INTERFACES__MSG__DETAIL__ARMCURRENTSTATUS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__rm_ros_interfaces__msg__Armcurrentstatus __attribute__((deprecated))
#else
# define DEPRECATED__rm_ros_interfaces__msg__Armcurrentstatus __declspec(deprecated)
#endif

namespace rm_ros_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Armcurrentstatus_
{
  using Type = Armcurrentstatus_<ContainerAllocator>;

  explicit Armcurrentstatus_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->arm_current_status = 0;
    }
  }

  explicit Armcurrentstatus_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->arm_current_status = 0;
    }
  }

  // field types and members
  using _arm_current_status_type =
    uint16_t;
  _arm_current_status_type arm_current_status;

  // setters for named parameter idiom
  Type & set__arm_current_status(
    const uint16_t & _arg)
  {
    this->arm_current_status = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    rm_ros_interfaces::msg::Armcurrentstatus_<ContainerAllocator> *;
  using ConstRawPtr =
    const rm_ros_interfaces::msg::Armcurrentstatus_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rm_ros_interfaces::msg::Armcurrentstatus_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rm_ros_interfaces::msg::Armcurrentstatus_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rm_ros_interfaces::msg::Armcurrentstatus_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rm_ros_interfaces::msg::Armcurrentstatus_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rm_ros_interfaces::msg::Armcurrentstatus_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rm_ros_interfaces::msg::Armcurrentstatus_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rm_ros_interfaces::msg::Armcurrentstatus_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rm_ros_interfaces::msg::Armcurrentstatus_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rm_ros_interfaces__msg__Armcurrentstatus
    std::shared_ptr<rm_ros_interfaces::msg::Armcurrentstatus_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rm_ros_interfaces__msg__Armcurrentstatus
    std::shared_ptr<rm_ros_interfaces::msg::Armcurrentstatus_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Armcurrentstatus_ & other) const
  {
    if (this->arm_current_status != other.arm_current_status) {
      return false;
    }
    return true;
  }
  bool operator!=(const Armcurrentstatus_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Armcurrentstatus_

// alias to use template instance with default allocator
using Armcurrentstatus =
  rm_ros_interfaces::msg::Armcurrentstatus_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace rm_ros_interfaces

#endif  // RM_ROS_INTERFACES__MSG__DETAIL__ARMCURRENTSTATUS__STRUCT_HPP_
