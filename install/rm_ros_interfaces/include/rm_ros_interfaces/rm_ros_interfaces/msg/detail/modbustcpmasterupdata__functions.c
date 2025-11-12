// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from rm_ros_interfaces:msg/Modbustcpmasterupdata.idl
// generated code does not contain a copyright notice
#include "rm_ros_interfaces/msg/detail/modbustcpmasterupdata__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `master_name`
// Member `new_master_name`
// Member `ip`
#include "rosidl_runtime_c/string_functions.h"

bool
rm_ros_interfaces__msg__Modbustcpmasterupdata__init(rm_ros_interfaces__msg__Modbustcpmasterupdata * msg)
{
  if (!msg) {
    return false;
  }
  // master_name
  if (!rosidl_runtime_c__String__init(&msg->master_name)) {
    rm_ros_interfaces__msg__Modbustcpmasterupdata__fini(msg);
    return false;
  }
  // new_master_name
  if (!rosidl_runtime_c__String__init(&msg->new_master_name)) {
    rm_ros_interfaces__msg__Modbustcpmasterupdata__fini(msg);
    return false;
  }
  // ip
  if (!rosidl_runtime_c__String__init(&msg->ip)) {
    rm_ros_interfaces__msg__Modbustcpmasterupdata__fini(msg);
    return false;
  }
  // port
  return true;
}

void
rm_ros_interfaces__msg__Modbustcpmasterupdata__fini(rm_ros_interfaces__msg__Modbustcpmasterupdata * msg)
{
  if (!msg) {
    return;
  }
  // master_name
  rosidl_runtime_c__String__fini(&msg->master_name);
  // new_master_name
  rosidl_runtime_c__String__fini(&msg->new_master_name);
  // ip
  rosidl_runtime_c__String__fini(&msg->ip);
  // port
}

bool
rm_ros_interfaces__msg__Modbustcpmasterupdata__are_equal(const rm_ros_interfaces__msg__Modbustcpmasterupdata * lhs, const rm_ros_interfaces__msg__Modbustcpmasterupdata * rhs)
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
  // new_master_name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->new_master_name), &(rhs->new_master_name)))
  {
    return false;
  }
  // ip
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->ip), &(rhs->ip)))
  {
    return false;
  }
  // port
  if (lhs->port != rhs->port) {
    return false;
  }
  return true;
}

bool
rm_ros_interfaces__msg__Modbustcpmasterupdata__copy(
  const rm_ros_interfaces__msg__Modbustcpmasterupdata * input,
  rm_ros_interfaces__msg__Modbustcpmasterupdata * output)
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
  // new_master_name
  if (!rosidl_runtime_c__String__copy(
      &(input->new_master_name), &(output->new_master_name)))
  {
    return false;
  }
  // ip
  if (!rosidl_runtime_c__String__copy(
      &(input->ip), &(output->ip)))
  {
    return false;
  }
  // port
  output->port = input->port;
  return true;
}

rm_ros_interfaces__msg__Modbustcpmasterupdata *
rm_ros_interfaces__msg__Modbustcpmasterupdata__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rm_ros_interfaces__msg__Modbustcpmasterupdata * msg = (rm_ros_interfaces__msg__Modbustcpmasterupdata *)allocator.allocate(sizeof(rm_ros_interfaces__msg__Modbustcpmasterupdata), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rm_ros_interfaces__msg__Modbustcpmasterupdata));
  bool success = rm_ros_interfaces__msg__Modbustcpmasterupdata__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
rm_ros_interfaces__msg__Modbustcpmasterupdata__destroy(rm_ros_interfaces__msg__Modbustcpmasterupdata * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    rm_ros_interfaces__msg__Modbustcpmasterupdata__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
rm_ros_interfaces__msg__Modbustcpmasterupdata__Sequence__init(rm_ros_interfaces__msg__Modbustcpmasterupdata__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rm_ros_interfaces__msg__Modbustcpmasterupdata * data = NULL;

  if (size) {
    data = (rm_ros_interfaces__msg__Modbustcpmasterupdata *)allocator.zero_allocate(size, sizeof(rm_ros_interfaces__msg__Modbustcpmasterupdata), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rm_ros_interfaces__msg__Modbustcpmasterupdata__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rm_ros_interfaces__msg__Modbustcpmasterupdata__fini(&data[i - 1]);
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
rm_ros_interfaces__msg__Modbustcpmasterupdata__Sequence__fini(rm_ros_interfaces__msg__Modbustcpmasterupdata__Sequence * array)
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
      rm_ros_interfaces__msg__Modbustcpmasterupdata__fini(&array->data[i]);
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

rm_ros_interfaces__msg__Modbustcpmasterupdata__Sequence *
rm_ros_interfaces__msg__Modbustcpmasterupdata__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rm_ros_interfaces__msg__Modbustcpmasterupdata__Sequence * array = (rm_ros_interfaces__msg__Modbustcpmasterupdata__Sequence *)allocator.allocate(sizeof(rm_ros_interfaces__msg__Modbustcpmasterupdata__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = rm_ros_interfaces__msg__Modbustcpmasterupdata__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
rm_ros_interfaces__msg__Modbustcpmasterupdata__Sequence__destroy(rm_ros_interfaces__msg__Modbustcpmasterupdata__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    rm_ros_interfaces__msg__Modbustcpmasterupdata__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
rm_ros_interfaces__msg__Modbustcpmasterupdata__Sequence__are_equal(const rm_ros_interfaces__msg__Modbustcpmasterupdata__Sequence * lhs, const rm_ros_interfaces__msg__Modbustcpmasterupdata__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!rm_ros_interfaces__msg__Modbustcpmasterupdata__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
rm_ros_interfaces__msg__Modbustcpmasterupdata__Sequence__copy(
  const rm_ros_interfaces__msg__Modbustcpmasterupdata__Sequence * input,
  rm_ros_interfaces__msg__Modbustcpmasterupdata__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(rm_ros_interfaces__msg__Modbustcpmasterupdata);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    rm_ros_interfaces__msg__Modbustcpmasterupdata * data =
      (rm_ros_interfaces__msg__Modbustcpmasterupdata *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!rm_ros_interfaces__msg__Modbustcpmasterupdata__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          rm_ros_interfaces__msg__Modbustcpmasterupdata__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!rm_ros_interfaces__msg__Modbustcpmasterupdata__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
