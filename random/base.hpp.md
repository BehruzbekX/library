---
data:
  _extendedDependsOn: []
  _extendedRequiredBy:
  - icon: ':question:'
    path: random/shuffle.hpp
    title: random/shuffle.hpp
  - icon: ':warning:'
    path: test/my_test/gen.cpp
    title: test/my_test/gen.cpp
  _extendedVerifiedWith:
  - icon: ':x:'
    path: main.test.cpp
    title: main.test.cpp
  - icon: ':heavy_check_mark:'
    path: test/library_checker/aplusb.test.cpp
    title: test/library_checker/aplusb.test.cpp
  _isVerificationFailed: true
  _pathExtension: hpp
  _verificationStatusIcon: ':question:'
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
  - test/my_test/gen.cpp
  - random/shuffle.hpp
  timestamp: '2024-08-27 13:49:27+05:00'
  verificationStatus: LIBRARY_SOME_WA
  verifiedWith:
  - test/library_checker/aplusb.test.cpp
  - main.test.cpp
documentation_of: random/base.hpp
layout: document
redirect_from:
- /library/random/base.hpp
- /library/random/base.hpp.html
title: random/base.hpp
---
