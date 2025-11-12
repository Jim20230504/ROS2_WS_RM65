// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from rm_ros_interfaces:msg/Armsoftversion.idl
// generated code does not contain a copyright notice
#include "rm_ros_interfaces/msg/detail/armsoftversion__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `product_version`
// Member `controller_version`
// Member `algorithm_info`
// Member `dynamic_info`
// Member `planversion`
// Member `ctrlversion`
// Member `kernal1`
// Member `kernal2`
// Member `productversion`
#include "rosidl_runtime_c/string_functions.h"
// Member `ctrl_info`
// Member `plan_info`
// Member `com_info`
// Member `program_info`
#include "rm_ros_interfaces/msg/detail/softwarebuildinfo__functions.h"

bool
rm_ros_interfaces__msg__Armsoftversion__init(rm_ros_interfaces__msg__Armsoftversion * msg)
{
  if (!msg) {
    return false;
  }
  // product_version
  if (!rosidl_runtime_c__String__init(&msg->product_version)) {
    rm_ros_interfaces__msg__Armsoftversion__fini(msg);
    return false;
  }
  // controller_version
  if (!rosidl_runtime_c__String__init(&msg->controller_version)) {
    rm_ros_interfaces__msg__Armsoftversion__fini(msg);
    return false;
  }
  // algorithm_info
  if (!rosidl_runtime_c__String__init(&msg->algorithm_info)) {
    rm_ros_interfaces__msg__Armsoftversion__fini(msg);
    return false;
  }
  // ctrl_info
  if (!rm_ros_interfaces__msg__Softwarebuildinfo__init(&msg->ctrl_info)) {
    rm_ros_interfaces__msg__Armsoftversion__fini(msg);
    return false;
  }
  // dynamic_info
  if (!rosidl_runtime_c__String__init(&msg->dynamic_info)) {
    rm_ros_interfaces__msg__Armsoftversion__fini(msg);
    return false;
  }
  // plan_info
  if (!rm_ros_interfaces__msg__Softwarebuildinfo__init(&msg->plan_info)) {
    rm_ros_interfaces__msg__Armsoftversion__fini(msg);
    return false;
  }
  // com_info
  if (!rm_ros_interfaces__msg__Softwarebuildinfo__init(&msg->com_info)) {
    rm_ros_interfaces__msg__Armsoftversion__fini(msg);
    return false;
  }
  // program_info
  if (!rm_ros_interfaces__msg__Softwarebuildinfo__init(&msg->program_info)) {
    rm_ros_interfaces__msg__Armsoftversion__fini(msg);
    return false;
  }
  // state
  // planversion
  if (!rosidl_runtime_c__String__init(&msg->planversion)) {
    rm_ros_interfaces__msg__Armsoftversion__fini(msg);
    return false;
  }
  // ctrlversion
  if (!rosidl_runtime_c__String__init(&msg->ctrlversion)) {
    rm_ros_interfaces__msg__Armsoftversion__fini(msg);
    return false;
  }
  // kernal1
  if (!rosidl_runtime_c__String__init(&msg->kernal1)) {
    rm_ros_interfaces__msg__Armsoftversion__fini(msg);
    return false;
  }
  // kernal2
  if (!rosidl_runtime_c__String__init(&msg->kernal2)) {
    rm_ros_interfaces__msg__Armsoftversion__fini(msg);
    return false;
  }
  // productversion
  if (!rosidl_runtime_c__String__init(&msg->productversion)) {
    rm_ros_interfaces__msg__Armsoftversion__fini(msg);
    return false;
  }
  return true;
}

