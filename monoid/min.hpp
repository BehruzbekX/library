#pragma once

template <typename E>
struct Monoid_Min {
    using X = E;
    using value_type = X;
    static constexpr X op(const X& x, const X& y) noexcept { return std::min(x, y); }
    static constexpr X unit() { return numeric_limits<X>::max(); }
    static constexpr bool commute = true;
};
