// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from rm_ros_interfaces:msg/Modbusrtureadparams.idl
// generated code does not contain a copyright notice
#include "rm_ros_interfaces/msg/detail/modbusrtureadparams__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
rm_ros_interfaces__msg__Modbusrtureadparams__init(rm_ros_interfaces__msg__Modbusrtureadparams * msg)
{
  if (!msg) {
    return false;
  }
  // address
  // device
  // type
  // num
  return true;
}

void
rm_ros_interfaces__msg__Modbusrtureadparams__fini(rm_ros_interfaces__msg__Modbusrtureadparams * msg)
{
  if (!msg) {
    return;
  }
  // address
  // device
  // type
  // num
}

bool
rm_ros_interfaces__msg__Modbusrtureadparams__are_equal(const rm_ros_interfaces__msg__Modbusrtureadparams * lhs, const rm_ros_interfaces__msg__Modbusrtureadparams * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // address
  if (lhs->address != rhs->address) {
    return false;
  }
  // device
  if (lhs->device != rhs->device) {
    return false;
  }
  // type
  if (lhs->type != rhs->type) {
    return false;
  }
  // num
  if (lhs->num != rhs->num) {
    return false;
  }
  return true;
}

bool
rm_ros_interfaces__msg__Modbusrtureadparams__copy(
  const rm_ros_interfaces__msg__Modbusrtureadparams * input,
  rm_ros_interfaces__msg__Modbusrtureadparams * output)
{
  if (!input || !output) {
    return false;
  }
  // address
  output->address = input->address;
  // device
  output->device = input->device;
  // type
  output->type = input->type;
  // num
  output->num = input->num;
  return true;
}

rm_ros_interfaces__msg__Modbusrtureadparams *
rm_ros_interfaces__msg__Modbusrtureadparams__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rm_ros_interfaces__msg__Modbusrtureadparams * msg = (rm_ros_interfaces__msg__Modbusrtureadparams *)allocator.allocate(sizeof(rm_ros_interfaces__msg__Modbusrtureadparams), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rm_ros_interfaces__msg__Modbusrtureadparams));
  bool success = rm_ros_interfaces__msg__Modbusrtureadparams__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
rm_ros_interfaces__msg__Modbusrtureadparams__destroy(rm_ros_interfaces__msg__Modbusrtureadparams * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    rm_ros_interfaces__msg__Modbusrtureadparams__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
rm_ros_interfaces__msg__Modbusrtureadparams__Sequence__init(rm_ros_interfaces__msg__Modbusrtureadparams__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rm_ros_interfaces__msg__Modbusrtureadparams * data = NULL;

  if (size) {
    data = (rm_ros_interfaces__msg__Modbusrtureadparams *)allocator.zero_allocate(size, sizeof(rm_ros_interfaces__msg__Modbusrtureadparams), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rm_ros_interfaces__msg__Modbusrtureadparams__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rm_ros_interfaces__msg__Modbusrtureadparams__fini(&data[i - 1]);
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
rm_ros_interfaces__msg__Modbusrtureadparams__Sequence__fini(rm_ros_interfaces__msg__Modbusrtureadparams__Sequence * array)
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
      rm_ros_interfaces__msg__Modbusrtureadparams__fini(&array->data[i]);
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

rm_ros_interfaces__msg__Modbusrtureadparams__Sequence *
rm_ros_interfaces__msg__Modbusrtureadparams__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rm_ros_interfaces__msg__Modbusrtureadparams__Sequence * array = (rm_ros_interfaces__msg__Modbusrtureadparams__Sequence *)allocator.allocate(sizeof(rm_ros_interfaces__msg__Modbusrtureadparams__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = rm_ros_interfaces__msg__Modbusrtureadparams__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
rm_ros_interfaces__msg__Modbusrtureadparams__Sequence__destroy(rm_ros_interfaces__msg__Modbusrtureadparams__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    rm_ros_interfaces__msg__Modbusrtureadparams__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
rm_ros_interfaces__msg__Modbusrtureadparams__Sequence__are_equal(const rm_ros_interfaces__msg__Modbusrtureadparams__Sequence * lhs, const rm_ros_interfaces__msg__Modbusrtureadparams__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!rm_ros_interfaces__msg__Modbusrtureadparams__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
rm_ros_interfaces__msg__Modbusrtureadparams__Sequence__copy(
  const rm_ros_interfaces__msg__Modbusrtureadparams__Sequence * input,
  rm_ros_interfaces__msg__Modbusrtureadparams__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(rm_ros_interfaces__msg__Modbusrtureadparams);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    rm_ros_interfaces__msg__Modbusrtureadparams * data =
      (rm_ros_interfaces__msg__Modbusrtureadparams *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!rm_ros_interfaces__msg__Modbusrtureadparams__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          rm_ros_interfaces__msg__Modbusrtureadparams__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!rm_ros_interfaces__msg__Modbusrtureadparams__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
