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
  bundledCode: "#line 1 \"basis.hpp\"\n// O(N), O(N^2)\ntemplate <class S, int N>\n\
    struct basis {\n    array<S, N> a;\n    int n;\n\n    basis() { a.fill(0); n =\
    \ 0; }\n    void clear() { a.fill(0); n = 0; }\n\n    void insert(S x) {\n   \
    \     for (int i = N - 1; i >= 0; i--)\n            x = min(x, x ^ a[i]);\n  \
    \      if (x) a[__lg(x)] = x, n++;\n    }\n\n    void merge(const basis<S, N>&\
    \ b) {\n        for (int x : b.a) insert(x);\n    }\n};\n"
  code: "// O(N), O(N^2)\ntemplate <class S, int N>\nstruct basis {\n    array<S,\
    \ N> a;\n    int n;\n\n    basis() { a.fill(0); n = 0; }\n    void clear() { a.fill(0);\
    \ n = 0; }\n\n    void insert(S x) {\n        for (int i = N - 1; i >= 0; i--)\n\
    \            x = min(x, x ^ a[i]);\n        if (x) a[__lg(x)] = x, n++;\n    }\n\
    \n    void merge(const basis<S, N>& b) {\n        for (int x : b.a) insert(x);\n\
    \    }\n};"
  dependsOn: []
  isVerificationFile: false
  path: basis.hpp
  requiredBy: []
  timestamp: '2025-03-28 21:19:52+05:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: basis.hpp
layout: document
redirect_from:
- /library/basis.hpp
- /library/basis.hpp.html
title: basis.hpp
---
