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
  bundledCode: "#line 1 \"stringtrie.cpp\"\nint code(char c) { return c - 'a'; }\n\
    struct trie {\n    trie *a[26];\n    int cnt, end_cnt;\n    trie() {\n       \
    \ cnt = 0, end_cnt = 0;\n        for (int i = 0; i < 26; i++)\n            a[i]\
    \ = nullptr;\n    }\n    void insert(string s) {\n        trie *node = this;\n\
    \        for (char i : s) {\n            if (!node->a[code(i)])\n            \
    \    node->a[code(i)] = new trie();\n            node = node->a[code(i)];\n  \
    \          node->cnt++;\n        }\n        node->end_cnt++;\n    }\n    void\
    \ erase(string s) {\n        trie *node = this;\n        for (char i : s) {\n\
    \            int idx = code(i);\n            if (!node->a[idx])\n            \
    \    return;\n            node = node->a[idx];\n            node->cnt--;\n   \
    \     }\n        node->end_cnt--;\n    }\n    int search(string s) {\n       \
    \ trie *node = this;\n        for (char i : s) {\n            if (!node->a[code(i)])\n\
    \                return 0;\n            node = node->a[code(i)];\n        }\n\
    \        return node->end_cnt;\n    }\n    vector<int> search_id(string s, int\
    \ x) {\n        trie *node = this;\n        vector<int> e;\n        for (int id\
    \ = x; id < s.size(); id++) {\n            char i = s[id];\n            if (!node->a[code(i)])\n\
    \                break;\n            node = node->a[code(i)];\n            if\
    \ (node->end_cnt > 0)\n                e.emplace_back(id - x + 1);\n        }\n\
    \        return e;\n    }\n    int search_start(string s) {\n        trie *node\
    \ = this;\n        for (char i : s) {\n            if (!node->a[code(i)])\n  \
    \              return 0;\n            node = node->a[code(i)];\n        }\n  \
    \      return node->cnt;\n    }\n    int search(string s, int x) { return search(s.substr(x));\
    \ }\n};\n"
  code: "int code(char c) { return c - 'a'; }\nstruct trie {\n    trie *a[26];\n \
    \   int cnt, end_cnt;\n    trie() {\n        cnt = 0, end_cnt = 0;\n        for\
    \ (int i = 0; i < 26; i++)\n            a[i] = nullptr;\n    }\n    void insert(string\
    \ s) {\n        trie *node = this;\n        for (char i : s) {\n            if\
    \ (!node->a[code(i)])\n                node->a[code(i)] = new trie();\n      \
    \      node = node->a[code(i)];\n            node->cnt++;\n        }\n       \
    \ node->end_cnt++;\n    }\n    void erase(string s) {\n        trie *node = this;\n\
    \        for (char i : s) {\n            int idx = code(i);\n            if (!node->a[idx])\n\
    \                return;\n            node = node->a[idx];\n            node->cnt--;\n\
    \        }\n        node->end_cnt--;\n    }\n    int search(string s) {\n    \
    \    trie *node = this;\n        for (char i : s) {\n            if (!node->a[code(i)])\n\
    \                return 0;\n            node = node->a[code(i)];\n        }\n\
    \        return node->end_cnt;\n    }\n    vector<int> search_id(string s, int\
    \ x) {\n        trie *node = this;\n        vector<int> e;\n        for (int id\
    \ = x; id < s.size(); id++) {\n            char i = s[id];\n            if (!node->a[code(i)])\n\
    \                break;\n            node = node->a[code(i)];\n            if\
    \ (node->end_cnt > 0)\n                e.emplace_back(id - x + 1);\n        }\n\
    \        return e;\n    }\n    int search_start(string s) {\n        trie *node\
    \ = this;\n        for (char i : s) {\n            if (!node->a[code(i)])\n  \
    \              return 0;\n            node = node->a[code(i)];\n        }\n  \
    \      return node->cnt;\n    }\n    int search(string s, int x) { return search(s.substr(x));\
    \ }\n};"
  dependsOn: []
  isVerificationFile: false
  path: stringtrie.cpp
  requiredBy: []
  timestamp: '2025-03-28 21:19:52+05:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: stringtrie.cpp
layout: document
redirect_from:
- /library/stringtrie.cpp
- /library/stringtrie.cpp.html
title: stringtrie.cpp
---