void
rm_ros_interfaces__msg__Armsoftversion__fini(rm_ros_interfaces__msg__Armsoftversion * msg)
{
  if (!msg) {
    return;
  }
  // product_version
  rosidl_runtime_c__String__fini(&msg->product_version);
  // controller_version
  rosidl_runtime_c__String__fini(&msg->controller_version);
  // algorithm_info
  rosidl_runtime_c__String__fini(&msg->algorithm_info);
  // ctrl_info
  rm_ros_interfaces__msg__Softwarebuildinfo__fini(&msg->ctrl_info);
  // dynamic_info
  rosidl_runtime_c__String__fini(&msg->dynamic_info);
  // plan_info
  rm_ros_interfaces__msg__Softwarebuildinfo__fini(&msg->plan_info);
  // com_info
  rm_ros_interfaces__msg__Softwarebuildinfo__fini(&msg->com_info);
  // program_info
  rm_ros_interfaces__msg__Softwarebuildinfo__fini(&msg->program_info);
  // state
  // planversion
  rosidl_runtime_c__String__fini(&msg->planversion);
  // ctrlversion
  rosidl_runtime_c__String__fini(&msg->ctrlversion);
  // kernal1
  rosidl_runtime_c__String__fini(&msg->kernal1);
  // kernal2
  rosidl_runtime_c__String__fini(&msg->kernal2);
  // productversion
  rosidl_runtime_c__String__fini(&msg->productversion);
}

bool
rm_ros_interfaces__msg__Armsoftversion__are_equal(const rm_ros_interfaces__msg__Armsoftversion * lhs, const rm_ros_interfaces__msg__Armsoftversion * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // product_version
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->product_version), &(rhs->product_version)))
  {
    return false;
  }
  // controller_version
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->controller_version), &(rhs->controller_version)))
  {
    return false;
  }
  // algorithm_info
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->algorithm_info), &(rhs->algorithm_info)))
  {
    return false;
  }
  // ctrl_info
  if (!rm_ros_interfaces__msg__Softwarebuildinfo__are_equal(
      &(lhs->ctrl_info), &(rhs->ctrl_info)))
  {
    return false;
  }
  // dynamic_info
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->dynamic_info), &(rhs->dynamic_info)))
  {
    return false;
  }
  // plan_info
  if (!rm_ros_interfaces__msg__Softwarebuildinfo__are_equal(
      &(lhs->plan_info), &(rhs->plan_info)))
  {
    return false;
  }
  // com_info
  if (!rm_ros_interfaces__msg__Softwarebuildinfo__are_equal(
      &(lhs->com_info), &(rhs->com_info)))
  {
    return false;
  }
  // program_info
  if (!rm_ros_interfaces__msg__Softwarebuildinfo__are_equal(
      &(lhs->program_info), &(rhs->program_info)))
  {
    return false;
  }
  // state
  if (lhs->state != rhs->state) {
    return false;
  }
  // planversion
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->planversion), &(rhs->planversion)))
  {
    return false;
  }
  // ctrlversion
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->ctrlversion), &(rhs->ctrlversion)))
  {
    return false;
  }
  // kernal1
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->kernal1), &(rhs->kernal1)))
  {
    return false;
  }
  // kernal2
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->kernal2), &(rhs->kernal2)))
  {
    return false;
  }
  // productversion
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->productversion), &(rhs->productversion)))
  {
    return false;
  }
  return true;
}

bool
rm_ros_interfaces__msg__Armsoftversion__copy(
  const rm_ros_interfaces__msg__Armsoftversion * input,
  rm_ros_interfaces__msg__Armsoftversion * output)
{
  if (!input || !output) {
    return false;
  }
  // product_version
  if (!rosidl_runtime_c__String__copy(
      &(input->product_version), &(output->product_version)))
  {
    return false;
  }
  // controller_version
  if (!rosidl_runtime_c__String__copy(
      &(input->controller_version), &(output->controller_version)))
  {
    return false;
  }
  // algorithm_info
  if (!rosidl_runtime_c__String__copy(
      &(input->algorithm_info), &(output->algorithm_info)))
  {
    return false;
  }
  // ctrl_info
  if (!rm_ros_interfaces__msg__Softwarebuildinfo__copy(
      &(input->ctrl_info), &(output->ctrl_info)))
  {
    return false;
  }
  // dynamic_info
  if (!rosidl_runtime_c__String__copy(
      &(input->dynamic_info), &(output->dynamic_info)))
  {
    return false;
  }
  // plan_info
  if (!rm_ros_interfaces__msg__Softwarebuildinfo__copy(
      &(input->plan_info), &(output->plan_info)))
  {
    return false;
  }
  // com_info
  if (!rm_ros_interfaces__msg__Softwarebuildinfo__copy(
      &(input->com_info), &(output->com_info)))
  {
    return false;
  }
  // program_info
  if (!rm_ros_interfaces__msg__Softwarebuildinfo__copy(
      &(input->program_info), &(output->program_info)))
  {
    return false;
  }
  // state
  output->state = input->state;
  // planversion
  if (!rosidl_runtime_c__String__copy(
      &(input->planversion), &(output->planversion)))
  {
    return false;
  }
  // ctrlversion
  if (!rosidl_runtime_c__String__copy(
      &(input->ctrlversion), &(output->ctrlversion)))
  {
    return false;
  }
  // kernal1
  if (!rosidl_runtime_c__String__copy(
      &(input->kernal1), &(output->kernal1)))
  {
    return false;
  }
  // kernal2
  if (!rosidl_runtime_c__String__copy(
      &(input->kernal2), &(output->kernal2)))
  {
    return false;
  }
  // productversion
  if (!rosidl_runtime_c__String__copy(
      &(input->productversion), &(output->productversion)))
  {
    return false;
  }
  return true;
}

