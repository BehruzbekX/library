---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':warning:'
  attributes:
    _deprecated_at_docs: docs/data-structure/binary-indexed-tree.md
    document_title: Binary Indexed Tree(Fenwick Tree)
    links: []
  bundledCode: "#line 2 \"algo/binary-indexed-tree.hpp\"\n\ntemplate <typename T>\n\
    struct BinaryIndexedTree {\n    int N;\n    vector<T> data;\n\n    BinaryIndexedTree()\
    \ = default;\n\n    BinaryIndexedTree(int size) { init(size); }\n\n    void init(int\
    \ size) {\n        N = size + 2;\n        data.assign(N + 1, {});\n    }\n\n \
    \   // get sum of [0,k]\n    T sum(int k) const {\n        if (k < 0) return T{};\
    \  // return 0 if k < 0\n        T ret{};\n        for (++k; k > 0; k -= k & -k)\
    \ ret += data[k];\n        return ret;\n    }\n\n    // getsum of [l,r]\n    inline\
    \ T sum(int l, int r) const { return sum(r) - sum(l - 1); }\n\n    // get value\
    \ of k\n    inline T operator[](int k) const { return sum(k) - sum(k - 1); }\n\
    \n    // data[k] += x\n    void add(int k, T x) {\n        for (++k; k < N; k\
    \ += k & -k) data[k] += x;\n    }\n\n    // range add x to [l,r]\n    void imos(int\
    \ l, int r, T x) {\n        add(l, x);\n        add(r + 1, -x);\n    }\n\n   \
    \ // minimize i s.t. sum(i) >= w\n    int lower_bound(T w) {\n        if (w <=\
    \ 0) return 0;\n        int x = 0;\n        for (int k = 1 << __lg(N); k; k >>=\
    \ 1) {\n            if (x + k <= N - 1 && data[x + k] < w) {\n               \
    \ w -= data[x + k];\n                x += k;\n            }\n        }\n     \
    \   return x;\n    }\n\n    // minimize i s.t. sum(i) > w\n    int upper_bound(T\
    \ w) {\n        if (w < 0) return 0;\n        int x = 0;\n        for (int k =\
    \ 1 << __lg(N); k; k >>= 1) {\n            if (x + k <= N - 1 && data[x + k] <=\
    \ w) {\n                w -= data[x + k];\n                x += k;\n         \
    \   }\n        }\n        return x;\n    }\n};\n\n/**\n * @brief Binary Indexed\
    \ Tree(Fenwick Tree)\n * @docs docs/data-structure/binary-indexed-tree.md\n */\n"
  code: "#pragma once\n\ntemplate <typename T>\nstruct BinaryIndexedTree {\n    int\
    \ N;\n    vector<T> data;\n\n    BinaryIndexedTree() = default;\n\n    BinaryIndexedTree(int\
    \ size) { init(size); }\n\n    void init(int size) {\n        N = size + 2;\n\
    \        data.assign(N + 1, {});\n    }\n\n    // get sum of [0,k]\n    T sum(int\
    \ k) const {\n        if (k < 0) return T{};  // return 0 if k < 0\n        T\
    \ ret{};\n        for (++k; k > 0; k -= k & -k) ret += data[k];\n        return\
    \ ret;\n    }\n\n    // getsum of [l,r]\n    inline T sum(int l, int r) const\
    \ { return sum(r) - sum(l - 1); }\n\n    // get value of k\n    inline T operator[](int\
    \ k) const { return sum(k) - sum(k - 1); }\n\n    // data[k] += x\n    void add(int\
    \ k, T x) {\n        for (++k; k < N; k += k & -k) data[k] += x;\n    }\n\n  \
    \  // range add x to [l,r]\n    void imos(int l, int r, T x) {\n        add(l,\
    \ x);\n        add(r + 1, -x);\n    }\n\n    // minimize i s.t. sum(i) >= w\n\
    \    int lower_bound(T w) {\n        if (w <= 0) return 0;\n        int x = 0;\n\
    \        for (int k = 1 << __lg(N); k; k >>= 1) {\n            if (x + k <= N\
    \ - 1 && data[x + k] < w) {\n                w -= data[x + k];\n             \
    \   x += k;\n            }\n        }\n        return x;\n    }\n\n    // minimize\
    \ i s.t. sum(i) > w\n    int upper_bound(T w) {\n        if (w < 0) return 0;\n\
    \        int x = 0;\n        for (int k = 1 << __lg(N); k; k >>= 1) {\n      \
    \      if (x + k <= N - 1 && data[x + k] <= w) {\n                w -= data[x\
    \ + k];\n                x += k;\n            }\n        }\n        return x;\n\
    \    }\n};\n\n/**\n * @brief Binary Indexed Tree(Fenwick Tree)\n * @docs docs/data-structure/binary-indexed-tree.md\n\
    \ */"
  dependsOn: []
  isVerificationFile: false
  path: algo/binary-indexed-tree.hpp
  requiredBy: []
  timestamp: '2024-08-21 11:38:19+05:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: algo/binary-indexed-tree.hpp
layout: document
redirect_from:
- /library/algo/binary-indexed-tree.hpp
- /library/algo/binary-indexed-tree.hpp.html
title: Binary Indexed Tree(Fenwick Tree)
---
