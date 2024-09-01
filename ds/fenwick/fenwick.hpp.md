---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: test/library_checker/aplusb.test.cpp
    title: test/library_checker/aplusb.test.cpp
  - icon: ':heavy_check_mark:'
    path: test/library_checker/point_add_range_sum.test.cpp
    title: test/library_checker/point_add_range_sum.test.cpp
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    links: []
  bundledCode: "#line 2 \"ds/fenwick/fenwick.hpp\"\n\ntemplate<typename Monoid>\n\
    struct Fenwick{\n\tusing G = Monoid;\n\tusing X = typename Monoid::value_type;\n\
    \tvector<X> bit;\n\tint n;\n\tFenwick(int n){\n\t\tthis->n = n;\n\t\tbit.assign(n\
    \ + 1,G::unit());\t\t\n\t}\n\tFenwick(vector<X>& A):Fenwick(sz(A)){\n\t\tFOR(i,sz(A)){\n\
    \t\t\tupdate(i + 1,A[i]);\n\t\t}\n\t}\n\tX get(int r){ //A[1] op ... a[r]\n\t\t\
    X res = G::unit();\n\t\tfor(;r > 0;r -= r & -r){\n\t\t\tres = G::op(res,bit[r]);\n\
    \t\t}\n\t\treturn res;\n\t}\n\tX get(int l,int r){\n\t\treturn G::op(get(r),G::inverse(get(l\
    \ - 1)));\n\t}\n\tvoid update(int idx,X del){ //1-indexed q\n\t\tFOR(i,idx,n +\
    \ 1,i & -i) bit[i] = G::op(bit[i],del);\n\t}\n\tvoid update(int l,int r,X x){\n\
    \t\tupdate(l,G::power(x,1)),update(r + 1,G::inverse(G::power(x, 1)));\n\t}\n};\n"
  code: "#pragma once\n\ntemplate<typename Monoid>\nstruct Fenwick{\n\tusing G = Monoid;\n\
    \tusing X = typename Monoid::value_type;\n\tvector<X> bit;\n\tint n;\n\tFenwick(int\
    \ n){\n\t\tthis->n = n;\n\t\tbit.assign(n + 1,G::unit());\t\t\n\t}\n\tFenwick(vector<X>&\
    \ A):Fenwick(sz(A)){\n\t\tFOR(i,sz(A)){\n\t\t\tupdate(i + 1,A[i]);\n\t\t}\n\t\
    }\n\tX get(int r){ //A[1] op ... a[r]\n\t\tX res = G::unit();\n\t\tfor(;r > 0;r\
    \ -= r & -r){\n\t\t\tres = G::op(res,bit[r]);\n\t\t}\n\t\treturn res;\n\t}\n\t\
    X get(int l,int r){\n\t\treturn G::op(get(r),G::inverse(get(l - 1)));\n\t}\n\t\
    void update(int idx,X del){ //1-indexed q\n\t\tFOR(i,idx,n + 1,i & -i) bit[i]\
    \ = G::op(bit[i],del);\n\t}\n\tvoid update(int l,int r,X x){\n\t\tupdate(l,G::power(x,1)),update(r\
    \ + 1,G::inverse(G::power(x, 1)));\n\t}\n};"
  dependsOn: []
  isVerificationFile: false
  path: ds/fenwick/fenwick.hpp
  requiredBy: []
  timestamp: '2024-09-01 12:11:39+05:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - test/library_checker/point_add_range_sum.test.cpp
  - test/library_checker/aplusb.test.cpp
documentation_of: ds/fenwick/fenwick.hpp
layout: document
redirect_from:
- /library/ds/fenwick/fenwick.hpp
- /library/ds/fenwick/fenwick.hpp.html
title: ds/fenwick/fenwick.hpp
---
