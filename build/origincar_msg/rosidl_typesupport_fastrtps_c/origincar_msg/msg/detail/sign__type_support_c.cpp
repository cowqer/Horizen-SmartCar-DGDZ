// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from origincar_msg:msg/Sign.idl
// generated code does not contain a copyright notice
#include "origincar_msg/msg/detail/sign__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "origincar_msg/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "origincar_msg/msg/detail/sign__struct.h"
#include "origincar_msg/msg/detail/sign__functions.h"
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


// forward declare type support functions


using _Sign__ros_msg_type = origincar_msg__msg__Sign;

static bool _Sign__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _Sign__ros_msg_type * ros_message = static_cast<const _Sign__ros_msg_type *>(untyped_ros_message);
  // Field name: sign_data
  {
    cdr << ros_message->sign_data;
  }

  return true;
}

static bool _Sign__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _Sign__ros_msg_type * ros_message = static_cast<_Sign__ros_msg_type *>(untyped_ros_message);
  // Field name: sign_data
  {
    cdr >> ros_message->sign_data;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_origincar_msg
size_t get_serialized_size_origincar_msg__msg__Sign(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Sign__ros_msg_type * ros_message = static_cast<const _Sign__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name sign_data
  {
    size_t item_size = sizeof(ros_message->sign_data);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _Sign__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_origincar_msg__msg__Sign(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_origincar_msg
size_t max_serialized_size_origincar_msg__msg__Sign(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: sign_data
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _Sign__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_origincar_msg__msg__Sign(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_Sign = {
  "origincar_msg::msg",
  "Sign",
  _Sign__cdr_serialize,
  _Sign__cdr_deserialize,
  _Sign__get_serialized_size,
  _Sign__max_serialized_size
};

static rosidl_message_type_support_t _Sign__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Sign,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, origincar_msg, msg, Sign)() {
  return &_Sign__type_support;
}

#if defined(__cplusplus)
}
#endif