rm_ros_interfaces__msg__Armsoftversion *
rm_ros_interfaces__msg__Armsoftversion__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rm_ros_interfaces__msg__Armsoftversion * msg = (rm_ros_interfaces__msg__Armsoftversion *)allocator.allocate(sizeof(rm_ros_interfaces__msg__Armsoftversion), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rm_ros_interfaces__msg__Armsoftversion));
  bool success = rm_ros_interfaces__msg__Armsoftversion__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
rm_ros_interfaces__msg__Armsoftversion__destroy(rm_ros_interfaces__msg__Armsoftversion * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    rm_ros_interfaces__msg__Armsoftversion__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
rm_ros_interfaces__msg__Armsoftversion__Sequence__init(rm_ros_interfaces__msg__Armsoftversion__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rm_ros_interfaces__msg__Armsoftversion * data = NULL;

  if (size) {
    data = (rm_ros_interfaces__msg__Armsoftversion *)allocator.zero_allocate(size, sizeof(rm_ros_interfaces__msg__Armsoftversion), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rm_ros_interfaces__msg__Armsoftversion__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rm_ros_interfaces__msg__Armsoftversion__fini(&data[i - 1]);
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
rm_ros_interfaces__msg__Armsoftversion__Sequence__fini(rm_ros_interfaces__msg__Armsoftversion__Sequence * array)
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
      rm_ros_interfaces__msg__Armsoftversion__fini(&array->data[i]);
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

rm_ros_interfaces__msg__Armsoftversion__Sequence *
rm_ros_interfaces__msg__Armsoftversion__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rm_ros_interfaces__msg__Armsoftversion__Sequence * array = (rm_ros_interfaces__msg__Armsoftversion__Sequence *)allocator.allocate(sizeof(rm_ros_interfaces__msg__Armsoftversion__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = rm_ros_interfaces__msg__Armsoftversion__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
rm_ros_interfaces__msg__Armsoftversion__Sequence__destroy(rm_ros_interfaces__msg__Armsoftversion__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    rm_ros_interfaces__msg__Armsoftversion__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
rm_ros_interfaces__msg__Armsoftversion__Sequence__are_equal(const rm_ros_interfaces__msg__Armsoftversion__Sequence * lhs, const rm_ros_interfaces__msg__Armsoftversion__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!rm_ros_interfaces__msg__Armsoftversion__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
rm_ros_interfaces__msg__Armsoftversion__Sequence__copy(
  const rm_ros_interfaces__msg__Armsoftversion__Sequence * input,
  rm_ros_interfaces__msg__Armsoftversion__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(rm_ros_interfaces__msg__Armsoftversion);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    rm_ros_interfaces__msg__Armsoftversion * data =
      (rm_ros_interfaces__msg__Armsoftversion *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!rm_ros_interfaces__msg__Armsoftversion__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          rm_ros_interfaces__msg__Armsoftversion__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!rm_ros_interfaces__msg__Armsoftversion__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
