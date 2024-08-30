---
data:
  _extendedDependsOn: []
  _extendedRequiredBy:
  - icon: ':heavy_check_mark:'
    path: random/shuffle.hpp
    title: random/shuffle.hpp
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: test/library_checker/aplusb.test.cpp
    title: test/library_checker/aplusb.test.cpp
  - icon: ':heavy_check_mark:'
    path: test/mytest/fenwickraq.test.cpp
    title: test/mytest/fenwickraq.test.cpp
  - icon: ':heavy_check_mark:'
    path: test/mytest/issubstring.test.cpp
    title: test/mytest/issubstring.test.cpp
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    links: []
  bundledCode: "#line 2 \"random/base.hpp\"\n\nULL RNG_64() {\n    static uint64_t\
    \ x_\n        = uint64_t(chrono::duration_cast<chrono::nanoseconds>(\n       \
    \                chrono::high_resolution_clock::now().time_since_epoch())\n  \
    \                     .count())\n          * 10150724397891781847ULL;\n    x_\
    \ ^= x_ << 7;\n    return x_ ^= x_ >> 9;\n}\n\nULL RNG(ULL lim) { return RNG_64()\
    \ % lim; }\n\nLL RNG(LL l, LL r) { return l + RNG_64() % (r - l); }\n"
  code: "#pragma once\n\nULL RNG_64() {\n    static uint64_t x_\n        = uint64_t(chrono::duration_cast<chrono::nanoseconds>(\n\
    \                       chrono::high_resolution_clock::now().time_since_epoch())\n\
    \                       .count())\n          * 10150724397891781847ULL;\n    x_\
    \ ^= x_ << 7;\n    return x_ ^= x_ >> 9;\n}\n\nULL RNG(ULL lim) { return RNG_64()\
    \ % lim; }\n\nLL RNG(LL l, LL r) { return l + RNG_64() % (r - l); }"
  dependsOn: []
  isVerificationFile: false
  path: random/base.hpp
  requiredBy:
  - random/shuffle.hpp
  timestamp: '2024-08-30 11:48:08+05:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - test/mytest/fenwickraq.test.cpp
  - test/mytest/issubstring.test.cpp
  - test/library_checker/aplusb.test.cpp
documentation_of: random/base.hpp
layout: document
redirect_from:
- /library/random/base.hpp
- /library/random/base.hpp.html
title: random/base.hpp
---