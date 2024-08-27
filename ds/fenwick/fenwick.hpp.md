---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':x:'
    path: main.test.cpp
    title: main.test.cpp
  - icon: ':x:'
    path: test/library_checker/aplusb.test.cpp
    title: test/library_checker/aplusb.test.cpp
  _isVerificationFailed: true
  _pathExtension: hpp
  _verificationStatusIcon: ':x:'
  attributes:
    links: []
  bundledCode: "#line 2 \"ds/fenwick/fenwick.hpp\"\n\ntemplate<typename Monoid>\n\
    struct Fenwick{\n\tusing G = Monoid;\n\tusing X = typename Monoid::value_type;\n\
    \tVI<X> bit;\n\tint n;\n\tFenwick(int n){\n\t\tthis->n = n;\n\t\tbit.assign(n\
    \ + 1,G::unit());\t\t\n\t}\n\tFenwick(VI<X>& A):Fenwick(SZ(A)){\n\t\tFOR(i,SZ(A)){\n\
    \t\t\tupdate(i + 1,i + 1,A[i]);\n\t\t}\n\t}\n\tX get(int r){ //A[1] op ... a[r]\n\
    \t\tX res = G::unit();\n\t\tfor(;r > 0;r -= r & -r){\n\t\t\tres = G::op(res,bit[r]);\n\
    \t\t}\n\t\treturn res;\n\t}\n\tX get(int l,int r){\n\t\treturn G::op(get(r),G::inverse(get(l\
    \ - 1)));\n\t}\n\tvoid update(int idx,X del){ //1-indexed q\n\t\tFOR(i,idx,n +\
    \ 1,i & -i) bit[i] = G::op(bit[i],del);\n\t}\n\tvoid update(int l,int r,X x){\n\
    \t\tupdate(l,x),update(r + 1,G::inverse(x));\n\t}\n};\n"
  code: "#pragma once\n\ntemplate<typename Monoid>\nstruct Fenwick{\n\tusing G = Monoid;\n\
    \tusing X = typename Monoid::value_type;\n\tVI<X> bit;\n\tint n;\n\tFenwick(int\
    \ n){\n\t\tthis->n = n;\n\t\tbit.assign(n + 1,G::unit());\t\t\n\t}\n\tFenwick(VI<X>&\
    \ A):Fenwick(SZ(A)){\n\t\tFOR(i,SZ(A)){\n\t\t\tupdate(i + 1,i + 1,A[i]);\n\t\t\
    }\n\t}\n\tX get(int r){ //A[1] op ... a[r]\n\t\tX res = G::unit();\n\t\tfor(;r\
    \ > 0;r -= r & -r){\n\t\t\tres = G::op(res,bit[r]);\n\t\t}\n\t\treturn res;\n\t\
    }\n\tX get(int l,int r){\n\t\treturn G::op(get(r),G::inverse(get(l - 1)));\n\t\
    }\n\tvoid update(int idx,X del){ //1-indexed q\n\t\tFOR(i,idx,n + 1,i & -i) bit[i]\
    \ = G::op(bit[i],del);\n\t}\n\tvoid update(int l,int r,X x){\n\t\tupdate(l,x),update(r\
    \ + 1,G::inverse(x));\n\t}\n};"
  dependsOn: []
  isVerificationFile: false
  path: ds/fenwick/fenwick.hpp
  requiredBy: []
  timestamp: '2024-08-27 11:58:59+05:00'
  verificationStatus: LIBRARY_ALL_WA
  verifiedWith:
  - test/library_checker/aplusb.test.cpp
  - main.test.cpp
documentation_of: ds/fenwick/fenwick.hpp
layout: document
redirect_from:
- /library/ds/fenwick/fenwick.hpp
- /library/ds/fenwick/fenwick.hpp.html
title: ds/fenwick/fenwick.hpp
---
