---
data:
  _extendedDependsOn:
  - icon: ':x:'
    path: random/base.hpp
    title: random/base.hpp
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
  bundledCode: "#line 2 \"random/shuffle.hpp\"\n\n#line 2 \"random/base.hpp\"\n\n\
    ULL RNG_64() {\n    static uint64_t x_\n        = uint64_t(chrono::duration_cast<chrono::nanoseconds>(\n\
    \                       chrono::high_resolution_clock::now().time_since_epoch())\n\
    \                       .count())\n          * 10150724397891781847ULL;\n    x_\
    \ ^= x_ << 7;\n    return x_ ^= x_ >> 9;\n}\n\nULL RNG(ULL lim) { return RNG_64()\
    \ % lim; }\n\nLL RNG(LL l, LL r) { return l + RNG_64() % (r - l); }\n#line 4 \"\
    random/shuffle.hpp\"\n\ntemplate<class T>\nvoid shuffle(VI<T>& A){\n    FOR(i,SZ(A)){\n\
    \        int j = RNG(0,i + 1);\n        if(i != j) swap(A[i],A[j]);\n    }\n}\n"
  code: "#pragma once\n\n#include \"random/base.hpp\"\n\ntemplate<class T>\nvoid shuffle(VI<T>&\
    \ A){\n    FOR(i,SZ(A)){\n        int j = RNG(0,i + 1);\n        if(i != j) swap(A[i],A[j]);\n\
    \    }\n}"
  dependsOn:
  - random/base.hpp
  isVerificationFile: false
  path: random/shuffle.hpp
  requiredBy: []
  timestamp: '2024-08-27 11:58:59+05:00'
  verificationStatus: LIBRARY_ALL_WA
  verifiedWith:
  - test/library_checker/aplusb.test.cpp
  - main.test.cpp
documentation_of: random/shuffle.hpp
layout: document
redirect_from:
- /library/random/shuffle.hpp
- /library/random/shuffle.hpp.html
title: random/shuffle.hpp
---
