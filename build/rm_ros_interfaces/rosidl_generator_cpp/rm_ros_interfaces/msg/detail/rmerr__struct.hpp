// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from rm_ros_interfaces:msg/Rmerr.idl
// generated code does not contain a copyright notice

#ifndef RM_ROS_INTERFACES__MSG__DETAIL__RMERR__STRUCT_HPP_
#define RM_ROS_INTERFACES__MSG__DETAIL__RMERR__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__rm_ros_interfaces__msg__Rmerr __attribute__((deprecated))
#else
# define DEPRECATED__rm_ros_interfaces__msg__Rmerr __declspec(deprecated)
#endif

namespace rm_ros_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Rmerr_
{
  using Type = Rmerr_<ContainerAllocator>;

  explicit Rmerr_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->err_len = 0;
    }
  }

  explicit Rmerr_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->err_len = 0;
    }
  }

  // field types and members
  using _err_len_type =
    uint8_t;
  _err_len_type err_len;
  using _err_type =
    std::vector<int32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int32_t>>;
  _err_type err;

  // setters for named parameter idiom
  Type & set__err_len(
    const uint8_t & _arg)
  {
    this->err_len = _arg;
    return *this;
  }
  Type & set__err(
    const std::vector<int32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int32_t>> & _arg)
  {
    this->err = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    rm_ros_interfaces::msg::Rmerr_<ContainerAllocator> *;
  using ConstRawPtr =
    const rm_ros_interfaces::msg::Rmerr_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rm_ros_interfaces::msg::Rmerr_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rm_ros_interfaces::msg::Rmerr_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rm_ros_interfaces::msg::Rmerr_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rm_ros_interfaces::msg::Rmerr_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rm_ros_interfaces::msg::Rmerr_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rm_ros_interfaces::msg::Rmerr_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rm_ros_interfaces::msg::Rmerr_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rm_ros_interfaces::msg::Rmerr_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rm_ros_interfaces__msg__Rmerr
    std::shared_ptr<rm_ros_interfaces::msg::Rmerr_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rm_ros_interfaces__msg__Rmerr
    std::shared_ptr<rm_ros_interfaces::msg::Rmerr_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Rmerr_ & other) const
  {
    if (this->err_len != other.err_len) {
      return false;
    }
    if (this->err != other.err) {
      return false;
    }
    return true;
  }
  bool operator!=(const Rmerr_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Rmerr_

// alias to use template instance with default allocator
using Rmerr =
  rm_ros_interfaces::msg::Rmerr_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace rm_ros_interfaces

#endif  // RM_ROS_INTERFACES__MSG__DETAIL__RMERR__STRUCT_HPP_
