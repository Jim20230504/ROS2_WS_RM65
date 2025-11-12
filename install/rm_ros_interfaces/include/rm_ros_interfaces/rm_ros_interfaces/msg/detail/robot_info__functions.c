// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from rm_ros_interfaces:msg/RobotInfo.idl
// generated code does not contain a copyright notice
#include "rm_ros_interfaces/msg/detail/robot_info__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
rm_ros_interfaces__msg__RobotInfo__init(rm_ros_interfaces__msg__RobotInfo * msg)
{
  if (!msg) {
    return false;
  }
  // arm_dof
  // arm_model
  // force_type
  // robot_controller_version
  // state
  return true;
}

void
rm_ros_interfaces__msg__RobotInfo__fini(rm_ros_interfaces__msg__RobotInfo * msg)
{
  if (!msg) {
    return;
  }
  // arm_dof
  // arm_model
  // force_type
  // robot_controller_version
  // state
}

bool
rm_ros_interfaces__msg__RobotInfo__are_equal(const rm_ros_interfaces__msg__RobotInfo * lhs, const rm_ros_interfaces__msg__RobotInfo * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // arm_dof
  if (lhs->arm_dof != rhs->arm_dof) {
    return false;
  }
  // arm_model
  if (lhs->arm_model != rhs->arm_model) {
    return false;
  }
  // force_type
  if (lhs->force_type != rhs->force_type) {
    return false;
  }
  // robot_controller_version
  if (lhs->robot_controller_version != rhs->robot_controller_version) {
    return false;
  }
  // state
  if (lhs->state != rhs->state) {
    return false;
  }
  return true;
}

bool
rm_ros_interfaces__msg__RobotInfo__copy(
  const rm_ros_interfaces__msg__RobotInfo * input,
  rm_ros_interfaces__msg__RobotInfo * output)
{
  if (!input || !output) {
    return false;
  }
  // arm_dof
  output->arm_dof = input->arm_dof;
  // arm_model
  output->arm_model = input->arm_model;
  // force_type
  output->force_type = input->force_type;
  // robot_controller_version
  output->robot_controller_version = input->robot_controller_version;
  // state
  output->state = input->state;
  return true;
}

rm_ros_interfaces__msg__RobotInfo *
rm_ros_interfaces__msg__RobotInfo__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rm_ros_interfaces__msg__RobotInfo * msg = (rm_ros_interfaces__msg__RobotInfo *)allocator.allocate(sizeof(rm_ros_interfaces__msg__RobotInfo), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rm_ros_interfaces__msg__RobotInfo));
  bool success = rm_ros_interfaces__msg__RobotInfo__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
rm_ros_interfaces__msg__RobotInfo__destroy(rm_ros_interfaces__msg__RobotInfo * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    rm_ros_interfaces__msg__RobotInfo__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
rm_ros_interfaces__msg__RobotInfo__Sequence__init(rm_ros_interfaces__msg__RobotInfo__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rm_ros_interfaces__msg__RobotInfo * data = NULL;

  if (size) {
    data = (rm_ros_interfaces__msg__RobotInfo *)allocator.zero_allocate(size, sizeof(rm_ros_interfaces__msg__RobotInfo), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rm_ros_interfaces__msg__RobotInfo__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rm_ros_interfaces__msg__RobotInfo__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
rm_ros_interfaces__msg__RobotInfo__Sequence__fini(rm_ros_interfaces__msg__RobotInfo__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      rm_ros_interfaces__msg__RobotInfo__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

rm_ros_interfaces__msg__RobotInfo__Sequence *
rm_ros_interfaces__msg__RobotInfo__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rm_ros_interfaces__msg__RobotInfo__Sequence * array = (rm_ros_interfaces__msg__RobotInfo__Sequence *)allocator.allocate(sizeof(rm_ros_interfaces__msg__RobotInfo__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = rm_ros_interfaces__msg__RobotInfo__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
rm_ros_interfaces__msg__RobotInfo__Sequence__destroy(rm_ros_interfaces__msg__RobotInfo__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    rm_ros_interfaces__msg__RobotInfo__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
rm_ros_interfaces__msg__RobotInfo__Sequence__are_equal(const rm_ros_interfaces__msg__RobotInfo__Sequence * lhs, const rm_ros_interfaces__msg__RobotInfo__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!rm_ros_interfaces__msg__RobotInfo__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
rm_ros_interfaces__msg__RobotInfo__Sequence__copy(
  const rm_ros_interfaces__msg__RobotInfo__Sequence * input,
  rm_ros_interfaces__msg__RobotInfo__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(rm_ros_interfaces__msg__RobotInfo);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    rm_ros_interfaces__msg__RobotInfo * data =
      (rm_ros_interfaces__msg__RobotInfo *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!rm_ros_interfaces__msg__RobotInfo__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          rm_ros_interfaces__msg__RobotInfo__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!rm_ros_interfaces__msg__RobotInfo__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
