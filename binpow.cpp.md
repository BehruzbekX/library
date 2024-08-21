---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: cpp
  _verificationStatusIcon: ':warning:'
  attributes:
    links: []
  bundledCode: "#line 1 \"binpow.cpp\"\nlong long binpow(long long a, long long b,\
    \ long long m) {\n    a %= m;\n    long long res = 1;\n    while (b > 0) {\n \
    \       if (b & 1)\n            res = res * a % m;\n        a = a * a % m;\n \
    \       b >>= 1;\n    }\n    return res;\n}\n"
  code: "long long binpow(long long a, long long b, long long m) {\n    a %= m;\n\
    \    long long res = 1;\n    while (b > 0) {\n        if (b & 1)\n           \
    \ res = res * a % m;\n        a = a * a % m;\n        b >>= 1;\n    }\n    return\
    \ res;\n}"
  dependsOn: []
  isVerificationFile: false
  path: binpow.cpp
  requiredBy: []
  timestamp: '2024-08-20 21:52:12+05:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: binpow.cpp
layout: document
redirect_from:
- /library/binpow.cpp
- /library/binpow.cpp.html
title: binpow.cpp
---
