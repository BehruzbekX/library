---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: cpp
  _verificationStatusIcon: ':warning:'
  attributes:
    links: []
  bundledCode: "#line 1 \"fenwick.cpp\"\n//Fenwick<T> a(vector<T> arr);\n//Fenwick<T>\
    \ a(n);\n//Supports MIN,MAX 0..R , with update\n//Suports SUM [L,R] with point\
    \ update\ntemplate<typename T> struct Fenwick {\n    vector<T> bit;\n    int n;\n\
    \    const int INF = 1e9 + 1;\n    int op(int x,int y){\n        int z = (x +\
    \ y);\n        return z;\n    }\n    Fenwick(int n) {\n        this->n = n;\n\
    \        bit.assign(n + 1, 0);//may change, INF for min,-INF for max\n    }\n\
    \    Fenwick(vector<T> const &a) : Fenwick(a.size()) {\n        for (size_t i\
    \ = 0; i < a.size(); i++)\n            add(i, a[i]);\n    }\n    T get(int r)\
    \ {\n        int res = 0;//may change, INF for min,-INF for max\n        for (;\
    \ r >= 0; r = (r & (r + 1)) - 1)\n            res = op(res,bit[r]);\n        return\
    \ res;\n    }\n    T get(int l, int r) {\n        return get(r) - get(l - 1);\n\
    \    }\n    void add(int idx, T delta) {\n        for (; idx < n; idx = idx |\
    \ (idx + 1))\n            bit[idx] = op(bit[idx],delta);\n    }\n};\n"
  code: "//Fenwick<T> a(vector<T> arr);\n//Fenwick<T> a(n);\n//Supports MIN,MAX 0..R\
    \ , with update\n//Suports SUM [L,R] with point update\ntemplate<typename T> struct\
    \ Fenwick {\n    vector<T> bit;\n    int n;\n    const int INF = 1e9 + 1;\n  \
    \  int op(int x,int y){\n        int z = (x + y);\n        return z;\n    }\n\
    \    Fenwick(int n) {\n        this->n = n;\n        bit.assign(n + 1, 0);//may\
    \ change, INF for min,-INF for max\n    }\n    Fenwick(vector<T> const &a) : Fenwick(a.size())\
    \ {\n        for (size_t i = 0; i < a.size(); i++)\n            add(i, a[i]);\n\
    \    }\n    T get(int r) {\n        int res = 0;//may change, INF for min,-INF\
    \ for max\n        for (; r >= 0; r = (r & (r + 1)) - 1)\n            res = op(res,bit[r]);\n\
    \        return res;\n    }\n    T get(int l, int r) {\n        return get(r)\
    \ - get(l - 1);\n    }\n    void add(int idx, T delta) {\n        for (; idx <\
    \ n; idx = idx | (idx + 1))\n            bit[idx] = op(bit[idx],delta);\n    }\n\
    };\n"
  dependsOn: []
  isVerificationFile: false
  path: fenwick.cpp
  requiredBy: []
  timestamp: '2024-08-20 21:52:12+05:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: fenwick.cpp
layout: document
redirect_from:
- /library/fenwick.cpp
- /library/fenwick.cpp.html
title: fenwick.cpp
---
