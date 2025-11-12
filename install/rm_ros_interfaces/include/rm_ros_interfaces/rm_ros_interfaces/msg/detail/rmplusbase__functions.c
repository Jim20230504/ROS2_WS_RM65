// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from rm_ros_interfaces:msg/Rmplusbase.idl
// generated code does not contain a copyright notice
#include "rm_ros_interfaces/msg/detail/rmplusbase__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `manu`
// Member `hv`
// Member `sv`
// Member `bv`
#include "rosidl_runtime_c/string_functions.h"

bool
rm_ros_interfaces__msg__Rmplusbase__init(rm_ros_interfaces__msg__Rmplusbase * msg)
{
  if (!msg) {
    return false;
  }
  // manu
  if (!rosidl_runtime_c__String__init(&msg->manu)) {
    rm_ros_interfaces__msg__Rmplusbase__fini(msg);
    return false;
  }
  // type
  // hv
  if (!rosidl_runtime_c__String__init(&msg->hv)) {
    rm_ros_interfaces__msg__Rmplusbase__fini(msg);
    return false;
  }
  // sv
  if (!rosidl_runtime_c__String__init(&msg->sv)) {
    rm_ros_interfaces__msg__Rmplusbase__fini(msg);
    return false;
  }
  // bv
  if (!rosidl_runtime_c__String__init(&msg->bv)) {
    rm_ros_interfaces__msg__Rmplusbase__fini(msg);
    return false;
  }
  // id
  // dof
  // check
  // bee
  // force
  // touch
  // touch_num
  // touch_sw
  // hand
  // pos_up
  // pos_low
  // angle_up
  // angle_low
  // speed_up
  // speed_low
  // force_up
  // force_low
  return true;
}

void
rm_ros_interfaces__msg__Rmplusbase__fini(rm_ros_interfaces__msg__Rmplusbase * msg)
{
  if (!msg) {
    return;
  }
  // manu
  rosidl_runtime_c__String__fini(&msg->manu);
  // type
  // hv
  rosidl_runtime_c__String__fini(&msg->hv);
  // sv
  rosidl_runtime_c__String__fini(&msg->sv);
  // bv
  rosidl_runtime_c__String__fini(&msg->bv);
  // id
  // dof
  // check
  // bee
  // force
  // touch
  // touch_num
  // touch_sw
  // hand
  // pos_up
  // pos_low
  // angle_up
  // angle_low
  // speed_up
  // speed_low
  // force_up
  // force_low
}

bool
rm_ros_interfaces__msg__Rmplusbase__are_equal(const rm_ros_interfaces__msg__Rmplusbase * lhs, const rm_ros_interfaces__msg__Rmplusbase * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // manu
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->manu), &(rhs->manu)))
  {
    return false;
  }
  // type
  if (lhs->type != rhs->type) {
    return false;
  }
  // hv
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->hv), &(rhs->hv)))
  {
    return false;
  }
  // sv
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->sv), &(rhs->sv)))
  {
    return false;
  }
  // bv
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->bv), &(rhs->bv)))
  {
    return false;
  }
  // id
  if (lhs->id != rhs->id) {
    return false;
  }
  // dof
  if (lhs->dof != rhs->dof) {
    return false;
  }
  // check
  if (lhs->check != rhs->check) {
    return false;
  }
  // bee
  if (lhs->bee != rhs->bee) {
    return false;
  }
  // force
  if (lhs->force != rhs->force) {
    return false;
  }
  // touch
  if (lhs->touch != rhs->touch) {
    return false;
  }
  // touch_num
  if (lhs->touch_num != rhs->touch_num) {
    return false;
  }
  // touch_sw
  if (lhs->touch_sw != rhs->touch_sw) {
    return false;
  }
  // hand
  if (lhs->hand != rhs->hand) {
    return false;
  }
  // pos_up
  for (size_t i = 0; i < 12; ++i) {
    if (lhs->pos_up[i] != rhs->pos_up[i]) {
      return false;
    }
  }
  // pos_low
  for (size_t i = 0; i < 12; ++i) {
    if (lhs->pos_low[i] != rhs->pos_low[i]) {
      return false;
    }
  }
  // angle_up
  for (size_t i = 0; i < 12; ++i) {
    if (lhs->angle_up[i] != rhs->angle_up[i]) {
      return false;
    }
  }
  // angle_low
  for (size_t i = 0; i < 12; ++i) {
    if (lhs->angle_low[i] != rhs->angle_low[i]) {
      return false;
    }
  }
  // speed_up
  for (size_t i = 0; i < 12; ++i) {
    if (lhs->speed_up[i] != rhs->speed_up[i]) {
      return false;
    }
  }
  // speed_low
  for (size_t i = 0; i < 12; ++i) {
    if (lhs->speed_low[i] != rhs->speed_low[i]) {
      return false;
    }
  }
  // force_up
  for (size_t i = 0; i < 12; ++i) {
    if (lhs->force_up[i] != rhs->force_up[i]) {
      return false;
    }
  }
  // force_low
  for (size_t i = 0; i < 12; ++i) {
    if (lhs->force_low[i] != rhs->force_low[i]) {
      return false;
    }
  }
  return true;
}

