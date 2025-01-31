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
  bundledCode: "#line 2 \"monoid/min.hpp\"\n\r\ntemplate <typename E>\r\nstruct Monoid_Min\
    \ {\r\n    using X = E;\r\n    using value_type = X;\r\n    static constexpr X\
    \ op(const X& x, const X& y) noexcept { return std::min(x, y); }\r\n    static\
    \ constexpr X unit() { return numeric_limits<X>::max(); }\r\n    static constexpr\
    \ bool commute = true;\r\n};\r\n"
  code: "#pragma once\r\n\r\ntemplate <typename E>\r\nstruct Monoid_Min {\r\n    using\
    \ X = E;\r\n    using value_type = X;\r\n    static constexpr X op(const X& x,\
    \ const X& y) noexcept { return std::min(x, y); }\r\n    static constexpr X unit()\
    \ { return numeric_limits<X>::max(); }\r\n    static constexpr bool commute =\
    \ true;\r\n};\r\n"
  dependsOn: []
  isVerificationFile: false
  path: monoid/min.hpp
  requiredBy: []
  timestamp: '2025-01-31 21:31:14+05:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: monoid/min.hpp
layout: document
redirect_from:
- /library/monoid/min.hpp
- /library/monoid/min.hpp.html
title: monoid/min.hpp
---
