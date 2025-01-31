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
  bundledCode: "#line 2 \"nt/pcnt.hpp\"\n\r\nll isqrt(ll n) {\r\n    ll x=sqrtl(n);\r\
    \n    while(x*x>n)--x;\r\n    return x;\r\n}\r\n__attribute__((target(\"avx2\"\
    ), optimize(\"O3\", \"unroll-loops\")))\r\nll pcnt(const ll N) {\r\n\tif (N <=\
    \ 1) return 0;\r\n\tif (N == 2) return 1;\r\n\tconst int v = isqrt(N);\r\n\tint\
    \ s = (v + 1) / 2;\r\n\tvector<int> smalls(s);\r\n\tfor (int i = 1; i < s; i++)\
    \ smalls[i] = i;\r\n\tvector<int> roughs(s);\r\n\tfor (int i = 0; i < s; i++)\
    \ roughs[i] = 2 * i + 1;\r\n\tvector<ll> larges(s);\r\n\tfor (int i = 0; i < s;\
    \ i++) larges[i] = (N / (2 * i + 1) - 1) / 2;\r\n\tvector<bool> skip(v + 1);\r\
    \n\tconst auto divide = [](ll n, ll d) -> int { return (double)n / d;};\r\n\t\
    const auto half = [](int n) -> int { return (n - 1) >> 1;};\r\n\tint pc = 0;\r\
    \n\tfor (int p = 3; p <= v; p += 2) if (!skip[p]) {\r\n\t\tint q = p * p;\r\n\t\
    \tif ((ll)q * q > N) break;\r\n\t\tskip[p] = true;\r\n\t\tfor (int i = q; i <=\
    \ v; i += 2 * p) skip[i] = true;\r\n\t\tint ns = 0;\r\n\t\tfor (int k = 0; k <\
    \ s; k++) {\r\n\t\t\tint i = roughs[k];\r\n\t\t\tif (skip[i]) continue;\r\n\t\t\
    \tll d = (ll)i * p;\r\n\t\t\tlarges[ns] = larges[k] - (d <= v ? larges[smalls[d\
    \ >> 1] - pc] : smalls[half(divide(N, d))]) + pc;\r\n\t\t\troughs[ns++] = i;\r\
    \n\t\t}\r\n\t\ts = ns;\r\n\t\tfor (int i = half(v), j = ((v / p) - 1) | 1; j >=\
    \ p; j -= 2) {\r\n\t\t\tint c = smalls[j >> 1] - pc;\r\n\t\t\tfor (int e = (j\
    \ * p) >> 1; i >= e; i--) smalls[i] -= c;\r\n\t\t}\r\n\t\tpc++;\r\n\t}\r\n\tlarges[0]\
    \ += (ll)(s + 2 * (pc - 1)) * (s - 1) / 2;\r\n\tfor (int k = 1; k < s; k++) larges[0]\
    \ -= larges[k];\r\n\tfor (int l = 1; l < s; l++) {\r\n\t\tll q = roughs[l];\r\n\
    \t\tll M = N / q;\r\n\t\tint e = smalls[half(M / q)] - pc;\r\n\t\tif (e < l +\
    \ 1) break;\r\n\t\tll t = 0;\r\n\t\tfor (int k = l + 1; k <= e; k++)\r\n\t\t\t\
    t += smalls[half(divide(M, roughs[k]))];\r\n\t\tlarges[0] += t - (ll)(e - l) *\
    \ (pc + l - 1);\r\n\t}\r\n\treturn larges[0] + 1;\r\n}\n"
  code: "#pragma once\r\n\r\nll isqrt(ll n) {\r\n    ll x=sqrtl(n);\r\n    while(x*x>n)--x;\r\
    \n    return x;\r\n}\r\n__attribute__((target(\"avx2\"), optimize(\"O3\", \"unroll-loops\"\
    )))\r\nll pcnt(const ll N) {\r\n\tif (N <= 1) return 0;\r\n\tif (N == 2) return\
    \ 1;\r\n\tconst int v = isqrt(N);\r\n\tint s = (v + 1) / 2;\r\n\tvector<int> smalls(s);\r\
    \n\tfor (int i = 1; i < s; i++) smalls[i] = i;\r\n\tvector<int> roughs(s);\r\n\
    \tfor (int i = 0; i < s; i++) roughs[i] = 2 * i + 1;\r\n\tvector<ll> larges(s);\r\
    \n\tfor (int i = 0; i < s; i++) larges[i] = (N / (2 * i + 1) - 1) / 2;\r\n\tvector<bool>\
    \ skip(v + 1);\r\n\tconst auto divide = [](ll n, ll d) -> int { return (double)n\
    \ / d;};\r\n\tconst auto half = [](int n) -> int { return (n - 1) >> 1;};\r\n\t\
    int pc = 0;\r\n\tfor (int p = 3; p <= v; p += 2) if (!skip[p]) {\r\n\t\tint q\
    \ = p * p;\r\n\t\tif ((ll)q * q > N) break;\r\n\t\tskip[p] = true;\r\n\t\tfor\
    \ (int i = q; i <= v; i += 2 * p) skip[i] = true;\r\n\t\tint ns = 0;\r\n\t\tfor\
    \ (int k = 0; k < s; k++) {\r\n\t\t\tint i = roughs[k];\r\n\t\t\tif (skip[i])\
    \ continue;\r\n\t\t\tll d = (ll)i * p;\r\n\t\t\tlarges[ns] = larges[k] - (d <=\
    \ v ? larges[smalls[d >> 1] - pc] : smalls[half(divide(N, d))]) + pc;\r\n\t\t\t\
    roughs[ns++] = i;\r\n\t\t}\r\n\t\ts = ns;\r\n\t\tfor (int i = half(v), j = ((v\
    \ / p) - 1) | 1; j >= p; j -= 2) {\r\n\t\t\tint c = smalls[j >> 1] - pc;\r\n\t\
    \t\tfor (int e = (j * p) >> 1; i >= e; i--) smalls[i] -= c;\r\n\t\t}\r\n\t\tpc++;\r\
    \n\t}\r\n\tlarges[0] += (ll)(s + 2 * (pc - 1)) * (s - 1) / 2;\r\n\tfor (int k\
    \ = 1; k < s; k++) larges[0] -= larges[k];\r\n\tfor (int l = 1; l < s; l++) {\r\
    \n\t\tll q = roughs[l];\r\n\t\tll M = N / q;\r\n\t\tint e = smalls[half(M / q)]\
    \ - pc;\r\n\t\tif (e < l + 1) break;\r\n\t\tll t = 0;\r\n\t\tfor (int k = l +\
    \ 1; k <= e; k++)\r\n\t\t\tt += smalls[half(divide(M, roughs[k]))];\r\n\t\tlarges[0]\
    \ += t - (ll)(e - l) * (pc + l - 1);\r\n\t}\r\n\treturn larges[0] + 1;\r\n}"
  dependsOn: []
  isVerificationFile: false
  path: nt/pcnt.hpp
  requiredBy: []
  timestamp: '2025-01-31 21:31:14+05:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: nt/pcnt.hpp
layout: document
redirect_from:
- /library/nt/pcnt.hpp
- /library/nt/pcnt.hpp.html
title: nt/pcnt.hpp
---
