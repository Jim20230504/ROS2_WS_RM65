// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from rm_ros_interfaces:msg/Rmplusstate.idl
// generated code does not contain a copyright notice
#include "rm_ros_interfaces/msg/detail/rmplusstate__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
rm_ros_interfaces__msg__Rmplusstate__init(rm_ros_interfaces__msg__Rmplusstate * msg)
{
  if (!msg) {
    return false;
  }
  // sys_state
  // dof_state
  // dof_err
  // pos
  // speed
  // angle
  // current
  // normal_force
  // tangential_force
  // tangential_force_dir
  // tsa
  // tma
  // touch_data
  // force
  return true;
}

void
rm_ros_interfaces__msg__Rmplusstate__fini(rm_ros_interfaces__msg__Rmplusstate * msg)
{
  if (!msg) {
    return;
  }
  // sys_state
  // dof_state
  // dof_err
  // pos
  // speed
  // angle
  // current
  // normal_force
  // tangential_force
  // tangential_force_dir
  // tsa
  // tma
  // touch_data
  // force
}

bool
rm_ros_interfaces__msg__Rmplusstate__are_equal(const rm_ros_interfaces__msg__Rmplusstate * lhs, const rm_ros_interfaces__msg__Rmplusstate * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // sys_state
  if (lhs->sys_state != rhs->sys_state) {
    return false;
  }
  // dof_state
  for (size_t i = 0; i < 12; ++i) {
    if (lhs->dof_state[i] != rhs->dof_state[i]) {
      return false;
    }
  }
  // dof_err
  for (size_t i = 0; i < 12; ++i) {
    if (lhs->dof_err[i] != rhs->dof_err[i]) {
      return false;
    }
  }
  // pos
  for (size_t i = 0; i < 12; ++i) {
    if (lhs->pos[i] != rhs->pos[i]) {
      return false;
    }
  }
  // speed
  for (size_t i = 0; i < 12; ++i) {
    if (lhs->speed[i] != rhs->speed[i]) {
      return false;
    }
  }
  // angle
  for (size_t i = 0; i < 12; ++i) {
    if (lhs->angle[i] != rhs->angle[i]) {
      return false;
    }
  }
  // current
  for (size_t i = 0; i < 12; ++i) {
    if (lhs->current[i] != rhs->current[i]) {
      return false;
    }
  }
  // normal_force
  for (size_t i = 0; i < 18; ++i) {
    if (lhs->normal_force[i] != rhs->normal_force[i]) {
      return false;
    }
  }
  // tangential_force
  for (size_t i = 0; i < 18; ++i) {
    if (lhs->tangential_force[i] != rhs->tangential_force[i]) {
      return false;
    }
  }
  // tangential_force_dir
  for (size_t i = 0; i < 18; ++i) {
    if (lhs->tangential_force_dir[i] != rhs->tangential_force_dir[i]) {
      return false;
    }
  }
  // tsa
  for (size_t i = 0; i < 12; ++i) {
    if (lhs->tsa[i] != rhs->tsa[i]) {
      return false;
    }
  }
  // tma
  for (size_t i = 0; i < 12; ++i) {
    if (lhs->tma[i] != rhs->tma[i]) {
      return false;
    }
  }
  // touch_data
  for (size_t i = 0; i < 18; ++i) {
    if (lhs->touch_data[i] != rhs->touch_data[i]) {
      return false;
    }
  }
  // force
  for (size_t i = 0; i < 12; ++i) {
    if (lhs->force[i] != rhs->force[i]) {
      return false;
    }
  }
  return true;
}