bool
rm_ros_interfaces__msg__Rmplusbase__copy(
  const rm_ros_interfaces__msg__Rmplusbase * input,
  rm_ros_interfaces__msg__Rmplusbase * output)
{
  if (!input || !output) {
    return false;
  }
  // manu
  if (!rosidl_runtime_c__String__copy(
      &(input->manu), &(output->manu)))
  {
    return false;
  }
  // type
  output->type = input->type;
  // hv
  if (!rosidl_runtime_c__String__copy(
      &(input->hv), &(output->hv)))
  {
    return false;
  }
  // sv
  if (!rosidl_runtime_c__String__copy(
      &(input->sv), &(output->sv)))
  {
    return false;
  }
  // bv
  if (!rosidl_runtime_c__String__copy(
      &(input->bv), &(output->bv)))
  {
    return false;
  }
  // id
  output->id = input->id;
  // dof
  output->dof = input->dof;
  // check
  output->check = input->check;
  // bee
  output->bee = input->bee;
  // force
  output->force = input->force;
  // touch
  output->touch = input->touch;
  // touch_num
  output->touch_num = input->touch_num;
  // touch_sw
  output->touch_sw = input->touch_sw;
  // hand
  output->hand = input->hand;
  // pos_up
  for (size_t i = 0; i < 12; ++i) {
    output->pos_up[i] = input->pos_up[i];
  }
  // pos_low
  for (size_t i = 0; i < 12; ++i) {
    output->pos_low[i] = input->pos_low[i];
  }
  // angle_up
  for (size_t i = 0; i < 12; ++i) {
    output->angle_up[i] = input->angle_up[i];
  }
  // angle_low
  for (size_t i = 0; i < 12; ++i) {
    output->angle_low[i] = input->angle_low[i];
  }
  // speed_up
  for (size_t i = 0; i < 12; ++i) {
    output->speed_up[i] = input->speed_up[i];
  }
  // speed_low
  for (size_t i = 0; i < 12; ++i) {
    output->speed_low[i] = input->speed_low[i];
  }
  // force_up
  for (size_t i = 0; i < 12; ++i) {
    output->force_up[i] = input->force_up[i];
  }
  // force_low
  for (size_t i = 0; i < 12; ++i) {
    output->force_low[i] = input->force_low[i];
  }
  return true;
}

rm_ros_interfaces__msg__Rmplusbase *
rm_ros_interfaces__msg__Rmplusbase__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rm_ros_interfaces__msg__Rmplusbase * msg = (rm_ros_interfaces__msg__Rmplusbase *)allocator.allocate(sizeof(rm_ros_interfaces__msg__Rmplusbase), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rm_ros_interfaces__msg__Rmplusbase));
  bool success = rm_ros_interfaces__msg__Rmplusbase__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
rm_ros_interfaces__msg__Rmplusbase__destroy(rm_ros_interfaces__msg__Rmplusbase * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    rm_ros_interfaces__msg__Rmplusbase__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
rm_ros_interfaces__msg__Rmplusbase__Sequence__init(rm_ros_interfaces__msg__Rmplusbase__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rm_ros_interfaces__msg__Rmplusbase * data = NULL;

  if (size) {
    data = (rm_ros_interfaces__msg__Rmplusbase *)allocator.zero_allocate(size, sizeof(rm_ros_interfaces__msg__Rmplusbase), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rm_ros_interfaces__msg__Rmplusbase__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rm_ros_interfaces__msg__Rmplusbase__fini(&data[i - 1]);
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
rm_ros_interfaces__msg__Rmplusbase__Sequence__fini(rm_ros_interfaces__msg__Rmplusbase__Sequence * array)
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
      rm_ros_interfaces__msg__Rmplusbase__fini(&array->data[i]);
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

rm_ros_interfaces__msg__Rmplusbase__Sequence *
rm_ros_interfaces__msg__Rmplusbase__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rm_ros_interfaces__msg__Rmplusbase__Sequence * array = (rm_ros_interfaces__msg__Rmplusbase__Sequence *)allocator.allocate(sizeof(rm_ros_interfaces__msg__Rmplusbase__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = rm_ros_interfaces__msg__Rmplusbase__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
rm_ros_interfaces__msg__Rmplusbase__Sequence__destroy(rm_ros_interfaces__msg__Rmplusbase__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    rm_ros_interfaces__msg__Rmplusbase__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
rm_ros_interfaces__msg__Rmplusbase__Sequence__are_equal(const rm_ros_interfaces__msg__Rmplusbase__Sequence * lhs, const rm_ros_interfaces__msg__Rmplusbase__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!rm_ros_interfaces__msg__Rmplusbase__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
rm_ros_interfaces__msg__Rmplusbase__Sequence__copy(
  const rm_ros_interfaces__msg__Rmplusbase__Sequence * input,
  rm_ros_interfaces__msg__Rmplusbase__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(rm_ros_interfaces__msg__Rmplusbase);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    rm_ros_interfaces__msg__Rmplusbase * data =
      (rm_ros_interfaces__msg__Rmplusbase *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!rm_ros_interfaces__msg__Rmplusbase__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          rm_ros_interfaces__msg__Rmplusbase__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!rm_ros_interfaces__msg__Rmplusbase__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
