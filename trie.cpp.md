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
  bundledCode: "#line 1 \"trie.cpp\"\nconstexpr int LOG = 31;\nstruct trie {\n   \
    \ trie *a[2];\n    int cnt;\n    trie() {\n        a[0] = a[1] = nullptr;\n  \
    \      cnt = 0;\n    }\n    void insert(int x) {\n        trie *node = this;\n\
    \        for (int i = LOG; i >= 0; --i) {\n            int bit = (x >> i) & 1;\n\
    \            if (!node->a[bit])\n                node->a[bit] = new trie();\n\
    \            node = node->a[bit];\n            node->cnt++;\n        }\n    }\n\
    \    void erase(int x) {\n        trie *node = this;\n        for (int i = LOG;\
    \ i >= 0; --i) {\n            int bit = (x >> i) & 1;\n            if (!node->a[bit])\n\
    \                return;\n            node = node->a[bit];\n            node->cnt--;\n\
    \        }\n    }\n    // max XOR \n    int query(int x) {\n        trie *node\
    \ = this;\n        int mx = 0;\n        for (int i = LOG; i >= 0; --i) {\n   \
    \         int bit = (x >> i) & 1;\n            int ops = bit ^ 1;\n          \
    \  if (node->a[ops] && node->a[ops]->cnt > 0)\n                mx |= (1 << i),\
    \ node = node->a[ops];\n            else\n                node = node->a[bit];\n\
    \        }\n        return mx;\n    }\n};\n"
  code: "constexpr int LOG = 31;\nstruct trie {\n    trie *a[2];\n    int cnt;\n \
    \   trie() {\n        a[0] = a[1] = nullptr;\n        cnt = 0;\n    }\n    void\
    \ insert(int x) {\n        trie *node = this;\n        for (int i = LOG; i >=\
    \ 0; --i) {\n            int bit = (x >> i) & 1;\n            if (!node->a[bit])\n\
    \                node->a[bit] = new trie();\n            node = node->a[bit];\n\
    \            node->cnt++;\n        }\n    }\n    void erase(int x) {\n       \
    \ trie *node = this;\n        for (int i = LOG; i >= 0; --i) {\n            int\
    \ bit = (x >> i) & 1;\n            if (!node->a[bit])\n                return;\n\
    \            node = node->a[bit];\n            node->cnt--;\n        }\n    }\n\
    \    // max XOR \n    int query(int x) {\n        trie *node = this;\n       \
    \ int mx = 0;\n        for (int i = LOG; i >= 0; --i) {\n            int bit =\
    \ (x >> i) & 1;\n            int ops = bit ^ 1;\n            if (node->a[ops]\
    \ && node->a[ops]->cnt > 0)\n                mx |= (1 << i), node = node->a[ops];\n\
    \            else\n                node = node->a[bit];\n        }\n        return\
    \ mx;\n    }\n};"
  dependsOn: []
  isVerificationFile: false
  path: trie.cpp
  requiredBy: []
  timestamp: '2025-03-28 21:19:52+05:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: trie.cpp
layout: document
redirect_from:
- /library/trie.cpp
- /library/trie.cpp.html
title: trie.cpp
---
