// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from rm_ros_interfaces:msg/Jointversion.idl
// generated code does not contain a copyright notice
#include "rm_ros_interfaces/msg/detail/jointversion__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `joint_version`
#include "rosidl_runtime_c/string_functions.h"

bool
rm_ros_interfaces__msg__Jointversion__init(rm_ros_interfaces__msg__Jointversion * msg)
{
  if (!msg) {
    return false;
  }
  // joint_version
  for (size_t i = 0; i < 7; ++i) {
    if (!rosidl_runtime_c__String__init(&msg->joint_version[i])) {
      rm_ros_interfaces__msg__Jointversion__fini(msg);
      return false;
    }
  }
  // state
  return true;
}

void
rm_ros_interfaces__msg__Jointversion__fini(rm_ros_interfaces__msg__Jointversion * msg)
{
  if (!msg) {
    return;
  }
  // joint_version
  for (size_t i = 0; i < 7; ++i) {
    rosidl_runtime_c__String__fini(&msg->joint_version[i]);
  }
  // state
}

bool
rm_ros_interfaces__msg__Jointversion__are_equal(const rm_ros_interfaces__msg__Jointversion * lhs, const rm_ros_interfaces__msg__Jointversion * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // joint_version
  for (size_t i = 0; i < 7; ++i) {
    if (!rosidl_runtime_c__String__are_equal(
        &(lhs->joint_version[i]), &(rhs->joint_version[i])))
    {
      return false;
    }
  }
  // state
  if (lhs->state != rhs->state) {
    return false;
  }
  return true;
}

bool
rm_ros_interfaces__msg__Jointversion__copy(
  const rm_ros_interfaces__msg__Jointversion * input,
  rm_ros_interfaces__msg__Jointversion * output)
{
  if (!input || !output) {
    return false;
  }
  // joint_version
  for (size_t i = 0; i < 7; ++i) {
    if (!rosidl_runtime_c__String__copy(
        &(input->joint_version[i]), &(output->joint_version[i])))
    {
      return false;
    }
  }
  // state
  output->state = input->state;
  return true;
}

rm_ros_interfaces__msg__Jointversion *
rm_ros_interfaces__msg__Jointversion__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rm_ros_interfaces__msg__Jointversion * msg = (rm_ros_interfaces__msg__Jointversion *)allocator.allocate(sizeof(rm_ros_interfaces__msg__Jointversion), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rm_ros_interfaces__msg__Jointversion));
  bool success = rm_ros_interfaces__msg__Jointversion__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
rm_ros_interfaces__msg__Jointversion__destroy(rm_ros_interfaces__msg__Jointversion * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    rm_ros_interfaces__msg__Jointversion__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
rm_ros_interfaces__msg__Jointversion__Sequence__init(rm_ros_interfaces__msg__Jointversion__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rm_ros_interfaces__msg__Jointversion * data = NULL;

  if (size) {
    data = (rm_ros_interfaces__msg__Jointversion *)allocator.zero_allocate(size, sizeof(rm_ros_interfaces__msg__Jointversion), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rm_ros_interfaces__msg__Jointversion__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rm_ros_interfaces__msg__Jointversion__fini(&data[i - 1]);
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
rm_ros_interfaces__msg__Jointversion__Sequence__fini(rm_ros_interfaces__msg__Jointversion__Sequence * array)
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
      rm_ros_interfaces__msg__Jointversion__fini(&array->data[i]);
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

rm_ros_interfaces__msg__Jointversion__Sequence *
rm_ros_interfaces__msg__Jointversion__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rm_ros_interfaces__msg__Jointversion__Sequence * array = (rm_ros_interfaces__msg__Jointversion__Sequence *)allocator.allocate(sizeof(rm_ros_interfaces__msg__Jointversion__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = rm_ros_interfaces__msg__Jointversion__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
rm_ros_interfaces__msg__Jointversion__Sequence__destroy(rm_ros_interfaces__msg__Jointversion__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    rm_ros_interfaces__msg__Jointversion__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
rm_ros_interfaces__msg__Jointversion__Sequence__are_equal(const rm_ros_interfaces__msg__Jointversion__Sequence * lhs, const rm_ros_interfaces__msg__Jointversion__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!rm_ros_interfaces__msg__Jointversion__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
rm_ros_interfaces__msg__Jointversion__Sequence__copy(
  const rm_ros_interfaces__msg__Jointversion__Sequence * input,
  rm_ros_interfaces__msg__Jointversion__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(rm_ros_interfaces__msg__Jointversion);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    rm_ros_interfaces__msg__Jointversion * data =
      (rm_ros_interfaces__msg__Jointversion *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!rm_ros_interfaces__msg__Jointversion__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          rm_ros_interfaces__msg__Jointversion__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!rm_ros_interfaces__msg__Jointversion__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
