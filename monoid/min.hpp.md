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
  bundledCode: "#line 2 \"monoid/min.hpp\"\n\ntemplate <typename E>\nstruct Monoid_Min\
    \ {\n    using X = E;\n    using value_type = X;\n    static constexpr X op(const\
    \ X& x, const X& y) noexcept { return std::min(x, y); }\n    static constexpr\
    \ X unit() { return inf<E>; }\n    static constexpr bool commute = true;\n};\n"
  code: "#pragma once\n\ntemplate <typename E>\nstruct Monoid_Min {\n    using X =\
    \ E;\n    using value_type = X;\n    static constexpr X op(const X& x, const X&\
    \ y) noexcept { return std::min(x, y); }\n    static constexpr X unit() { return\
    \ inf<E>; }\n    static constexpr bool commute = true;\n};\n"
  dependsOn: []
  isVerificationFile: false
  path: monoid/min.hpp
  requiredBy: []
  timestamp: '2024-08-27 11:58:59+05:00'
  verificationStatus: LIBRARY_ALL_WA
  verifiedWith:
  - test/library_checker/aplusb.test.cpp
  - main.test.cpp
documentation_of: monoid/min.hpp
layout: document
redirect_from:
- /library/monoid/min.hpp
- /library/monoid/min.hpp.html
title: monoid/min.hpp
---
