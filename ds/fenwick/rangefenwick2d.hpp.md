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
  bundledCode: "#line 1 \"ds/fenwick/rangefenwick2d.hpp\"\ntemplate<typename Monoid>\n\
    struct Fenwick2D {\n    using G = Monoid;\n    using X = typename Monoid::value_type;\n\
    \n    vector<vector<X>> bit0, bit1, bit2, bit3;\n    int n, m;\n\n    Fenwick2D(int\
    \ n, int m) {\n        this->n = n;\n        this->m = m;\n        bit0.assign(n\
    \ + 1, vector<X>(m + 1, G::unit()));\n        bit1.assign(n + 1, vector<X>(m +\
    \ 1, G::unit()));\n        bit2.assign(n + 1, vector<X>(m + 1, G::unit()));\n\
    \        bit3.assign(n + 1, vector<X>(m + 1, G::unit()));\n    }\n\n    void update(vector<vector<X>>&\
    \ bit, int x, int y, X delta) {\n        for (int i = x; i <= n; i += i & -i)\
    \ {\n            for (int j = y; j <= m; j += j & -j) {\n                bit[i][j]\
    \ = G::op(bit[i][j], delta);\n            }\n        }\n    }\n\n    void update(int\
    \ x1, int y1, int x2, int y2, X val) {\n        // Range update using 4-point\
    \ inclusion-exclusion principle\n        update(bit0, x1, y1, val);\n        update(bit0,\
    \ x2 + 1, y1, G::inverse(val));\n        update(bit0, x1, y2 + 1, G::inverse(val));\n\
    \        update(bit0, x2 + 1, y2 + 1, val);\n\n        update(bit1, x1, y1, G::inverse(val\
    \ * (y1 - 1)));\n        update(bit1, x2 + 1, y1, val * (y1 - 1));\n        update(bit1,\
    \ x1, y2 + 1, val * (y1 - 1));\n        update(bit1, x2 + 1, y2 + 1, G::inverse(val\
    \ * (y1 - 1)));\n\n        update(bit2, x1, y1, G::inverse(val * (x1 - 1)));\n\
    \        update(bit2, x2 + 1, y1, val * (x1 - 1));\n        update(bit2, x1, y2\
    \ + 1, val * (x1 - 1));\n        update(bit2, x2 + 1, y2 + 1, G::inverse(val *\
    \ (x1 - 1)));\n\n        update(bit3, x1, y1, val * (x1 - 1) * (y1 - 1));\n  \
    \      update(bit3, x2 + 1, y1, G::inverse(val * (x1 - 1) * (y1 - 1)));\n    \
    \    update(bit3, x1, y2 + 1, G::inverse(val * (x1 - 1) * (y1 - 1)));\n      \
    \  update(bit3, x2 + 1, y2 + 1, val * (x1 - 1) * (y1 - 1));\n    }\n\n    X get(int\
    \ x, int y) {\n        if (x <= 0 || y <= 0) return G::unit();  // Out of bounds\
    \ check\n        X res0 = G::unit(), res1 = G::unit(), res2 = G::unit(), res3\
    \ = G::unit();\n        for (int i = x; i > 0; i -= i & -i) {\n            for\
    \ (int j = y; j > 0; j -= j & -j) {\n                res0 = G::op(res0, bit0[i][j]);\n\
    \                res1 = G::op(res1, bit1[i][j]);\n                res2 = G::op(res2,\
    \ bit2[i][j]);\n                res3 = G::op(res3, bit3[i][j]);\n            }\n\
    \        }\n        return res0 * x * y + res1 * x + res2 * y + res3;\n    }\n\
    \n    X get(int x1, int y1, int x2, int y2) {\n        return get(x2, y2) - get(x1\
    \ - 1, y2) - get(x2, y1 - 1) + get(x1 - 1, y1 - 1);\n    }\n};\n"
  code: "template<typename Monoid>\nstruct Fenwick2D {\n    using G = Monoid;\n  \
    \  using X = typename Monoid::value_type;\n\n    vector<vector<X>> bit0, bit1,\
    \ bit2, bit3;\n    int n, m;\n\n    Fenwick2D(int n, int m) {\n        this->n\
    \ = n;\n        this->m = m;\n        bit0.assign(n + 1, vector<X>(m + 1, G::unit()));\n\
    \        bit1.assign(n + 1, vector<X>(m + 1, G::unit()));\n        bit2.assign(n\
    \ + 1, vector<X>(m + 1, G::unit()));\n        bit3.assign(n + 1, vector<X>(m +\
    \ 1, G::unit()));\n    }\n\n    void update(vector<vector<X>>& bit, int x, int\
    \ y, X delta) {\n        for (int i = x; i <= n; i += i & -i) {\n            for\
    \ (int j = y; j <= m; j += j & -j) {\n                bit[i][j] = G::op(bit[i][j],\
    \ delta);\n            }\n        }\n    }\n\n    void update(int x1, int y1,\
    \ int x2, int y2, X val) {\n        // Range update using 4-point inclusion-exclusion\
    \ principle\n        update(bit0, x1, y1, val);\n        update(bit0, x2 + 1,\
    \ y1, G::inverse(val));\n        update(bit0, x1, y2 + 1, G::inverse(val));\n\
    \        update(bit0, x2 + 1, y2 + 1, val);\n\n        update(bit1, x1, y1, G::inverse(val\
    \ * (y1 - 1)));\n        update(bit1, x2 + 1, y1, val * (y1 - 1));\n        update(bit1,\
    \ x1, y2 + 1, val * (y1 - 1));\n        update(bit1, x2 + 1, y2 + 1, G::inverse(val\
    \ * (y1 - 1)));\n\n        update(bit2, x1, y1, G::inverse(val * (x1 - 1)));\n\
    \        update(bit2, x2 + 1, y1, val * (x1 - 1));\n        update(bit2, x1, y2\
    \ + 1, val * (x1 - 1));\n        update(bit2, x2 + 1, y2 + 1, G::inverse(val *\
    \ (x1 - 1)));\n\n        update(bit3, x1, y1, val * (x1 - 1) * (y1 - 1));\n  \
    \      update(bit3, x2 + 1, y1, G::inverse(val * (x1 - 1) * (y1 - 1)));\n    \
    \    update(bit3, x1, y2 + 1, G::inverse(val * (x1 - 1) * (y1 - 1)));\n      \
    \  update(bit3, x2 + 1, y2 + 1, val * (x1 - 1) * (y1 - 1));\n    }\n\n    X get(int\
    \ x, int y) {\n        if (x <= 0 || y <= 0) return G::unit();  // Out of bounds\
    \ check\n        X res0 = G::unit(), res1 = G::unit(), res2 = G::unit(), res3\
    \ = G::unit();\n        for (int i = x; i > 0; i -= i & -i) {\n            for\
    \ (int j = y; j > 0; j -= j & -j) {\n                res0 = G::op(res0, bit0[i][j]);\n\
    \                res1 = G::op(res1, bit1[i][j]);\n                res2 = G::op(res2,\
    \ bit2[i][j]);\n                res3 = G::op(res3, bit3[i][j]);\n            }\n\
    \        }\n        return res0 * x * y + res1 * x + res2 * y + res3;\n    }\n\
    \n    X get(int x1, int y1, int x2, int y2) {\n        return get(x2, y2) - get(x1\
    \ - 1, y2) - get(x2, y1 - 1) + get(x1 - 1, y1 - 1);\n    }\n};"
  dependsOn: []
  isVerificationFile: false
  path: ds/fenwick/rangefenwick2d.hpp
  requiredBy: []
  timestamp: '2024-09-01 12:11:39+05:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: ds/fenwick/rangefenwick2d.hpp
layout: document
redirect_from:
- /library/ds/fenwick/rangefenwick2d.hpp
- /library/ds/fenwick/rangefenwick2d.hpp.html
title: ds/fenwick/rangefenwick2d.hpp
---
