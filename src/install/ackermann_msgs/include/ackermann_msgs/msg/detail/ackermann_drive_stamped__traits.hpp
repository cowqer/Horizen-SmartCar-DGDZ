// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ackermann_msgs:msg/AckermannDriveStamped.idl
// generated code does not contain a copyright notice

#ifndef ACKERMANN_MSGS__MSG__DETAIL__ACKERMANN_DRIVE_STAMPED__TRAITS_HPP_
#define ACKERMANN_MSGS__MSG__DETAIL__ACKERMANN_DRIVE_STAMPED__TRAITS_HPP_

#include "ackermann_msgs/msg/detail/ackermann_drive_stamped__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'drive'
#include "ackermann_msgs/msg/detail/ackermann_drive__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<ackermann_msgs::msg::AckermannDriveStamped>()
{
  return "ackermann_msgs::msg::AckermannDriveStamped";
}

template<>
inline const char * name<ackermann_msgs::msg::AckermannDriveStamped>()
{
  return "ackermann_msgs/msg/AckermannDriveStamped";
}

template<>
struct has_fixed_size<ackermann_msgs::msg::AckermannDriveStamped>
  : std::integral_constant<bool, has_fixed_size<ackermann_msgs::msg::AckermannDrive>::value && has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<ackermann_msgs::msg::AckermannDriveStamped>
  : std::integral_constant<bool, has_bounded_size<ackermann_msgs::msg::AckermannDrive>::value && has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<ackermann_msgs::msg::AckermannDriveStamped>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ACKERMANN_MSGS__MSG__DETAIL__ACKERMANN_DRIVE_STAMPED__TRAITS_HPP_
