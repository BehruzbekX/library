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
  bundledCode: "#line 1 \"monoid/xor.hpp\"\ntemplate <typename X>\r\nstruct Monoid_Xor\
    \ {\r\n    using value_type = X;\r\n    static X op(X x, X y) { return x ^ y;\
    \ }\r\n    static constexpr X inverse(const X &x) noexcept { return x; }\r\n \
    \   static constexpr X power(const X &x, ll n) noexcept {\r\n        return (n\
    \ & 1 ? x : 0);\r\n    }\r\n    static constexpr X unit() { return X(0); }\r\n\
    \    static constexpr bool commute = true;\r\n};\n"
  code: "template <typename X>\r\nstruct Monoid_Xor {\r\n    using value_type = X;\r\
    \n    static X op(X x, X y) { return x ^ y; }\r\n    static constexpr X inverse(const\
    \ X &x) noexcept { return x; }\r\n    static constexpr X power(const X &x, ll\
    \ n) noexcept {\r\n        return (n & 1 ? x : 0);\r\n    }\r\n    static constexpr\
    \ X unit() { return X(0); }\r\n    static constexpr bool commute = true;\r\n};"
  dependsOn: []
  isVerificationFile: false
  path: monoid/xor.hpp
  requiredBy: []
  timestamp: '2025-01-31 21:31:14+05:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: monoid/xor.hpp
layout: document
redirect_from:
- /library/monoid/xor.hpp
- /library/monoid/xor.hpp.html
title: monoid/xor.hpp
---
