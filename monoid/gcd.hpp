#pragma once

template <typename X>
struct Monoid_Gcd {
    using value_type = X;
    static X op(X x, X y) { return __gcd(x, y); }
    static constexpr X unit() { return 0; } 
    static constexpr X inverse(const X& x) { return x; } 
    static constexpr X power(const X& x, ll n) { return x; } 
    static constexpr bool commute = true;  
};