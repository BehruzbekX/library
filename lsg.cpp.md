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
  bundledCode: "#line 1 \"lsg.cpp\"\n#define mid ((l + r) >> 1)\nstruct lsg {\n  \
    \  int n;\n    vector<int> t, lz, a;\n    lsg(vector<int> a) : n(a.size()), t(n\
    \ << 2), lz(n << 2), a(a) { dfs(1, 0, n - 1); }\n    void dfs(int i, int l, int\
    \ r) {\n        if (l == r)  t[i] = a[l];\n        else dfs(i << 1, l, mid), dfs(i\
    \ << 1 | 1, mid + 1, r), t[i] = t[i << 1] + t[i << 1 | 1];\n    }\n    void apl(int\
    \ i, int len, int x) { t[i] += len * x, lz[i] += x; }\n    void psh(int i, int\
    \ l, int r) { apl(i << 1, mid - l + 1, lz[i]), apl(i << 1 | 1, r - mid, lz[i]),\
    \ lz[i] = 0; }\n    int q(int i, int l, int r, int L, int R) {\n        if (l\
    \ > R || r < L) return 0;\n        if (L <= l && r <= R) return t[i];\n      \
    \  psh(i, l, r);\n        return q(i << 1, l, mid, L, R) + q(i << 1 | 1, mid +\
    \ 1, r, L, R);\n    }\n    void u(int i, int l, int r, int L,int R, int x){\n\
    \        if (l > R || r < L) return;\n        if (L <= l && r <= R) apl(i, r -\
    \ l + 1, x);\n        else  psh(i, l, r), u(i << 1, l, mid, L, R, x), u(i << 1\
    \ | 1, mid + 1, r, L,R,x), t[i] = t[i << 1] + t[i << 1 | 1];\n    }\n};\n"
  code: "#define mid ((l + r) >> 1)\nstruct lsg {\n    int n;\n    vector<int> t,\
    \ lz, a;\n    lsg(vector<int> a) : n(a.size()), t(n << 2), lz(n << 2), a(a) {\
    \ dfs(1, 0, n - 1); }\n    void dfs(int i, int l, int r) {\n        if (l == r)\
    \  t[i] = a[l];\n        else dfs(i << 1, l, mid), dfs(i << 1 | 1, mid + 1, r),\
    \ t[i] = t[i << 1] + t[i << 1 | 1];\n    }\n    void apl(int i, int len, int x)\
    \ { t[i] += len * x, lz[i] += x; }\n    void psh(int i, int l, int r) { apl(i\
    \ << 1, mid - l + 1, lz[i]), apl(i << 1 | 1, r - mid, lz[i]), lz[i] = 0; }\n \
    \   int q(int i, int l, int r, int L, int R) {\n        if (l > R || r < L) return\
    \ 0;\n        if (L <= l && r <= R) return t[i];\n        psh(i, l, r);\n    \
    \    return q(i << 1, l, mid, L, R) + q(i << 1 | 1, mid + 1, r, L, R);\n    }\n\
    \    void u(int i, int l, int r, int L,int R, int x){\n        if (l > R || r\
    \ < L) return;\n        if (L <= l && r <= R) apl(i, r - l + 1, x);\n        else\
    \  psh(i, l, r), u(i << 1, l, mid, L, R, x), u(i << 1 | 1, mid + 1, r, L,R,x),\
    \ t[i] = t[i << 1] + t[i << 1 | 1];\n    }\n};"
  dependsOn: []
  isVerificationFile: false
  path: lsg.cpp
  requiredBy: []
  timestamp: '2025-03-31 16:30:30+05:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: lsg.cpp
layout: document
redirect_from:
- /library/lsg.cpp
- /library/lsg.cpp.html
title: lsg.cpp
---
