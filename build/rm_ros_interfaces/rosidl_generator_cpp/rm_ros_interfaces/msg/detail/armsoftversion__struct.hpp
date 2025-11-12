// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from rm_ros_interfaces:msg/Armsoftversion.idl
// generated code does not contain a copyright notice

#ifndef RM_ROS_INTERFACES__MSG__DETAIL__ARMSOFTVERSION__STRUCT_HPP_
#define RM_ROS_INTERFACES__MSG__DETAIL__ARMSOFTVERSION__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'ctrl_info'
// Member 'plan_info'
// Member 'com_info'
// Member 'program_info'
#include "rm_ros_interfaces/msg/detail/softwarebuildinfo__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__rm_ros_interfaces__msg__Armsoftversion __attribute__((deprecated))
#else
# define DEPRECATED__rm_ros_interfaces__msg__Armsoftversion __declspec(deprecated)
#endif

namespace rm_ros_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Armsoftversion_
{
  using Type = Armsoftversion_<ContainerAllocator>;

  explicit Armsoftversion_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : ctrl_info(_init),
    plan_info(_init),
    com_info(_init),
    program_info(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->product_version = "";
      this->controller_version = "";
      this->algorithm_info = "";
      this->dynamic_info = "";
      this->state = false;
      this->planversion = "";
      this->ctrlversion = "";
      this->kernal1 = "";
      this->kernal2 = "";
      this->productversion = "";
    }
  }

  explicit Armsoftversion_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : product_version(_alloc),
    controller_version(_alloc),
    algorithm_info(_alloc),
    ctrl_info(_alloc, _init),
    dynamic_info(_alloc),
    plan_info(_alloc, _init),
    com_info(_alloc, _init),
    program_info(_alloc, _init),
    planversion(_alloc),
    ctrlversion(_alloc),
    kernal1(_alloc),
    kernal2(_alloc),
    productversion(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->product_version = "";
      this->controller_version = "";
      this->algorithm_info = "";
      this->dynamic_info = "";
      this->state = false;
      this->planversion = "";
      this->ctrlversion = "";
      this->kernal1 = "";
      this->kernal2 = "";
      this->productversion = "";
    }
  }

  // field types and members
  using _product_version_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _product_version_type product_version;
  using _controller_version_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _controller_version_type controller_version;
  using _algorithm_info_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _algorithm_info_type algorithm_info;
  using _ctrl_info_type =
    rm_ros_interfaces::msg::Softwarebuildinfo_<ContainerAllocator>;
  _ctrl_info_type ctrl_info;
  using _dynamic_info_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _dynamic_info_type dynamic_info;
  using _plan_info_type =
    rm_ros_interfaces::msg::Softwarebuildinfo_<ContainerAllocator>;
  _plan_info_type plan_info;
  using _com_info_type =
    rm_ros_interfaces::msg::Softwarebuildinfo_<ContainerAllocator>;
  _com_info_type com_info;
  using _program_info_type =
    rm_ros_interfaces::msg::Softwarebuildinfo_<ContainerAllocator>;
  _program_info_type program_info;
  using _state_type =
    bool;
  _state_type state;
  using _planversion_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _planversion_type planversion;
  using _ctrlversion_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _ctrlversion_type ctrlversion;
  using _kernal1_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _kernal1_type kernal1;
  using _kernal2_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _kernal2_type kernal2;
  using _productversion_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _productversion_type productversion;

  // setters for named parameter idiom
  Type & set__product_version(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->product_version = _arg;
    return *this;
  }
  Type & set__controller_version(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->controller_version = _arg;
    return *this;
  }
  Type & set__algorithm_info(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->algorithm_info = _arg;
    return *this;
  }
  Type & set__ctrl_info(
    const rm_ros_interfaces::msg::Softwarebuildinfo_<ContainerAllocator> & _arg)
  {
    this->ctrl_info = _arg;
    return *this;
  }
  Type & set__dynamic_info(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->dynamic_info = _arg;
    return *this;
  }
  Type & set__plan_info(
    const rm_ros_interfaces::msg::Softwarebuildinfo_<ContainerAllocator> & _arg)
  {
    this->plan_info = _arg;
    return *this;
  }
  Type & set__com_info(
    const rm_ros_interfaces::msg::Softwarebuildinfo_<ContainerAllocator> & _arg)
  {
    this->com_info = _arg;
    return *this;
  }
  Type & set__program_info(
    const rm_ros_interfaces::msg::Softwarebuildinfo_<ContainerAllocator> & _arg)
  {
    this->program_info = _arg;
    return *this;
  }
  Type & set__state(
    const bool & _arg)
  {
    this->state = _arg;
    return *this;
  }
  Type & set__planversion(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->planversion = _arg;
    return *this;
  }
  Type & set__ctrlversion(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->ctrlversion = _arg;
    return *this;
  }
  Type & set__kernal1(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->kernal1 = _arg;
    return *this;
  }
  Type & set__kernal2(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->kernal2 = _arg;
    return *this;
  }
  Type & set__productversion(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->productversion = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    rm_ros_interfaces::msg::Armsoftversion_<ContainerAllocator> *;
  using ConstRawPtr =
    const rm_ros_interfaces::msg::Armsoftversion_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rm_ros_interfaces::msg::Armsoftversion_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rm_ros_interfaces::msg::Armsoftversion_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rm_ros_interfaces::msg::Armsoftversion_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rm_ros_interfaces::msg::Armsoftversion_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rm_ros_interfaces::msg::Armsoftversion_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rm_ros_interfaces::msg::Armsoftversion_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rm_ros_interfaces::msg::Armsoftversion_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rm_ros_interfaces::msg::Armsoftversion_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rm_ros_interfaces__msg__Armsoftversion
    std::shared_ptr<rm_ros_interfaces::msg::Armsoftversion_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rm_ros_interfaces__msg__Armsoftversion
    std::shared_ptr<rm_ros_interfaces::msg::Armsoftversion_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Armsoftversion_ & other) const
  {
    if (this->product_version != other.product_version) {
      return false;
    }
    if (this->controller_version != other.controller_version) {
      return false;
    }
    if (this->algorithm_info != other.algorithm_info) {
      return false;
    }
    if (this->ctrl_info != other.ctrl_info) {
      return false;
    }
    if (this->dynamic_info != other.dynamic_info) {
      return false;
    }
    if (this->plan_info != other.plan_info) {
      return false;
    }
    if (this->com_info != other.com_info) {
      return false;
    }
    if (this->program_info != other.program_info) {
      return false;
    }
    if (this->state != other.state) {
      return false;
    }
    if (this->planversion != other.planversion) {
      return false;
    }
    if (this->ctrlversion != other.ctrlversion) {
      return false;
    }
    if (this->kernal1 != other.kernal1) {
      return false;
    }
    if (this->kernal2 != other.kernal2) {
      return false;
    }
    if (this->productversion != other.productversion) {
      return false;
    }
    return true;
  }
  bool operator!=(const Armsoftversion_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Armsoftversion_

// alias to use template instance with default allocator
using Armsoftversion =
  rm_ros_interfaces::msg::Armsoftversion_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace rm_ros_interfaces

#endif  // RM_ROS_INTERFACES__MSG__DETAIL__ARMSOFTVERSION__STRUCT_HPP_
