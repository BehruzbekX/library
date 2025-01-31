---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':warning:'
  attributes:
    links: []
  bundledCode: "#line 2 \"monoid/add.hpp\"\n\r\ntemplate <typename E>\r\nstruct Monoid_Add\
    \ {\r\n  using X = E;\r\n  using value_type = X;\r\n  static constexpr X op(const\
    \ X &x, const X &y) noexcept { return x + y; }\r\n  static constexpr X inverse(const\
    \ X &x) noexcept { return -x; }\r\n  static constexpr X power(const X &x, ll n)\
    \ noexcept { return X(n) * x; }\r\n  static constexpr X unit() { return X(0);\
    \ }\r\n  static constexpr bool commute = true;\r\n};\n"
  code: "#pragma once\r\n\r\ntemplate <typename E>\r\nstruct Monoid_Add {\r\n  using\
    \ X = E;\r\n  using value_type = X;\r\n  static constexpr X op(const X &x, const\
    \ X &y) noexcept { return x + y; }\r\n  static constexpr X inverse(const X &x)\
    \ noexcept { return -x; }\r\n  static constexpr X power(const X &x, ll n) noexcept\
    \ { return X(n) * x; }\r\n  static constexpr X unit() { return X(0); }\r\n  static\
    \ constexpr bool commute = true;\r\n};"
  dependsOn: []
  isVerificationFile: false
  path: monoid/add.hpp
  requiredBy: []
  timestamp: '2025-01-31 21:31:14+05:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: monoid/add.hpp
layout: document
redirect_from:
- /library/monoid/add.hpp
- /library/monoid/add.hpp.html
title: monoid/add.hpp
---
