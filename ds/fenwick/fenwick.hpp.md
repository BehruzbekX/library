---
data:
  _extendedDependsOn: []
  _extendedRequiredBy:
  - icon: ':warning:'
    path: ds/fenwick/rangefenwick.hpp
    title: ds/fenwick/rangefenwick.hpp
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
    \        return G::op(get(r), G::inverse(get(l - 1)));\r\n    }\r\n};\n"
  code: "#pragma once\r\n\r\ntemplate<typename Monoid>\r\nstruct Fenwick {\r\n   \
    \ using G = Monoid;\r\n    using X = typename Monoid::value_type;\r\n    vector<X>\
    \ bit;\r\n    int n;\r\n\r\n    Fenwick(int n) {\r\n        this->n = n;\r\n \
    \       bit.assign(n + 1, G::unit());\r\n    }\r\n\r\n    template <typename F>\r\
    \n    Fenwick(int n, F f) : Fenwick(n) {\r\n        for (int i = 1; i <= n; ++i)\
    \ {\r\n            update(i, f(i - 1));  \r\n        }\r\n    }\r\n\r\n    void\
    \ update(int idx, X delta) {\r\n        for (int i = idx; i <= n; i += i & -i)\
    \ {\r\n            bit[i] = G::op(bit[i], delta);\r\n        }\r\n    }\r\n\r\n\
    \    X get(int r) const {\r\n        X res = G::unit();\r\n        for (; r >\
    \ 0; r -= r & -r) {\r\n            res = G::op(res, bit[r]);\r\n        }\r\n\
    \        return res;\r\n    }\r\n\r\n    X get(int l, int r) const {\r\n     \
    \   return G::op(get(r), G::inverse(get(l - 1)));\r\n    }\r\n};"
  dependsOn: []
  isVerificationFile: false
  path: ds/fenwick/fenwick.hpp
  requiredBy:
  - ds/fenwick/rangefenwick.hpp
  timestamp: '2025-01-31 21:31:14+05:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: ds/fenwick/fenwick.hpp
layout: document
redirect_from:
- /library/ds/fenwick/fenwick.hpp
- /library/ds/fenwick/fenwick.hpp.html
title: ds/fenwick/fenwick.hpp
---
