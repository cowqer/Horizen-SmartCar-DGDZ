// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from ackermann_msgs:msg/AckermannDriveStamped.idl
// generated code does not contain a copyright notice
#include "ackermann_msgs/msg/detail/ackermann_drive_stamped__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "ackermann_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "ackermann_msgs/msg/detail/ackermann_drive_stamped__struct.h"
#include "ackermann_msgs/msg/detail/ackermann_drive_stamped__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "ackermann_msgs/msg/detail/ackermann_drive__functions.h"  // drive
#include "std_msgs/msg/detail/header__functions.h"  // header

// forward declare type support functions
size_t get_serialized_size_ackermann_msgs__msg__AckermannDrive(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_ackermann_msgs__msg__AckermannDrive(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ackermann_msgs, msg, AckermannDrive)();
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_ackermann_msgs
size_t get_serialized_size_std_msgs__msg__Header(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_ackermann_msgs
size_t max_serialized_size_std_msgs__msg__Header(
  bool & full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_ackermann_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, std_msgs, msg, Header)();


using _AckermannDriveStamped__ros_msg_type = ackermann_msgs__msg__AckermannDriveStamped;

static bool _AckermannDriveStamped__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _AckermannDriveStamped__ros_msg_type * ros_message = static_cast<const _AckermannDriveStamped__ros_msg_type *>(untyped_ros_message);
  // Field name: header
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, Header
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->header, cdr))
    {
      return false;
    }
  }

  // Field name: drive
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, ackermann_msgs, msg, AckermannDrive
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->drive, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _AckermannDriveStamped__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _AckermannDriveStamped__ros_msg_type * ros_message = static_cast<_AckermannDriveStamped__ros_msg_type *>(untyped_ros_message);
  // Field name: header
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, Header
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->header))
    {
      return false;
    }
  }

  // Field name: drive
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, ackermann_msgs, msg, AckermannDrive
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->drive))
    {
      return false;
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ackermann_msgs
size_t get_serialized_size_ackermann_msgs__msg__AckermannDriveStamped(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _AckermannDriveStamped__ros_msg_type * ros_message = static_cast<const _AckermannDriveStamped__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name header

  current_alignment += get_serialized_size_std_msgs__msg__Header(
    &(ros_message->header), current_alignment);
  // field.name drive

  current_alignment += get_serialized_size_ackermann_msgs__msg__AckermannDrive(
    &(ros_message->drive), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _AckermannDriveStamped__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_ackermann_msgs__msg__AckermannDriveStamped(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ackermann_msgs
size_t max_serialized_size_ackermann_msgs__msg__AckermannDriveStamped(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: header
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_std_msgs__msg__Header(
        full_bounded, current_alignment);
    }
  }
  // member: drive
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_ackermann_msgs__msg__AckermannDrive(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _AckermannDriveStamped__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_ackermann_msgs__msg__AckermannDriveStamped(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_AckermannDriveStamped = {
  "ackermann_msgs::msg",
  "AckermannDriveStamped",
  _AckermannDriveStamped__cdr_serialize,
  _AckermannDriveStamped__cdr_deserialize,
  _AckermannDriveStamped__get_serialized_size,
  _AckermannDriveStamped__max_serialized_size
};

static rosidl_message_type_support_t _AckermannDriveStamped__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_AckermannDriveStamped,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ackermann_msgs, msg, AckermannDriveStamped)() {
  return &_AckermannDriveStamped__type_support;
}

#if defined(__cplusplus)
}
#endif
