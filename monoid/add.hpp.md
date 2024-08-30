---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: test/library_checker/aplusb.test.cpp
    title: test/library_checker/aplusb.test.cpp
  - icon: ':heavy_check_mark:'
    path: test/mytest/fenwickraq.test.cpp
    title: test/mytest/fenwickraq.test.cpp
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    links: []
  bundledCode: "#line 2 \"monoid/add.hpp\"\n\ntemplate <typename E>\nstruct Monoid_Add\
    \ {\n  using X = E;\n  using value_type = X;\n  static constexpr X op(const X\
    \ &x, const X &y) noexcept { return x + y; }\n  static constexpr X inverse(const\
    \ X &x) noexcept { return -x; }\n  static constexpr X power(const X &x, LL n)\
    \ noexcept { return X(n) * x; }\n  static constexpr X unit() { return X(0); }\n\
    \  static constexpr bool commute = true;\n};\n"
  code: "#pragma once\n\ntemplate <typename E>\nstruct Monoid_Add {\n  using X = E;\n\
    \  using value_type = X;\n  static constexpr X op(const X &x, const X &y) noexcept\
    \ { return x + y; }\n  static constexpr X inverse(const X &x) noexcept { return\
    \ -x; }\n  static constexpr X power(const X &x, LL n) noexcept { return X(n) *\
    \ x; }\n  static constexpr X unit() { return X(0); }\n  static constexpr bool\
    \ commute = true;\n};"
  dependsOn: []
  isVerificationFile: false
  path: monoid/add.hpp
  requiredBy: []
  timestamp: '2024-08-30 11:48:08+05:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - test/mytest/fenwickraq.test.cpp
  - test/library_checker/aplusb.test.cpp
documentation_of: monoid/add.hpp
layout: document
redirect_from:
- /library/monoid/add.hpp
- /library/monoid/add.hpp.html
title: monoid/add.hpp
---
