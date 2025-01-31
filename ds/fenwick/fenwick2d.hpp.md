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
  bundledCode: "#line 2 \"ds/fenwick/fenwick2d.hpp\"\n\r\ntemplate<typename Monoid>\r\
    \nstruct Fenwick2D {\r\n    using G = Monoid;\r\n    using X = typename Monoid::value_type;\r\
    \n    vector<vector<X>> bit;\r\n    int rows, cols;\r\n\r\n    Fenwick2D(int rows,\
    \ int cols) : rows(rows), cols(cols) {\r\n        bit.assign(rows + 1, vector<X>(cols\
    \ + 1, G::unit()));\r\n    }\r\n\r\n    template <typename F>\r\n    Fenwick2D(int\
    \ rows, int cols, F f) : Fenwick2D(rows, cols) {\r\n        for (int r = 1; r\
    \ <= rows; ++r) {\r\n            for (int c = 1; c <= cols; ++c) {\r\n       \
    \         update(r, c, f(r - 1, c - 1));\r\n            }\r\n        }\r\n   \
    \ }\r\n\r\n    void update(int r, int c, X delta) {\r\n        for (int i = r;\
    \ i <= rows; i += i & -i) {\r\n            for (int j = c; j <= cols; j += j &\
    \ -j) {\r\n                bit[i][j] = G::op(bit[i][j], delta);\r\n          \
    \  }\r\n        }\r\n    }\r\n\r\n    X get(int r, int c) const {\r\n        X\
    \ res = G::unit();\r\n        for (int i = r; i > 0; i -= i & -i) {\r\n      \
    \      for (int j = c; j > 0; j -= j & -j) {\r\n                res = G::op(res,\
    \ bit[i][j]);\r\n            }\r\n        }\r\n        return res;\r\n    }\r\n\
    \r\n    X get(int r1, int c1, int r2, int c2) const {\r\n        return G::op(\r\
    \n            G::op(get(r2, c2), G::inverse(get(r1 - 1, c2))),\r\n           \
    \ G::inverse(get(r2, c1 - 1)),\r\n            G::op(get(r1 - 1, c1 - 1))\r\n \
    \       );\r\n    }\r\n};\r\n"
  code: "#pragma once\r\n\r\ntemplate<typename Monoid>\r\nstruct Fenwick2D {\r\n \
    \   using G = Monoid;\r\n    using X = typename Monoid::value_type;\r\n    vector<vector<X>>\
    \ bit;\r\n    int rows, cols;\r\n\r\n    Fenwick2D(int rows, int cols) : rows(rows),\
    \ cols(cols) {\r\n        bit.assign(rows + 1, vector<X>(cols + 1, G::unit()));\r\
    \n    }\r\n\r\n    template <typename F>\r\n    Fenwick2D(int rows, int cols,\
    \ F f) : Fenwick2D(rows, cols) {\r\n        for (int r = 1; r <= rows; ++r) {\r\
    \n            for (int c = 1; c <= cols; ++c) {\r\n                update(r, c,\
    \ f(r - 1, c - 1));\r\n            }\r\n        }\r\n    }\r\n\r\n    void update(int\
    \ r, int c, X delta) {\r\n        for (int i = r; i <= rows; i += i & -i) {\r\n\
    \            for (int j = c; j <= cols; j += j & -j) {\r\n                bit[i][j]\
    \ = G::op(bit[i][j], delta);\r\n            }\r\n        }\r\n    }\r\n\r\n  \
    \  X get(int r, int c) const {\r\n        X res = G::unit();\r\n        for (int\
    \ i = r; i > 0; i -= i & -i) {\r\n            for (int j = c; j > 0; j -= j &\
    \ -j) {\r\n                res = G::op(res, bit[i][j]);\r\n            }\r\n \
    \       }\r\n        return res;\r\n    }\r\n\r\n    X get(int r1, int c1, int\
    \ r2, int c2) const {\r\n        return G::op(\r\n            G::op(get(r2, c2),\
    \ G::inverse(get(r1 - 1, c2))),\r\n            G::inverse(get(r2, c1 - 1)),\r\n\
    \            G::op(get(r1 - 1, c1 - 1))\r\n        );\r\n    }\r\n};\r\n"
  dependsOn: []
  isVerificationFile: false
  path: ds/fenwick/fenwick2d.hpp
  requiredBy: []
  timestamp: '2025-01-31 21:31:14+05:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: ds/fenwick/fenwick2d.hpp
layout: document
redirect_from:
- /library/ds/fenwick/fenwick2d.hpp
- /library/ds/fenwick/fenwick2d.hpp.html
title: ds/fenwick/fenwick2d.hpp
---
