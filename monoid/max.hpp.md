---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':x:'
    path: main.test.cpp
    title: main.test.cpp
  - icon: ':heavy_check_mark:'
    path: test/library_checker/aplusb.test.cpp
    title: test/library_checker/aplusb.test.cpp
  _isVerificationFailed: true
  _pathExtension: hpp
  _verificationStatusIcon: ':question:'
  attributes:
    links: []
  bundledCode: "#line 2 \"monoid/max.hpp\"\n\ntemplate <typename E>\nstruct Monoid_Max\
    \ {\n  using X = E;\n  using value_type = X;\n  static constexpr X op(const X\
    \ &x, const X &y) noexcept { return max(x, y); }\n  static constexpr X unit()\
    \ { return -inf<E>; }\n  static constexpr bool commute = true;\n};\n"
  code: "#pragma once\n\ntemplate <typename E>\nstruct Monoid_Max {\n  using X = E;\n\
    \  using value_type = X;\n  static constexpr X op(const X &x, const X &y) noexcept\
    \ { return max(x, y); }\n  static constexpr X unit() { return -inf<E>; }\n  static\
    \ constexpr bool commute = true;\n};"
  dependsOn: []
  isVerificationFile: false
  path: monoid/max.hpp
  requiredBy: []
  timestamp: '2024-08-27 13:49:27+05:00'
  verificationStatus: LIBRARY_SOME_WA
  verifiedWith:
  - test/library_checker/aplusb.test.cpp
  - main.test.cpp
documentation_of: monoid/max.hpp
layout: document
redirect_from:
- /library/monoid/max.hpp
- /library/monoid/max.hpp.html
title: monoid/max.hpp
---
