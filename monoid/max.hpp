#pragma once

template <typename E>
struct Monoid_Max {
  using X = E;
  using value_type = X;
  static constexpr X op(const X &x, const X &y) noexcept { return max(x, y); }
  static constexpr X unit() { return numeric_limits<X>::min(); }
  static constexpr bool commute = true;
  static constexpr X inverse(X& A) noexcept {return A;}
};