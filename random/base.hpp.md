---
data:
  _extendedDependsOn: []
  _extendedRequiredBy:
  - icon: ':warning:'
    path: random/shuffle.hpp
    title: random/shuffle.hpp
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':warning:'
  attributes:
    links: []
  bundledCode: "#line 2 \"random/base.hpp\"\n\r\nunsigned long long rng_64() {\r\n\
    \    static uint64_t x_\r\n        = uint64_t(chrono::duration_cast<chrono::nanoseconds>(\r\
    \n                       chrono::high_resolution_clock::now().time_since_epoch())\r\
    \n                       .count())\r\n          * 10150724397891781847ULL;\r\n\
    \    x_ ^= x_ << 7;\r\n    return x_ ^= x_ >> 9;\r\n}\r\n\r\nunsigned long long\
    \ rng_64(unsigned long long lim) { return rng_64() % lim; }\r\n\r\nll rng(ll l,\
    \ ll r) { return l + rng_64() % (r - l + 1); }\n"
  code: "#pragma once\r\n\r\nunsigned long long rng_64() {\r\n    static uint64_t\
    \ x_\r\n        = uint64_t(chrono::duration_cast<chrono::nanoseconds>(\r\n   \
    \                    chrono::high_resolution_clock::now().time_since_epoch())\r\
    \n                       .count())\r\n          * 10150724397891781847ULL;\r\n\
    \    x_ ^= x_ << 7;\r\n    return x_ ^= x_ >> 9;\r\n}\r\n\r\nunsigned long long\
    \ rng_64(unsigned long long lim) { return rng_64() % lim; }\r\n\r\nll rng(ll l,\
    \ ll r) { return l + rng_64() % (r - l + 1); }"
  dependsOn: []
  isVerificationFile: false
  path: random/base.hpp
  requiredBy:
  - random/shuffle.hpp
  timestamp: '2025-01-31 21:31:14+05:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: random/base.hpp
layout: document
redirect_from:
- /library/random/base.hpp
- /library/random/base.hpp.html
title: random/base.hpp
---
