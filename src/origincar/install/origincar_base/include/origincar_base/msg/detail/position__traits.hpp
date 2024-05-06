// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from origincar_base:msg/Position.idl
// generated code does not contain a copyright notice

#ifndef ORIGINCAR_BASE__MSG__DETAIL__POSITION__TRAITS_HPP_
#define ORIGINCAR_BASE__MSG__DETAIL__POSITION__TRAITS_HPP_

#include "origincar_base/msg/detail/position__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<origincar_base::msg::Position>()
{
  return "origincar_base::msg::Position";
}

template<>
inline const char * name<origincar_base::msg::Position>()
{
  return "origincar_base/msg/Position";
}

template<>
struct has_fixed_size<origincar_base::msg::Position>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<origincar_base::msg::Position>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<origincar_base::msg::Position>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ORIGINCAR_BASE__MSG__DETAIL__POSITION__TRAITS_HPP_
