---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':x:'
    path: main.test.cpp
    title: main.test.cpp
  - icon: ':x:'
    path: test/library_checker/aplusb.test.cpp
    title: test/library_checker/aplusb.test.cpp
  _isVerificationFailed: true
  _pathExtension: hpp
  _verificationStatusIcon: ':x:'
  attributes:
    links: []
  bundledCode: "#line 2 \"monoid/gcd.hpp\"\n\ntemplate <typename X>\nstruct Monoid_Gcd\
    \ {\n  using value_type = X;\n  static X op(X x, X y) { return gcd(x, y); }\n\
    \  static constexpr X unit() { return 0; }\n  static constexpr bool commute =\
    \ true;\n};\n"
  code: "#pragma once\n\ntemplate <typename X>\nstruct Monoid_Gcd {\n  using value_type\
    \ = X;\n  static X op(X x, X y) { return gcd(x, y); }\n  static constexpr X unit()\
    \ { return 0; }\n  static constexpr bool commute = true;\n};"
  dependsOn: []
  isVerificationFile: false
  path: monoid/gcd.hpp
  requiredBy: []
  timestamp: '2024-08-27 11:58:59+05:00'
  verificationStatus: LIBRARY_ALL_WA
  verifiedWith:
  - test/library_checker/aplusb.test.cpp
  - main.test.cpp
documentation_of: monoid/gcd.hpp
layout: document
redirect_from:
- /library/monoid/gcd.hpp
- /library/monoid/gcd.hpp.html
title: monoid/gcd.hpp
---
