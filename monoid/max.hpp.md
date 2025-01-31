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
  bundledCode: "#line 2 \"monoid/max.hpp\"\n\r\ntemplate <typename E>\r\nstruct Monoid_Max\
    \ {\r\n  using X = E;\r\n  using value_type = X;\r\n  static constexpr X op(const\
    \ X &x, const X &y) noexcept { return max(x, y); }\r\n  static constexpr X unit()\
    \ { return numeric_limits<X>::min(); }\r\n  static constexpr bool commute = true;\r\
    \n  static constexpr X inverse(X& A) noexcept {return A;}\r\n};\n"
  code: "#pragma once\r\n\r\ntemplate <typename E>\r\nstruct Monoid_Max {\r\n  using\
    \ X = E;\r\n  using value_type = X;\r\n  static constexpr X op(const X &x, const\
    \ X &y) noexcept { return max(x, y); }\r\n  static constexpr X unit() { return\
    \ numeric_limits<X>::min(); }\r\n  static constexpr bool commute = true;\r\n \
    \ static constexpr X inverse(X& A) noexcept {return A;}\r\n};"
  dependsOn: []
  isVerificationFile: false
  path: monoid/max.hpp
  requiredBy: []
  timestamp: '2025-01-31 21:31:14+05:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: monoid/max.hpp
layout: document
redirect_from:
- /library/monoid/max.hpp
- /library/monoid/max.hpp.html
title: monoid/max.hpp
---
