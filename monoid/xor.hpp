#pragma once

template <typename E>
struct Monoid_Xor {
  using X = E;
  using value_type = X;
  static constexpr X op(const X &x, const X &y) noexcept { return x ^ y; }
  static constexpr X inverse(const X &x) noexcept { return x; }
  static constexpr X unit() { return X(0); }
  static constexpr bool commute = true;
};