bool
rm_ros_interfaces__msg__Rmplusstate__copy(
  const rm_ros_interfaces__msg__Rmplusstate * input,
  rm_ros_interfaces__msg__Rmplusstate * output)
{
  if (!input || !output) {
    return false;
  }
  // sys_state
  output->sys_state = input->sys_state;
  // dof_state
  for (size_t i = 0; i < 12; ++i) {
    output->dof_state[i] = input->dof_state[i];
  }
  // dof_err
  for (size_t i = 0; i < 12; ++i) {
    output->dof_err[i] = input->dof_err[i];
  }
  // pos
  for (size_t i = 0; i < 12; ++i) {
    output->pos[i] = input->pos[i];
  }
  // speed
  for (size_t i = 0; i < 12; ++i) {
    output->speed[i] = input->speed[i];
  }
  // angle
  for (size_t i = 0; i < 12; ++i) {
    output->angle[i] = input->angle[i];
  }
  // current
  for (size_t i = 0; i < 12; ++i) {
    output->current[i] = input->current[i];
  }
  // normal_force
  for (size_t i = 0; i < 18; ++i) {
    output->normal_force[i] = input->normal_force[i];
  }
  // tangential_force
  for (size_t i = 0; i < 18; ++i) {
    output->tangential_force[i] = input->tangential_force[i];
  }
  // tangential_force_dir
  for (size_t i = 0; i < 18; ++i) {
    output->tangential_force_dir[i] = input->tangential_force_dir[i];
  }
  // tsa
  for (size_t i = 0; i < 12; ++i) {
    output->tsa[i] = input->tsa[i];
  }
  // tma
  for (size_t i = 0; i < 12; ++i) {
    output->tma[i] = input->tma[i];
  }
  // touch_data
  for (size_t i = 0; i < 18; ++i) {
    output->touch_data[i] = input->touch_data[i];
  }
  // force
  for (size_t i = 0; i < 12; ++i) {
    output->force[i] = input->force[i];
  }
  return true;
}

rm_ros_interfaces__msg__Rmplusstate *
rm_ros_interfaces__msg__Rmplusstate__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rm_ros_interfaces__msg__Rmplusstate * msg = (rm_ros_interfaces__msg__Rmplusstate *)allocator.allocate(sizeof(rm_ros_interfaces__msg__Rmplusstate), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rm_ros_interfaces__msg__Rmplusstate));
  bool success = rm_ros_interfaces__msg__Rmplusstate__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
rm_ros_interfaces__msg__Rmplusstate__destroy(rm_ros_interfaces__msg__Rmplusstate * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    rm_ros_interfaces__msg__Rmplusstate__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
rm_ros_interfaces__msg__Rmplusstate__Sequence__init(rm_ros_interfaces__msg__Rmplusstate__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rm_ros_interfaces__msg__Rmplusstate * data = NULL;

  if (size) {
    data = (rm_ros_interfaces__msg__Rmplusstate *)allocator.zero_allocate(size, sizeof(rm_ros_interfaces__msg__Rmplusstate), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rm_ros_interfaces__msg__Rmplusstate__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rm_ros_interfaces__msg__Rmplusstate__fini(&data[i - 1]);
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
rm_ros_interfaces__msg__Rmplusstate__Sequence__fini(rm_ros_interfaces__msg__Rmplusstate__Sequence * array)
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
      rm_ros_interfaces__msg__Rmplusstate__fini(&array->data[i]);
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

rm_ros_interfaces__msg__Rmplusstate__Sequence *
rm_ros_interfaces__msg__Rmplusstate__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rm_ros_interfaces__msg__Rmplusstate__Sequence * array = (rm_ros_interfaces__msg__Rmplusstate__Sequence *)allocator.allocate(sizeof(rm_ros_interfaces__msg__Rmplusstate__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = rm_ros_interfaces__msg__Rmplusstate__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
rm_ros_interfaces__msg__Rmplusstate__Sequence__destroy(rm_ros_interfaces__msg__Rmplusstate__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    rm_ros_interfaces__msg__Rmplusstate__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
rm_ros_interfaces__msg__Rmplusstate__Sequence__are_equal(const rm_ros_interfaces__msg__Rmplusstate__Sequence * lhs, const rm_ros_interfaces__msg__Rmplusstate__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!rm_ros_interfaces__msg__Rmplusstate__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
rm_ros_interfaces__msg__Rmplusstate__Sequence__copy(
  const rm_ros_interfaces__msg__Rmplusstate__Sequence * input,
  rm_ros_interfaces__msg__Rmplusstate__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(rm_ros_interfaces__msg__Rmplusstate);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    rm_ros_interfaces__msg__Rmplusstate * data =
      (rm_ros_interfaces__msg__Rmplusstate *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!rm_ros_interfaces__msg__Rmplusstate__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          rm_ros_interfaces__msg__Rmplusstate__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!rm_ros_interfaces__msg__Rmplusstate__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
