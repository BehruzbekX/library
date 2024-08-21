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
  bundledCode: "#line 1 \"miller.cpp\"\nlong long binpow(long long a, long long b,\
    \ long long m) {\n    a %= m;\n    long long res = 1;\n    while (b > 0) {\n \
    \       if (b & 1)\n            res = res * a % m;\n        a = a * a % m;\n \
    \       b >>= 1;\n    }\n    return res;\n}\nbool miillerTest(int d, int n)\n\
    {\n    int a = 2 + rand() % (n - 4);\n    int x = binpow(a, d, n);\n\n    if (x\
    \ == 1  || x == n-1)\n        return true;\n    while (d != n-1)\n    {\n    \
    \    x = (x * x) % n;\n        d *= 2;\n\n        if (x == 1)      return false;\n\
    \        if (x == n-1)    return true;\n    }\n\n    return false;\n}\nbool isp(int\
    \ n, int k)\n{if (n <= 1 || n == 4)  return false;\n    if (n <= 3) return true;\n\
    \    int d = n - 1;\n    while (d % 2 == 0)\n        d /= 2;\n    for (int i =\
    \ 0; i < k; i++)\n        if (!miillerTest(d, n))\n            return false;\n\
    \    return true;\n}\n"
  code: "long long binpow(long long a, long long b, long long m) {\n    a %= m;\n\
    \    long long res = 1;\n    while (b > 0) {\n        if (b & 1)\n           \
    \ res = res * a % m;\n        a = a * a % m;\n        b >>= 1;\n    }\n    return\
    \ res;\n}\nbool miillerTest(int d, int n)\n{\n    int a = 2 + rand() % (n - 4);\n\
    \    int x = binpow(a, d, n);\n\n    if (x == 1  || x == n-1)\n        return\
    \ true;\n    while (d != n-1)\n    {\n        x = (x * x) % n;\n        d *= 2;\n\
    \n        if (x == 1)      return false;\n        if (x == n-1)    return true;\n\
    \    }\n\n    return false;\n}\nbool isp(int n, int k)\n{if (n <= 1 || n == 4)\
    \  return false;\n    if (n <= 3) return true;\n    int d = n - 1;\n    while\
    \ (d % 2 == 0)\n        d /= 2;\n    for (int i = 0; i < k; i++)\n        if (!miillerTest(d,\
    \ n))\n            return false;\n    return true;\n}"
  dependsOn: []
  isVerificationFile: false
  path: miller.cpp
  requiredBy: []
  timestamp: '2024-08-20 21:52:12+05:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: miller.cpp
layout: document
redirect_from:
- /library/miller.cpp
- /library/miller.cpp.html
title: miller.cpp
---
