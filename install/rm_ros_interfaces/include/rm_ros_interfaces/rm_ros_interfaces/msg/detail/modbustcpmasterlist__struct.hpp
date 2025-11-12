// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from rm_ros_interfaces:msg/Modbustcpmasterlist.idl
// generated code does not contain a copyright notice

#ifndef RM_ROS_INTERFACES__MSG__DETAIL__MODBUSTCPMASTERLIST__STRUCT_HPP_
#define RM_ROS_INTERFACES__MSG__DETAIL__MODBUSTCPMASTERLIST__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'master_list'
#include "rm_ros_interfaces/msg/detail/modbustcpmasterinfo__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__rm_ros_interfaces__msg__Modbustcpmasterlist __attribute__((deprecated))
#else
# define DEPRECATED__rm_ros_interfaces__msg__Modbustcpmasterlist __declspec(deprecated)
#endif

namespace rm_ros_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Modbustcpmasterlist_
{
  using Type = Modbustcpmasterlist_<ContainerAllocator>;

  explicit Modbustcpmasterlist_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->page_num = 0;
      this->page_size = 0;
      this->total_size = 0;
      this->vague_search = "";
      this->state = false;
    }
  }

  explicit Modbustcpmasterlist_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : vague_search(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->page_num = 0;
      this->page_size = 0;
      this->total_size = 0;
      this->vague_search = "";
      this->state = false;
    }
  }

  // field types and members
  using _page_num_type =
    uint8_t;
  _page_num_type page_num;
  using _page_size_type =
    uint8_t;
  _page_size_type page_size;
  using _total_size_type =
    uint8_t;
  _total_size_type total_size;
  using _vague_search_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _vague_search_type vague_search;
  using _master_list_type =
    std::vector<rm_ros_interfaces::msg::Modbustcpmasterinfo_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<rm_ros_interfaces::msg::Modbustcpmasterinfo_<ContainerAllocator>>>;
  _master_list_type master_list;
  using _state_type =
    bool;
  _state_type state;

  // setters for named parameter idiom
  Type & set__page_num(
    const uint8_t & _arg)
  {
    this->page_num = _arg;
    return *this;
  }
  Type & set__page_size(
    const uint8_t & _arg)
  {
    this->page_size = _arg;
    return *this;
  }
  Type & set__total_size(
    const uint8_t & _arg)
  {
    this->total_size = _arg;
    return *this;
  }
  Type & set__vague_search(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->vague_search = _arg;
    return *this;
  }
  Type & set__master_list(
    const std::vector<rm_ros_interfaces::msg::Modbustcpmasterinfo_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<rm_ros_interfaces::msg::Modbustcpmasterinfo_<ContainerAllocator>>> & _arg)
  {
    this->master_list = _arg;
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
    rm_ros_interfaces::msg::Modbustcpmasterlist_<ContainerAllocator> *;
  using ConstRawPtr =
    const rm_ros_interfaces::msg::Modbustcpmasterlist_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rm_ros_interfaces::msg::Modbustcpmasterlist_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rm_ros_interfaces::msg::Modbustcpmasterlist_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rm_ros_interfaces::msg::Modbustcpmasterlist_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rm_ros_interfaces::msg::Modbustcpmasterlist_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rm_ros_interfaces::msg::Modbustcpmasterlist_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rm_ros_interfaces::msg::Modbustcpmasterlist_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rm_ros_interfaces::msg::Modbustcpmasterlist_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rm_ros_interfaces::msg::Modbustcpmasterlist_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rm_ros_interfaces__msg__Modbustcpmasterlist
    std::shared_ptr<rm_ros_interfaces::msg::Modbustcpmasterlist_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rm_ros_interfaces__msg__Modbustcpmasterlist
    std::shared_ptr<rm_ros_interfaces::msg::Modbustcpmasterlist_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Modbustcpmasterlist_ & other) const
  {
    if (this->page_num != other.page_num) {
      return false;
    }
    if (this->page_size != other.page_size) {
      return false;
    }
    if (this->total_size != other.total_size) {
      return false;
    }
    if (this->vague_search != other.vague_search) {
      return false;
    }
    if (this->master_list != other.master_list) {
      return false;
    }
    if (this->state != other.state) {
      return false;
    }
    return true;
  }
  bool operator!=(const Modbustcpmasterlist_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Modbustcpmasterlist_

// alias to use template instance with default allocator
using Modbustcpmasterlist =
  rm_ros_interfaces::msg::Modbustcpmasterlist_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace rm_ros_interfaces

#endif  // RM_ROS_INTERFACES__MSG__DETAIL__MODBUSTCPMASTERLIST__STRUCT_HPP_
