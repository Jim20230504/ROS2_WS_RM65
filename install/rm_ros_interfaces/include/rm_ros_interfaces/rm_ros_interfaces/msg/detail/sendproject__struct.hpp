// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from rm_ros_interfaces:msg/Sendproject.idl
// generated code does not contain a copyright notice

#ifndef RM_ROS_INTERFACES__MSG__DETAIL__SENDPROJECT__STRUCT_HPP_
#define RM_ROS_INTERFACES__MSG__DETAIL__SENDPROJECT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__rm_ros_interfaces__msg__Sendproject __attribute__((deprecated))
#else
# define DEPRECATED__rm_ros_interfaces__msg__Sendproject __declspec(deprecated)
#endif

namespace rm_ros_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Sendproject_
{
  using Type = Sendproject_<ContainerAllocator>;

  explicit Sendproject_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->project_path = "";
      this->project_path_len = 0l;
      this->plan_speed = 0l;
      this->only_save = 0l;
      this->save_id = 0l;
      this->step_flag = 0l;
      this->auto_start = 0l;
      this->project_type = 0l;
    }
  }

  explicit Sendproject_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : project_path(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->project_path = "";
      this->project_path_len = 0l;
      this->plan_speed = 0l;
      this->only_save = 0l;
      this->save_id = 0l;
      this->step_flag = 0l;
      this->auto_start = 0l;
      this->project_type = 0l;
    }
  }

  // field types and members
  using _project_path_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _project_path_type project_path;
  using _project_path_len_type =
    int32_t;
  _project_path_len_type project_path_len;
  using _plan_speed_type =
    int32_t;
  _plan_speed_type plan_speed;
  using _only_save_type =
    int32_t;
  _only_save_type only_save;
  using _save_id_type =
    int32_t;
  _save_id_type save_id;
  using _step_flag_type =
    int32_t;
  _step_flag_type step_flag;
  using _auto_start_type =
    int32_t;
  _auto_start_type auto_start;
  using _project_type_type =
    int32_t;
  _project_type_type project_type;

  // setters for named parameter idiom
  Type & set__project_path(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->project_path = _arg;
    return *this;
  }
  Type & set__project_path_len(
    const int32_t & _arg)
  {
    this->project_path_len = _arg;
    return *this;
  }
  Type & set__plan_speed(
    const int32_t & _arg)
  {
    this->plan_speed = _arg;
    return *this;
  }
  Type & set__only_save(
    const int32_t & _arg)
  {
    this->only_save = _arg;
    return *this;
  }
  Type & set__save_id(
    const int32_t & _arg)
  {
    this->save_id = _arg;
    return *this;
  }
  Type & set__step_flag(
    const int32_t & _arg)
  {
    this->step_flag = _arg;
    return *this;
  }
  Type & set__auto_start(
    const int32_t & _arg)
  {
    this->auto_start = _arg;
    return *this;
  }
  Type & set__project_type(
    const int32_t & _arg)
  {
    this->project_type = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    rm_ros_interfaces::msg::Sendproject_<ContainerAllocator> *;
  using ConstRawPtr =
    const rm_ros_interfaces::msg::Sendproject_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rm_ros_interfaces::msg::Sendproject_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rm_ros_interfaces::msg::Sendproject_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rm_ros_interfaces::msg::Sendproject_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rm_ros_interfaces::msg::Sendproject_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rm_ros_interfaces::msg::Sendproject_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rm_ros_interfaces::msg::Sendproject_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rm_ros_interfaces::msg::Sendproject_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rm_ros_interfaces::msg::Sendproject_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rm_ros_interfaces__msg__Sendproject
    std::shared_ptr<rm_ros_interfaces::msg::Sendproject_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rm_ros_interfaces__msg__Sendproject
    std::shared_ptr<rm_ros_interfaces::msg::Sendproject_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Sendproject_ & other) const
  {
    if (this->project_path != other.project_path) {
      return false;
    }
    if (this->project_path_len != other.project_path_len) {
      return false;
    }
    if (this->plan_speed != other.plan_speed) {
      return false;
    }
    if (this->only_save != other.only_save) {
      return false;
    }
    if (this->save_id != other.save_id) {
      return false;
    }
    if (this->step_flag != other.step_flag) {
      return false;
    }
    if (this->auto_start != other.auto_start) {
      return false;
    }
    if (this->project_type != other.project_type) {
      return false;
    }
    return true;
  }
  bool operator!=(const Sendproject_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Sendproject_

// alias to use template instance with default allocator
using Sendproject =
  rm_ros_interfaces::msg::Sendproject_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace rm_ros_interfaces

#endif  // RM_ROS_INTERFACES__MSG__DETAIL__SENDPROJECT__STRUCT_HPP_
