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
  bundledCode: "#line 1 \"sparse_table.cpp\"\ntemplate<typename T> struct sparse_table\
    \ {\n    vector<vector<T>> rmq;\n    T calc(T a, T b) {\n        return std::min(a,\
    \ b);\n    }\n    void build(vector<T> &a) {\n        int n = a.size();\n    \
    \    int ln = 31 - __builtin_clz(n);\n        if ((1 << ln) < n) {\n         \
    \   ln++;\n        }\n        rmq.assign(ln + 1, vector<T>(n));\n        for (int\
    \ j = 0; j <= ln; j++) {\n            for (int i = 0; i <= n - (1 << j); i++)\
    \ {\n                if (j > 0) {\n                    rmq[j][i] = calc(rmq[j\
    \ - 1][i], rmq[j - 1][i + (1 << (j - 1))]);\n                } else {\n      \
    \              rmq[j][i] = a[i];\n                }\n            }\n        }\n\
    \    }\n    T get(int l, int r) {\n        assert(l <= r);\n        int x = 31\
    \ - __builtin_clz(r - l + 1);\n        return calc(rmq[x][l], rmq[x][r - (1 <<\
    \ x) + 1]);\n    }\n};\n"
  code: "template<typename T> struct sparse_table {\n    vector<vector<T>> rmq;\n\
    \    T calc(T a, T b) {\n        return std::min(a, b);\n    }\n    void build(vector<T>\
    \ &a) {\n        int n = a.size();\n        int ln = 31 - __builtin_clz(n);\n\
    \        if ((1 << ln) < n) {\n            ln++;\n        }\n        rmq.assign(ln\
    \ + 1, vector<T>(n));\n        for (int j = 0; j <= ln; j++) {\n            for\
    \ (int i = 0; i <= n - (1 << j); i++) {\n                if (j > 0) {\n      \
    \              rmq[j][i] = calc(rmq[j - 1][i], rmq[j - 1][i + (1 << (j - 1))]);\n\
    \                } else {\n                    rmq[j][i] = a[i];\n           \
    \     }\n            }\n        }\n    }\n    T get(int l, int r) {\n        assert(l\
    \ <= r);\n        int x = 31 - __builtin_clz(r - l + 1);\n        return calc(rmq[x][l],\
    \ rmq[x][r - (1 << x) + 1]);\n    }\n};"
  dependsOn: []
  isVerificationFile: false
  path: sparse_table.cpp
  requiredBy: []
  timestamp: '2024-08-20 21:52:12+05:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: sparse_table.cpp
layout: document
redirect_from:
- /library/sparse_table.cpp
- /library/sparse_table.cpp.html
title: sparse_table.cpp
---
