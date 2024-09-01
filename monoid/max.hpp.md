---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: test/library_checker/aplusb.test.cpp
    title: test/library_checker/aplusb.test.cpp
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    links: []
  bundledCode: "#line 2 \"monoid/max.hpp\"\n\ntemplate <typename E>\nstruct Monoid_Max\
    \ {\n  using X = E;\n  using value_type = X;\n  static constexpr X op(const X\
    \ &x, const X &y) noexcept { return max(x, y); }\n  static constexpr X unit()\
    \ { return -inf<E>; }\n  static constexpr bool commute = true;\n  static constexpr\
    \ X inverse(X& A) noexcept {return A;}\n  \n};\n"
  code: "#pragma once\n\ntemplate <typename E>\nstruct Monoid_Max {\n  using X = E;\n\
    \  using value_type = X;\n  static constexpr X op(const X &x, const X &y) noexcept\
    \ { return max(x, y); }\n  static constexpr X unit() { return -inf<E>; }\n  static\
    \ constexpr bool commute = true;\n  static constexpr X inverse(X& A) noexcept\
    \ {return A;}\n  \n};"
  dependsOn: []
  isVerificationFile: false
  path: monoid/max.hpp
  requiredBy: []
  timestamp: '2024-09-01 12:11:39+05:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - test/library_checker/aplusb.test.cpp
documentation_of: monoid/max.hpp
layout: document
redirect_from:
- /library/monoid/max.hpp
- /library/monoid/max.hpp.html
title: monoid/max.hpp
---
