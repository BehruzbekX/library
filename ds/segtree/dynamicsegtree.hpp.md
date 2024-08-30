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
  bundledCode: "#line 2 \"ds/segtree/dynamicsegtree.hpp\"\n\nstruct node{\n    node*\
    \ left;\n    node* right;\n    int cnt = 0;\n    node(node* left = nullptr,node*\
    \ right = nullptr,int cnt = 0):cnt(cnt),left(left),right(right){};\n};\ntypedef\
    \ node* Node;\n\nint get(Node& root, int l,int r,int L,int R){\n    if(root ==\
    \ nullptr) return 0;\n    if(l == L && r == R) return root->cnt;\n    int m =\
    \ (l + r) >> 1;\n    if(R <= m) return get(root->left,l,m,L,R);\n    if(m < L)\
    \ return get(root->right,m + 1,r,L,R);\n    return get(root->left,l,m,L,m) + get(root->right,m\
    \ + 1,r,m+1,R);\n}   \nvoid update(Node& root,int l,int r,int idx,int delta){\n\
    \    if(root == nullptr) root = new node();\n    root->cnt += delta;\n    if(l\
    \ != r){\n        int m = (l + r) >> 1;\n        if(idx > m) update(root->right,m\
    \ + 1,r,idx,delta);\n        else update(root->left,l,m,idx,delta);\n    }\n}\n"
  code: "#pragma once\n\nstruct node{\n    node* left;\n    node* right;\n    int\
    \ cnt = 0;\n    node(node* left = nullptr,node* right = nullptr,int cnt = 0):cnt(cnt),left(left),right(right){};\n\
    };\ntypedef node* Node;\n\nint get(Node& root, int l,int r,int L,int R){\n   \
    \ if(root == nullptr) return 0;\n    if(l == L && r == R) return root->cnt;\n\
    \    int m = (l + r) >> 1;\n    if(R <= m) return get(root->left,l,m,L,R);\n \
    \   if(m < L) return get(root->right,m + 1,r,L,R);\n    return get(root->left,l,m,L,m)\
    \ + get(root->right,m + 1,r,m+1,R);\n}   \nvoid update(Node& root,int l,int r,int\
    \ idx,int delta){\n    if(root == nullptr) root = new node();\n    root->cnt +=\
    \ delta;\n    if(l != r){\n        int m = (l + r) >> 1;\n        if(idx > m)\
    \ update(root->right,m + 1,r,idx,delta);\n        else update(root->left,l,m,idx,delta);\n\
    \    }\n}"
  dependsOn: []
  isVerificationFile: false
  path: ds/segtree/dynamicsegtree.hpp
  requiredBy: []
  timestamp: '2024-08-30 11:48:08+05:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: ds/segtree/dynamicsegtree.hpp
layout: document
redirect_from:
- /library/ds/segtree/dynamicsegtree.hpp
- /library/ds/segtree/dynamicsegtree.hpp.html
title: ds/segtree/dynamicsegtree.hpp
---
