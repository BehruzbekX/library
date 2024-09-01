---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: test/library_checker/aplusb.test.cpp
    title: test/library_checker/aplusb.test.cpp
  - icon: ':heavy_check_mark:'
    path: test/mytest/fenwickxor.test.cpp
    title: test/mytest/fenwickxor.test.cpp
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    links: []
  bundledCode: "#line 1 \"monoid/xor.hpp\"\ntemplate <typename X>\nstruct Monoid_Xor\
    \ {\n    using value_type = X;\n    static X op(X x, X y) { return x ^ y; }\n\
    \    static constexpr X inverse(const X &x) noexcept { return x; }\n    static\
    \ constexpr X power(const X &x, ll n) noexcept {\n        return (n & 1 ? x :\
    \ 0);\n    }\n    static constexpr X unit() { return X(0); }\n    static constexpr\
    \ bool commute = true;\n};\n"
  code: "template <typename X>\nstruct Monoid_Xor {\n    using value_type = X;\n \
    \   static X op(X x, X y) { return x ^ y; }\n    static constexpr X inverse(const\
    \ X &x) noexcept { return x; }\n    static constexpr X power(const X &x, ll n)\
    \ noexcept {\n        return (n & 1 ? x : 0);\n    }\n    static constexpr X unit()\
    \ { return X(0); }\n    static constexpr bool commute = true;\n};"
  dependsOn: []
  isVerificationFile: false
  path: monoid/xor.hpp
  requiredBy: []
  timestamp: '2024-09-01 12:11:39+05:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - test/mytest/fenwickxor.test.cpp
  - test/library_checker/aplusb.test.cpp
documentation_of: monoid/xor.hpp
layout: document
redirect_from:
- /library/monoid/xor.hpp
- /library/monoid/xor.hpp.html
title: monoid/xor.hpp
---
