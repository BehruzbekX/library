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
  bundledCode: "#line 1 \"trielr.cpp\"\nconstexpr int LOG = 31;\nstruct trie {\n \
    \   trie *a[2];\n    int cnt;\n    vector<int> id;\n    trie() {\n        a[0]\
    \ = a[1] = nullptr;\n        cnt = 0;\n    }\n    void insert(int x, int idx)\
    \ {\n        trie *node = this;\n        for (int i = LOG; i >= 0; --i) {\n  \
    \          int bit = (x >> i) & 1;\n            if (!node->a[bit])\n         \
    \       node->a[bit] = new trie();\n            node = node->a[bit];\n       \
    \     node->cnt++;\n            node->id.emplace_back(idx);\n        }\n    }\n\
    \    bool in(vector<int> &e, int l, int r) {\n        auto it = lower_bound(e.begin(),\
    \ e.end(), l);\n        return (it != e.end()) && *it <= r;\n    }\n    void erase(int\
    \ x) {\n        trie *node = this;\n        for (int i = LOG; i >= 0; --i) {\n\
    \            int bit = (x >> i) & 1;\n            if (!node->a[bit])\n       \
    \         return;\n            node = node->a[bit];\n            node->cnt--;\n\
    \        }\n    }\n    int query(int x) {\n        trie *node = this;\n      \
    \  int mx = 0;\n        for (int i = LOG; i >= 0; --i) {\n            int bit\
    \ = (x >> i) & 1;\n            int ops = bit ^ 1;\n            if (node->a[ops]\
    \ && node->a[ops]->cnt > 0)\n                mx |= (1 << i), node = node->a[ops];\n\
    \            else\n                node = node->a[bit];\n        }\n        return\
    \ mx;\n    }\n    int query(int l, int r, int x) {\n        trie *node = this;\n\
    \        int mx = 0;\n        for (int i = LOG; i >= 0; --i) {\n            int\
    \ bit = (x >> i) & 1;\n            int ops = bit ^ 1;\n            if (node->a[ops]\
    \ && in(node->a[ops]->id, l, r))\n                mx |= (1 << i), node = node->a[ops];\n\
    \            else\n                node = node->a[bit];\n        }\n        return\
    \ mx;\n    }\n}\n"
  code: "constexpr int LOG = 31;\nstruct trie {\n    trie *a[2];\n    int cnt;\n \
    \   vector<int> id;\n    trie() {\n        a[0] = a[1] = nullptr;\n        cnt\
    \ = 0;\n    }\n    void insert(int x, int idx) {\n        trie *node = this;\n\
    \        for (int i = LOG; i >= 0; --i) {\n            int bit = (x >> i) & 1;\n\
    \            if (!node->a[bit])\n                node->a[bit] = new trie();\n\
    \            node = node->a[bit];\n            node->cnt++;\n            node->id.emplace_back(idx);\n\
    \        }\n    }\n    bool in(vector<int> &e, int l, int r) {\n        auto it\
    \ = lower_bound(e.begin(), e.end(), l);\n        return (it != e.end()) && *it\
    \ <= r;\n    }\n    void erase(int x) {\n        trie *node = this;\n        for\
    \ (int i = LOG; i >= 0; --i) {\n            int bit = (x >> i) & 1;\n        \
    \    if (!node->a[bit])\n                return;\n            node = node->a[bit];\n\
    \            node->cnt--;\n        }\n    }\n    int query(int x) {\n        trie\
    \ *node = this;\n        int mx = 0;\n        for (int i = LOG; i >= 0; --i) {\n\
    \            int bit = (x >> i) & 1;\n            int ops = bit ^ 1;\n       \
    \     if (node->a[ops] && node->a[ops]->cnt > 0)\n                mx |= (1 <<\
    \ i), node = node->a[ops];\n            else\n                node = node->a[bit];\n\
    \        }\n        return mx;\n    }\n    int query(int l, int r, int x) {\n\
    \        trie *node = this;\n        int mx = 0;\n        for (int i = LOG; i\
    \ >= 0; --i) {\n            int bit = (x >> i) & 1;\n            int ops = bit\
    \ ^ 1;\n            if (node->a[ops] && in(node->a[ops]->id, l, r))\n        \
    \        mx |= (1 << i), node = node->a[ops];\n            else\n            \
    \    node = node->a[bit];\n        }\n        return mx;\n    }\n}"
  dependsOn: []
  isVerificationFile: false
  path: trielr.cpp
  requiredBy: []
  timestamp: '2025-03-28 21:19:52+05:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: trielr.cpp
layout: document
redirect_from:
- /library/trielr.cpp
- /library/trielr.cpp.html
title: trielr.cpp
---
