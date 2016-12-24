#pragma once

namespace op_count_float {

template <typename T>
class OpCountFloat {
 private:
  T internal_float;

 public:
  OpCountFloat() {}

  explicit operator T() const {}

  OpCountFloat operator+() const {}

  OpCountFloat operator-() const {}

  // TODO: test that this can't return subnormal.
  OpCountFloat& operator++() {}

  OpCountFloat& operator++(int) {}

  // TODO: test that this can't return subnormal.
  OpCountFloat& operator--() {}

  OpCountFloat& operator--(int) {}

  friend const bool operator==(OpCountFloat<T> lhs, OpCountFloat<T> rhs) {}

  friend const bool operator!=(OpCountFloat<T> lhs, OpCountFloat<T> rhs) {}

  friend const bool operator>(OpCountFloat<T> lhs, OpCountFloat<T> rhs) {}

  friend const bool operator<(OpCountFloat<T> lhs, OpCountFloat<T> rhs) {}

  friend const bool operator>=(OpCountFloat<T> lhs, OpCountFloat<T> rhs) {}

  friend const bool operator<=(OpCountFloat<T> lhs, OpCountFloat<T> rhs) {}

  friend const OpCountFloat operator+(OpCountFloat<T> lhs, OpCountFloat<T> rhs) {}

  friend const OpCountFloat operator-(OpCountFloat<T> lhs, OpCountFloat<T> rhs) {}

  friend const OpCountFloat operator*(OpCountFloat<T> lhs, OpCountFloat<T> rhs) {}

  friend const OpCountFloat operator/(OpCountFloat<T> lhs, OpCountFloat<T> rhs) {}

  OpCountFloat& operator+=(OpCountFloat<T> rhs) {}

  OpCountFloat& operator-=(OpCountFloat<T> rhs) {}

  OpCountFloat& operator*=(OpCountFloat<T> rhs) {}

  OpCountFloat& operator/=(OpCountFloat<T> rhs) {}
};
}