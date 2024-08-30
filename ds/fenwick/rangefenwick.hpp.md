---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: test/mytest/fenwickraq.test.cpp
    title: test/mytest/fenwickraq.test.cpp
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    links: []
  bundledCode: "#line 2 \"ds/fenwick/rangefenwick.hpp\"\n\ntemplate<typename Monoid>\n\
    struct Fenwick{\n\tusing G = Monoid;\n\tusing X = typename Monoid::value_type;\n\
    \n\tVI<X> bit0,bit1;\n\tint n;\n\tFenwick(int n){\n\t\tthis->n = n;\n\t\tbit0.assign(n\
    \ + 1,G::unit());\t\t\n\t\tbit1.assign(n + 1,G::unit());\t\n\t}\n\tFenwick(VI<X>&\
    \ A):Fenwick(SZ(A)){\n\t\tFOR(i,SZ(A)){\n\t\t\tupdate(i + 1,i + 1,A[i]);\n\t\t\
    }\n\t}\n\tX get(int r){ //A[1] op ... a[r]\n\t\tX sum0 = G::unit(), sum1 = G::unit();\n\
    \t\tint tr = r;\n\t\tfor(;r > 0;r -= r & -r){\n\t\t\tsum0 = G::op(sum0,bit0[r]);\n\
    \t\t\tsum1 = G::op(sum1,bit1[r]);\n\t\t}\n\t\t return G::op(G::power(sum0, tr),\
    \ sum1);\n\t}\n\tX get(int l,int r){\n\t\treturn G::op(get(r),G::inverse(get(l\
    \ - 1)));\t\n\t}\n\tvoid update(VI<X>& bit,int idx,X del){ //1-indexed q\n\t\t\
    FOR(i,idx,n + 1,i & -i) bit[i] = G::op(bit[i],del);\n\t}\n\tvoid update(int l,int\
    \ r,X x){\n\t\tupdate(bit0, l, x);\n        update(bit0, r + 1, G::inverse(x));\n\
    \        update(bit1, l, G::inverse(x) * (l - 1));\n        update(bit1, r + 1,\
    \ x * r);\n\t}\n};\n"
  code: "#pragma once\n\ntemplate<typename Monoid>\nstruct Fenwick{\n\tusing G = Monoid;\n\
    \tusing X = typename Monoid::value_type;\n\n\tVI<X> bit0,bit1;\n\tint n;\n\tFenwick(int\
    \ n){\n\t\tthis->n = n;\n\t\tbit0.assign(n + 1,G::unit());\t\t\n\t\tbit1.assign(n\
    \ + 1,G::unit());\t\n\t}\n\tFenwick(VI<X>& A):Fenwick(SZ(A)){\n\t\tFOR(i,SZ(A)){\n\
    \t\t\tupdate(i + 1,i + 1,A[i]);\n\t\t}\n\t}\n\tX get(int r){ //A[1] op ... a[r]\n\
    \t\tX sum0 = G::unit(), sum1 = G::unit();\n\t\tint tr = r;\n\t\tfor(;r > 0;r -=\
    \ r & -r){\n\t\t\tsum0 = G::op(sum0,bit0[r]);\n\t\t\tsum1 = G::op(sum1,bit1[r]);\n\
    \t\t}\n\t\t return G::op(G::power(sum0, tr), sum1);\n\t}\n\tX get(int l,int r){\n\
    \t\treturn G::op(get(r),G::inverse(get(l - 1)));\t\n\t}\n\tvoid update(VI<X>&\
    \ bit,int idx,X del){ //1-indexed q\n\t\tFOR(i,idx,n + 1,i & -i) bit[i] = G::op(bit[i],del);\n\
    \t}\n\tvoid update(int l,int r,X x){\n\t\tupdate(bit0, l, x);\n        update(bit0,\
    \ r + 1, G::inverse(x));\n        update(bit1, l, G::inverse(x) * (l - 1));\n\
    \        update(bit1, r + 1, x * r);\n\t}\n};"
  dependsOn: []
  isVerificationFile: false
  path: ds/fenwick/rangefenwick.hpp
  requiredBy: []
  timestamp: '2024-08-30 11:48:08+05:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - test/mytest/fenwickraq.test.cpp
documentation_of: ds/fenwick/rangefenwick.hpp
layout: document
redirect_from:
- /library/ds/fenwick/rangefenwick.hpp
- /library/ds/fenwick/rangefenwick.hpp.html
title: ds/fenwick/rangefenwick.hpp
---
