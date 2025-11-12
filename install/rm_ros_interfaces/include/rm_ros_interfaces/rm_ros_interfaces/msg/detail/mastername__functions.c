// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from rm_ros_interfaces:msg/Mastername.idl
// generated code does not contain a copyright notice
#include "rm_ros_interfaces/msg/detail/mastername__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `master_name`
#include "rosidl_runtime_c/string_functions.h"

bool
rm_ros_interfaces__msg__Mastername__init(rm_ros_interfaces__msg__Mastername * msg)
{
  if (!msg) {
    return false;
  }
  // master_name
  if (!rosidl_runtime_c__String__init(&msg->master_name)) {
    rm_ros_interfaces__msg__Mastername__fini(msg);
    return false;
  }
  return true;
}

void
rm_ros_interfaces__msg__Mastername__fini(rm_ros_interfaces__msg__Mastername * msg)
{
  if (!msg) {
    return;
  }
  // master_name
  rosidl_runtime_c__String__fini(&msg->master_name);
}

bool
rm_ros_interfaces__msg__Mastername__are_equal(const rm_ros_interfaces__msg__Mastername * lhs, const rm_ros_interfaces__msg__Mastername * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // master_name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->master_name), &(rhs->master_name)))
  {
    return false;
  }
  return true;
}

bool
rm_ros_interfaces__msg__Mastername__copy(
  const rm_ros_interfaces__msg__Mastername * input,
  rm_ros_interfaces__msg__Mastername * output)
{
  if (!input || !output) {
    return false;
  }
  // master_name
  if (!rosidl_runtime_c__String__copy(
      &(input->master_name), &(output->master_name)))
  {
    return false;
  }
  return true;
}

rm_ros_interfaces__msg__Mastername *
rm_ros_interfaces__msg__Mastername__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rm_ros_interfaces__msg__Mastername * msg = (rm_ros_interfaces__msg__Mastername *)allocator.allocate(sizeof(rm_ros_interfaces__msg__Mastername), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rm_ros_interfaces__msg__Mastername));
  bool success = rm_ros_interfaces__msg__Mastername__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
rm_ros_interfaces__msg__Mastername__destroy(rm_ros_interfaces__msg__Mastername * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    rm_ros_interfaces__msg__Mastername__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
rm_ros_interfaces__msg__Mastername__Sequence__init(rm_ros_interfaces__msg__Mastername__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rm_ros_interfaces__msg__Mastername * data = NULL;

  if (size) {
    data = (rm_ros_interfaces__msg__Mastername *)allocator.zero_allocate(size, sizeof(rm_ros_interfaces__msg__Mastername), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rm_ros_interfaces__msg__Mastername__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rm_ros_interfaces__msg__Mastername__fini(&data[i - 1]);
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
rm_ros_interfaces__msg__Mastername__Sequence__fini(rm_ros_interfaces__msg__Mastername__Sequence * array)
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
      rm_ros_interfaces__msg__Mastername__fini(&array->data[i]);
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

rm_ros_interfaces__msg__Mastername__Sequence *
rm_ros_interfaces__msg__Mastername__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rm_ros_interfaces__msg__Mastername__Sequence * array = (rm_ros_interfaces__msg__Mastername__Sequence *)allocator.allocate(sizeof(rm_ros_interfaces__msg__Mastername__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = rm_ros_interfaces__msg__Mastername__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
rm_ros_interfaces__msg__Mastername__Sequence__destroy(rm_ros_interfaces__msg__Mastername__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    rm_ros_interfaces__msg__Mastername__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
rm_ros_interfaces__msg__Mastername__Sequence__are_equal(const rm_ros_interfaces__msg__Mastername__Sequence * lhs, const rm_ros_interfaces__msg__Mastername__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!rm_ros_interfaces__msg__Mastername__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
rm_ros_interfaces__msg__Mastername__Sequence__copy(
  const rm_ros_interfaces__msg__Mastername__Sequence * input,
  rm_ros_interfaces__msg__Mastername__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(rm_ros_interfaces__msg__Mastername);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    rm_ros_interfaces__msg__Mastername * data =
      (rm_ros_interfaces__msg__Mastername *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!rm_ros_interfaces__msg__Mastername__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          rm_ros_interfaces__msg__Mastername__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!rm_ros_interfaces__msg__Mastername__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
