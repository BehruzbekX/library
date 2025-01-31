---
data:
  _extendedDependsOn:
  - icon: ':warning:'
    path: random/base.hpp
    title: random/base.hpp
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':warning:'
  attributes:
    links: []
  bundledCode: "#line 2 \"random/shuffle.hpp\"\n\r\n#line 2 \"random/base.hpp\"\n\r\
    \nunsigned long long rng_64() {\r\n    static uint64_t x_\r\n        = uint64_t(chrono::duration_cast<chrono::nanoseconds>(\r\
    \n                       chrono::high_resolution_clock::now().time_since_epoch())\r\
    \n                       .count())\r\n          * 10150724397891781847ULL;\r\n\
    \    x_ ^= x_ << 7;\r\n    return x_ ^= x_ >> 9;\r\n}\r\n\r\nunsigned long long\
    \ rng_64(unsigned long long lim) { return rng_64() % lim; }\r\n\r\nll rng(ll l,\
    \ ll r) { return l + rng_64() % (r - l + 1); }\n#line 4 \"random/shuffle.hpp\"\
    \n\r\ntemplate<class T>\r\nvoid shuffle(vector<T>& A){\r\n    for(int i=0;i<int(A.size());i++){\r\
    \n        int j = rng(0,i);\r\n        if(i != j) swap(A[i],A[j]);\r\n    }\r\n\
    }\r\n"
  code: "#pragma once\r\n\r\n#include \"random/base.hpp\"\r\n\r\ntemplate<class T>\r\
    \nvoid shuffle(vector<T>& A){\r\n    for(int i=0;i<int(A.size());i++){\r\n   \
    \     int j = rng(0,i);\r\n        if(i != j) swap(A[i],A[j]);\r\n    }\r\n}\r\
    \n"
  dependsOn:
  - random/base.hpp
  isVerificationFile: false
  path: random/shuffle.hpp
  requiredBy: []
  timestamp: '2025-01-31 21:31:14+05:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: random/shuffle.hpp
layout: document
redirect_from:
- /library/random/shuffle.hpp
- /library/random/shuffle.hpp.html
title: random/shuffle.hpp
---
