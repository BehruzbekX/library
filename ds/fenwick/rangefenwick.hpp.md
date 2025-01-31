---
data:
  _extendedDependsOn:
  - icon: ':warning:'
    path: ds/fenwick/fenwick.hpp
    title: ds/fenwick/fenwick.hpp
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':warning:'
  attributes:
    links: []
  bundledCode: "#line 2 \"ds/fenwick/fenwick.hpp\"\n\r\ntemplate<typename Monoid>\r\
    \nstruct Fenwick {\r\n    using G = Monoid;\r\n    using X = typename Monoid::value_type;\r\
    \n    vector<X> bit;\r\n    int n;\r\n\r\n    Fenwick(int n) {\r\n        this->n\
    \ = n;\r\n        bit.assign(n + 1, G::unit());\r\n    }\r\n\r\n    template <typename\
    \ F>\r\n    Fenwick(int n, F f) : Fenwick(n) {\r\n        for (int i = 1; i <=\
    \ n; ++i) {\r\n            update(i, f(i - 1));  \r\n        }\r\n    }\r\n\r\n\
    \    void update(int idx, X delta) {\r\n        for (int i = idx; i <= n; i +=\
    \ i & -i) {\r\n            bit[i] = G::op(bit[i], delta);\r\n        }\r\n   \
    \ }\r\n\r\n    X get(int r) const {\r\n        X res = G::unit();\r\n        for\
    \ (; r > 0; r -= r & -r) {\r\n            res = G::op(res, bit[r]);\r\n      \
    \  }\r\n        return res;\r\n    }\r\n\r\n    X get(int l, int r) const {\r\n\
    \        return G::op(get(r), G::inverse(get(l - 1)));\r\n    }\r\n};\n#line 3\
    \ \"ds/fenwick/rangefenwick.hpp\"\n\r\ntemplate<typename Monoid>\r\nstruct RFenwick\
    \ {\r\n    using G = Monoid;\r\n    using X = typename Monoid::value_type;\r\n\
    \r\n    Fenwick<Monoid> bit0, bit1;\r\n    int n;\r\n\r\n    RFenwick(int n) :\
    \ bit0(n), bit1(n), n(n) {}\r\n\r\n    RFenwick(vector<X>& A) : RFenwick(A.size())\
    \ {\r\n        for (int i = 0; i < A.size(); ++i) {\r\n            update(i +\
    \ 1, i + 1, A[i]);\r\n        }\r\n    }\r\n\r\n\ttemplate <typename F>\r\n\t\
    RFenwick(int n, F f) : bit0(n), bit1(n), n(n) {\r\n    for(int i = 1; i <= n;\
    \ ++i) {\r\n        update(i, i, f(i - 1));\r\n    }\r\n\t}\r\n\r\n    void update(int\
    \ l, int r, X x) {\r\n        bit0.update(l, G::power(x, 1));        \r\n    \
    \    bit0.update(r + 1, G::inverse(G::power(x, 1))); \r\n        bit1.update(l,\
    \ G::inverse(G::power(x, l - 1))); \r\n        bit1.update(r + 1, G::power(x,\
    \ r));    \r\n    }\r\n\r\n    X get(int r) const {\r\n        X sum0 = bit0.get(r);\r\
    \n        X sum1 = bit1.get(r);\r\n        return G::op(G::power(sum0, r), sum1);\r\
    \n    }\r\n\r\n    X get(int l, int r) const {\r\n        return G::op(get(r),\
    \ G::inverse(get(l - 1)));\r\n    }\r\n};\n"
  code: "#pragma once\r\n#include \"fenwick.hpp\"\r\n\r\ntemplate<typename Monoid>\r\
    \nstruct RFenwick {\r\n    using G = Monoid;\r\n    using X = typename Monoid::value_type;\r\
    \n\r\n    Fenwick<Monoid> bit0, bit1;\r\n    int n;\r\n\r\n    RFenwick(int n)\
    \ : bit0(n), bit1(n), n(n) {}\r\n\r\n    RFenwick(vector<X>& A) : RFenwick(A.size())\
    \ {\r\n        for (int i = 0; i < A.size(); ++i) {\r\n            update(i +\
    \ 1, i + 1, A[i]);\r\n        }\r\n    }\r\n\r\n\ttemplate <typename F>\r\n\t\
    RFenwick(int n, F f) : bit0(n), bit1(n), n(n) {\r\n    for(int i = 1; i <= n;\
    \ ++i) {\r\n        update(i, i, f(i - 1));\r\n    }\r\n\t}\r\n\r\n    void update(int\
    \ l, int r, X x) {\r\n        bit0.update(l, G::power(x, 1));        \r\n    \
    \    bit0.update(r + 1, G::inverse(G::power(x, 1))); \r\n        bit1.update(l,\
    \ G::inverse(G::power(x, l - 1))); \r\n        bit1.update(r + 1, G::power(x,\
    \ r));    \r\n    }\r\n\r\n    X get(int r) const {\r\n        X sum0 = bit0.get(r);\r\
    \n        X sum1 = bit1.get(r);\r\n        return G::op(G::power(sum0, r), sum1);\r\
    \n    }\r\n\r\n    X get(int l, int r) const {\r\n        return G::op(get(r),\
    \ G::inverse(get(l - 1)));\r\n    }\r\n};"
  dependsOn:
  - ds/fenwick/fenwick.hpp
  isVerificationFile: false
  path: ds/fenwick/rangefenwick.hpp
  requiredBy: []
  timestamp: '2025-01-31 21:31:14+05:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: ds/fenwick/rangefenwick.hpp
layout: document
redirect_from:
- /library/ds/fenwick/rangefenwick.hpp
- /library/ds/fenwick/rangefenwick.hpp.html
title: ds/fenwick/rangefenwick.hpp
---
