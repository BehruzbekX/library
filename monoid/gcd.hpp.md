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
  timestamp: '2024-08-30 11:48:08+05:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - test/library_checker/aplusb.test.cpp
documentation_of: monoid/gcd.hpp
layout: document
redirect_from:
- /library/monoid/gcd.hpp
- /library/monoid/gcd.hpp.html
title: monoid/gcd.hpp
---
