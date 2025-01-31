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
  bundledCode: "#line 2 \"monoid/gcd.hpp\"\n\r\ntemplate <typename X>\r\nstruct Monoid_Gcd\
    \ {\r\n    using value_type = X;\r\n    static X op(X x, X y) { return __gcd(x,\
    \ y); }\r\n    static constexpr X unit() { return 0; } \r\n    static constexpr\
    \ X inverse(const X& x) { return x; } \r\n    static constexpr X power(const X&\
    \ x, ll n) { return x; } \r\n    static constexpr bool commute = true;  \r\n};\n"
  code: "#pragma once\r\n\r\ntemplate <typename X>\r\nstruct Monoid_Gcd {\r\n    using\
    \ value_type = X;\r\n    static X op(X x, X y) { return __gcd(x, y); }\r\n   \
    \ static constexpr X unit() { return 0; } \r\n    static constexpr X inverse(const\
    \ X& x) { return x; } \r\n    static constexpr X power(const X& x, ll n) { return\
    \ x; } \r\n    static constexpr bool commute = true;  \r\n};"
  dependsOn: []
  isVerificationFile: false
  path: monoid/gcd.hpp
  requiredBy: []
  timestamp: '2025-01-31 21:31:14+05:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: monoid/gcd.hpp
layout: document
redirect_from:
- /library/monoid/gcd.hpp
- /library/monoid/gcd.hpp.html
title: monoid/gcd.hpp
---
