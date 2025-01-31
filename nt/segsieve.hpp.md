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
  bundledCode: "#line 2 \"nt/segsieve.hpp\"\n\n//segmented sieve\ntemplate<typename\
    \ T = int>\nvector<T> primetable(int LIM) {\n    ++LIM;\n    const int S = 32768;\n\
    \    static int done = 2;\n    static vector<T> primes = {2}, sieve(S + 1);\n\n\
    \    if (done < LIM) {\n        done = LIM;\n\n        primes = {2}, sieve.assign(S\
    \ + 1, 0);\n        const int R = LIM / 2;\n        primes.reserve(int(LIM / log(LIM)\
    \ * 1.1));\n        vector<pair<int, int>> cp;\n        for (int i = 3; i <= S;\
    \ i += 2) {\n            if (!sieve[i]) {\n                cp.emplace_back(i,\
    \ i * i / 2);\n                for (int j = i * i; j <= S; j += 2 * i) sieve[j]\
    \ = 1;\n            }\n        }\n        for (int L = 1; L <= R; L += S) {\n\
    \            array<bool, S> block{};\n            for (auto &[p, idx]: cp)\n \
    \               for (int i = idx; i < S + L; idx = (i += p)) block[i - L] = 1;\n\
    \            for (int i = 0; i < min(S, R - L); i++) if (!block[i]) primes.emplace_back((L\
    \ + i) * 2 + 1);\n        }\n    }\n    int k = lower_bound(primes.begin(), primes.end(),\
    \ LIM + 1) - primes.begin();\n    return {primes.begin(), primes.begin() + k};\n\
    }\n"
  code: "#pragma once\n\n//segmented sieve\ntemplate<typename T = int>\nvector<T>\
    \ primetable(int LIM) {\n    ++LIM;\n    const int S = 32768;\n    static int\
    \ done = 2;\n    static vector<T> primes = {2}, sieve(S + 1);\n\n    if (done\
    \ < LIM) {\n        done = LIM;\n\n        primes = {2}, sieve.assign(S + 1, 0);\n\
    \        const int R = LIM / 2;\n        primes.reserve(int(LIM / log(LIM) * 1.1));\n\
    \        vector<pair<int, int>> cp;\n        for (int i = 3; i <= S; i += 2) {\n\
    \            if (!sieve[i]) {\n                cp.emplace_back(i, i * i / 2);\n\
    \                for (int j = i * i; j <= S; j += 2 * i) sieve[j] = 1;\n     \
    \       }\n        }\n        for (int L = 1; L <= R; L += S) {\n            array<bool,\
    \ S> block{};\n            for (auto &[p, idx]: cp)\n                for (int\
    \ i = idx; i < S + L; idx = (i += p)) block[i - L] = 1;\n            for (int\
    \ i = 0; i < min(S, R - L); i++) if (!block[i]) primes.emplace_back((L + i) *\
    \ 2 + 1);\n        }\n    }\n    int k = lower_bound(primes.begin(), primes.end(),\
    \ LIM + 1) - primes.begin();\n    return {primes.begin(), primes.begin() + k};\n\
    }"
  dependsOn: []
  isVerificationFile: false
  path: nt/segsieve.hpp
  requiredBy: []
  timestamp: '2025-01-31 21:31:14+05:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: nt/segsieve.hpp
layout: document
redirect_from:
- /library/nt/segsieve.hpp
- /library/nt/segsieve.hpp.html
title: nt/segsieve.hpp
---
