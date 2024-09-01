---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: test/mytest/fenwickraq.test.cpp
    title: test/mytest/fenwickraq.test.cpp
  - icon: ':heavy_check_mark:'
    path: test/mytest/fenwickxor.test.cpp
    title: test/mytest/fenwickxor.test.cpp
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    links: []
  bundledCode: "#line 2 \"ds/fenwick/rangefenwick.hpp\"\n\ntemplate<typename Monoid>\n\
    struct Fenwick{\n\tusing G = Monoid;\n\tusing X = typename Monoid::value_type;\n\
    \n\tvector<X> bit0,bit1;\n\tint n;\n\tFenwick(int n){\n\t\tthis->n = n;\n\t\t\
    bit0.assign(n + 1,G::unit());\t\t\n\t\tbit1.assign(n + 1,G::unit());\t\n\t}\n\t\
    Fenwick(vector<X>& A):Fenwick(sz(A)){\n\t\tFOR(i,sz(A)){\n\t\t\tupdate(i + 1,i\
    \ + 1,A[i]);\n\t\t}\n\t}\n\tX get(int r) {\n        X sum0 = G::unit(), sum1 =\
    \ G::unit();\n        int tr = r;\n        for (; r > 0; r -= r & -r) {\n    \
    \        sum0 = G::op(sum0, bit0[r]);\n            sum1 = G::op(sum1, bit1[r]);\n\
    \        }\n        return G::op(G::power(sum0, tr), sum1);\n    }\n\tX get(int\
    \ l, int r) {\n        return G::op(get(r), G::inverse(get(l - 1)));\n    }\n\t\
    void update(vector<X>& bit,int idx,X del){ //1-indexed q\n\t\tFOR(i,idx,n + 1,i\
    \ & -i) bit[i] = G::op(bit[i],del);\n\t}\n\tvoid update(int l,int r,X x){\n\t\t\
    update(bit0, l, G::power(x, 1));\n        update(bit0, r + 1, G::inverse(G::power(x,\
    \ 1)));\n        update(bit1, l, G::inverse(G::power(x, l - 1)));\n        update(bit1,\
    \ r + 1, G::power(x, r));\n\t}\n};\n"
  code: "#pragma once\n\ntemplate<typename Monoid>\nstruct Fenwick{\n\tusing G = Monoid;\n\
    \tusing X = typename Monoid::value_type;\n\n\tvector<X> bit0,bit1;\n\tint n;\n\
    \tFenwick(int n){\n\t\tthis->n = n;\n\t\tbit0.assign(n + 1,G::unit());\t\t\n\t\
    \tbit1.assign(n + 1,G::unit());\t\n\t}\n\tFenwick(vector<X>& A):Fenwick(sz(A)){\n\
    \t\tFOR(i,sz(A)){\n\t\t\tupdate(i + 1,i + 1,A[i]);\n\t\t}\n\t}\n\tX get(int r)\
    \ {\n        X sum0 = G::unit(), sum1 = G::unit();\n        int tr = r;\n    \
    \    for (; r > 0; r -= r & -r) {\n            sum0 = G::op(sum0, bit0[r]);\n\
    \            sum1 = G::op(sum1, bit1[r]);\n        }\n        return G::op(G::power(sum0,\
    \ tr), sum1);\n    }\n\tX get(int l, int r) {\n        return G::op(get(r), G::inverse(get(l\
    \ - 1)));\n    }\n\tvoid update(vector<X>& bit,int idx,X del){ //1-indexed q\n\
    \t\tFOR(i,idx,n + 1,i & -i) bit[i] = G::op(bit[i],del);\n\t}\n\tvoid update(int\
    \ l,int r,X x){\n\t\tupdate(bit0, l, G::power(x, 1));\n        update(bit0, r\
    \ + 1, G::inverse(G::power(x, 1)));\n        update(bit1, l, G::inverse(G::power(x,\
    \ l - 1)));\n        update(bit1, r + 1, G::power(x, r));\n\t}\n};"
  dependsOn: []
  isVerificationFile: false
  path: ds/fenwick/rangefenwick.hpp
  requiredBy: []
  timestamp: '2024-09-01 12:11:39+05:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - test/mytest/fenwickxor.test.cpp
  - test/mytest/fenwickraq.test.cpp
documentation_of: ds/fenwick/rangefenwick.hpp
layout: document
redirect_from:
- /library/ds/fenwick/rangefenwick.hpp
- /library/ds/fenwick/rangefenwick.hpp.html
title: ds/fenwick/rangefenwick.hpp
---
