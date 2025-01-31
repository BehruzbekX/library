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
  bundledCode: "#line 2 \"ds/segtree/dynamicsegtree.hpp\"\n\r\nstruct node{\r\n  \
    \  node* left;\r\n    node* right;\r\n    int cnt = 0;\r\n    node(node* left\
    \ = nullptr,node* right = nullptr,int cnt = 0):cnt(cnt),left(left),right(right){};\r\
    \n};\r\ntypedef node* Node;\r\n\r\nint get(Node& root, int l,int r,int L,int R){\r\
    \n    if(root == nullptr) return 0;\r\n    if(l == L && r == R) return root->cnt;\r\
    \n    int m = (l + r) >> 1;\r\n    if(R <= m) return get(root->left,l,m,L,R);\r\
    \n    if(m < L) return get(root->right,m + 1,r,L,R);\r\n    return get(root->left,l,m,L,m)\
    \ + get(root->right,m + 1,r,m+1,R);\r\n}   \r\nvoid update(Node& root,int l,int\
    \ r,int idx,int delta){\r\n    if(root == nullptr) root = new node();\r\n    root->cnt\
    \ += delta;\r\n    if(l != r){\r\n        int m = (l + r) >> 1;\r\n        if(idx\
    \ > m) update(root->right,m + 1,r,idx,delta);\r\n        else update(root->left,l,m,idx,delta);\r\
    \n    }\r\n}\n"
  code: "#pragma once\r\n\r\nstruct node{\r\n    node* left;\r\n    node* right;\r\
    \n    int cnt = 0;\r\n    node(node* left = nullptr,node* right = nullptr,int\
    \ cnt = 0):cnt(cnt),left(left),right(right){};\r\n};\r\ntypedef node* Node;\r\n\
    \r\nint get(Node& root, int l,int r,int L,int R){\r\n    if(root == nullptr) return\
    \ 0;\r\n    if(l == L && r == R) return root->cnt;\r\n    int m = (l + r) >> 1;\r\
    \n    if(R <= m) return get(root->left,l,m,L,R);\r\n    if(m < L) return get(root->right,m\
    \ + 1,r,L,R);\r\n    return get(root->left,l,m,L,m) + get(root->right,m + 1,r,m+1,R);\r\
    \n}   \r\nvoid update(Node& root,int l,int r,int idx,int delta){\r\n    if(root\
    \ == nullptr) root = new node();\r\n    root->cnt += delta;\r\n    if(l != r){\r\
    \n        int m = (l + r) >> 1;\r\n        if(idx > m) update(root->right,m +\
    \ 1,r,idx,delta);\r\n        else update(root->left,l,m,idx,delta);\r\n    }\r\
    \n}"
  dependsOn: []
  isVerificationFile: false
  path: ds/segtree/dynamicsegtree.hpp
  requiredBy: []
  timestamp: '2025-01-31 21:31:14+05:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: ds/segtree/dynamicsegtree.hpp
layout: document
redirect_from:
- /library/ds/segtree/dynamicsegtree.hpp
- /library/ds/segtree/dynamicsegtree.hpp.html
title: ds/segtree/dynamicsegtree.hpp
---
