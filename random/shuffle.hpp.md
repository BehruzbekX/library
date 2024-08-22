---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: random/base.hpp
    title: random/base.hpp
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':warning:'
  attributes:
    links: []
  bundledCode: "#line 2 \"random/shuffle.hpp\"\n\n#line 2 \"random/base.hpp\"\n\n\
    ULL RNG_64() {\n    static uint64_t x_\n        = uint64_t(chrono::duration_cast<chrono::nanoseconds>(\n\
    \                       chrono::high_resolution_clock::now().time_since_epoch())\n\
    \                       .count())\n          * 10150724397891781847ULL;\n    x_\
    \ ^= x_ << 7;\n    return x_ ^= x_ >> 9;\n}\n\nULL RNG(ULL lim) { return RNG_64()\
    \ % lim; }\n\nLL RNG(LL l, LL r) { return l + RNG_64() % (r - l); }\n#line 4 \"\
    random/shuffle.hpp\"\n\ntemplate<class T>\nvoid shuffle(vi<T> &A){\n    FOR(i,SZ(A)){\n\
    \        int j = RNG(0,i + 1);\n        if(i != j) swap(A[i],A[j]);\n    }\n}\n"
  code: "#pragma once\n\n#include \"random/base.hpp\"\n\ntemplate<class T>\nvoid shuffle(vi<T>\
    \ &A){\n    FOR(i,SZ(A)){\n        int j = RNG(0,i + 1);\n        if(i != j) swap(A[i],A[j]);\n\
    \    }\n}"
  dependsOn:
  - random/base.hpp
  isVerificationFile: false
  path: random/shuffle.hpp
  requiredBy: []
  timestamp: '2024-08-22 22:02:53+05:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: random/shuffle.hpp
layout: document
redirect_from:
- /library/random/shuffle.hpp
- /library/random/shuffle.hpp.html
title: random/shuffle.hpp
---
