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
  bundledCode: "#line 1 \"hld.hpp\"\nstruct lsg{\n    int n, mod;\n    vector<int>\
    \ t, lz, a;\n    inline int ls(int x) {return x << 1;}\n    inline int rs(int\
    \ x) {return x << 1 | 1;}\n    #define m ((l + r) >> 1)\n    lsg(vector<int> a,\
    \ int mod) :a(a), n(a.size()), mod(mod), t(n << 2), lz(n << 2) {dfs(1, 0, n -\
    \ 1);}\n    lsg(int n, int mod) : n(n), a(n, 0), lz(n << 2), t(n<<2), mod(mod)\
    \ {}\n    inline void dfs(int i, int l, int r) {\n        if (l == r) {\n    \
    \        t[i] = a[l] % mod;\n            return;\n        }\n        dfs(ls(i),\
    \ l, m);\n        dfs(rs(i), m + 1, r);\n        t[i] = (t[ls(i)] + t[rs(i)])\
    \ % mod;\n    }\n    inline void apl(int i, int l, int r, int x) {\n        t[i]\
    \ = (t[i] + ((r - l + 1) % mod * x % mod) % mod) % mod;\n        lz[i] = (lz[i]\
    \ + x) % mod;\n    }\n    inline void psh(int i, int l, int r) {\n        if(!lz[i])return;\n\
    \        apl(ls(i), l, m, lz[i] % mod);\n        apl(rs(i), m+1, r, lz[i] % mod);\n\
    \        lz[i] = 0;\n    }\n    inline void u(int i, int l, int r, int L, int\
    \ R, int x) {\n        if (l > R || r < L) return;\n        if (L <= l && r <=\
    \ R) {\n            apl(i, l, r, x);return;\n        }\n        psh(i, l, r);\n\
    \        u(ls(i), l, m, L, R, x);\n        u(rs(i), m + 1, r, L, R, x);\n    \
    \    t[i] = ((t[ls(i)]) + t[rs(i)]) % mod;\n    }\n    inline int q(int i, int\
    \ l, int r, int L, int R) {\n        if ( l > R || r < L) return 0;\n        if\
    \ (L <= l && r <= R) {\n            return t[i] % mod;\n        }\n        psh(i,\
    \ l, r);\n        return (q(ls(i), l, m, L,R) + q(rs(i), m + 1, r, L, R)) % mod;\n\
    \    }\n    inline int q(int l, int r){\n        return q(1, 0, n - 1, l, r);\n\
    \    }\n    inline void u(int l, int r, int x){\n        u(1, 0, n - 1, l, r,\
    \ x);\n    }\n};  \nstruct HLD{\n    int n, timer, mod;\n    vector<vector<int>>\
    \ a, s;\n    vector<int> dep, p, sz, h, id;\n    lsg f;\n    HLD(vector<vector<int>>\
    \ a, int root, int mod): a(a), mod(mod), n(a.size()), s(n), dep(n), p(n), sz(n),\
    \ h(n), id(n), f(n, mod), timer(0) {\n        p[root] = -1;\n        dfs1(root);\n\
    \        h[root] = root;\n        dfs2(root);\n    }   \n    inline void dfs1(int\
    \ v) {\n        sz[v] = 1;\n        for (int u : a[v]) {\n            if (u ==\
    \ p[v]) continue;\n            p[u] = v;\n            dep[u] = dep[v] + 1;\n \
    \           s[v].emplace_back(u);\n            dfs1(u);\n            sz[v] +=\
    \ sz[u];\n        }\n        if(s[v].size()){\n            for (int i = 1; i <\
    \ s[v].size(); i++) {\n                if (sz[s[v][i]] > sz[s[v][0]]) swap(s[v][i],\
    \ s[v][0]);\n            }\n        }\n    }\n    inline void dfs2(int v){\n \
    \       id[v] = timer++;\n        if(s[v].empty())return;\n        h[s[v][0]]\
    \ = h[v];\n        dfs2(s[v][0]);\n        for (int i = 1; i < s[v].size(); i++)\
    \ {\n            h[s[v][i]] = s[v][i];\n            dfs2(s[v][i]);\n        }\n\
    \    }   \n    inline int q(int u, int v) {\n        int ans = 0;\n        while\
    \ (h[u] != h[v]) {\n            if (dep[h[u]] > dep[h[v]]) {\n               \
    \ ans = (ans + f.q(id[h[u]], id[u])) % mod;\n                u = p[h[u]];\n  \
    \          }\n            else {\n                ans = (ans + f.q(id[h[v]], id[v]))\
    \ % mod;\n                v = p[h[v]];\n            }\n        }\n        if (dep[u]\
    \ > dep[v]) swap(u, v);\n        ans = (ans + f.q(id[u], id[v])) % mod;\n    \
    \    return ans;\n    }\n    inline void u(int x, int y, int z) {\n        while\
    \ (h[x] != h[y]) {\n            if (dep[h[x]] > dep[h[y]]) {\n               \
    \ f.u(id[h[x]], id[x], z % mod);\n                x = p[h[x]];\n            }\n\
    \            else {\n                f.u(id[h[y]], id[y], z % mod);\n        \
    \        y = p[h[y]];\n            }\n        }\n        if (dep[x] > dep[y])\
    \ swap(x, y);\n        f.u(id[x], id[y], z);\n    }\n    inline void u(int x,\
    \ int z) {\n        f.u(id[x], id[x] + sz[x] - 1, z);\n    }\n    inline int q(int\
    \ x){\n        return f.q(id[x], id[x] + sz[x] - 1);\n    }\n};\n"
  code: "struct lsg{\n    int n, mod;\n    vector<int> t, lz, a;\n    inline int ls(int\
    \ x) {return x << 1;}\n    inline int rs(int x) {return x << 1 | 1;}\n    #define\
    \ m ((l + r) >> 1)\n    lsg(vector<int> a, int mod) :a(a), n(a.size()), mod(mod),\
    \ t(n << 2), lz(n << 2) {dfs(1, 0, n - 1);}\n    lsg(int n, int mod) : n(n), a(n,\
    \ 0), lz(n << 2), t(n<<2), mod(mod) {}\n    inline void dfs(int i, int l, int\
    \ r) {\n        if (l == r) {\n            t[i] = a[l] % mod;\n            return;\n\
    \        }\n        dfs(ls(i), l, m);\n        dfs(rs(i), m + 1, r);\n       \
    \ t[i] = (t[ls(i)] + t[rs(i)]) % mod;\n    }\n    inline void apl(int i, int l,\
    \ int r, int x) {\n        t[i] = (t[i] + ((r - l + 1) % mod * x % mod) % mod)\
    \ % mod;\n        lz[i] = (lz[i] + x) % mod;\n    }\n    inline void psh(int i,\
    \ int l, int r) {\n        if(!lz[i])return;\n        apl(ls(i), l, m, lz[i] %\
    \ mod);\n        apl(rs(i), m+1, r, lz[i] % mod);\n        lz[i] = 0;\n    }\n\
    \    inline void u(int i, int l, int r, int L, int R, int x) {\n        if (l\
    \ > R || r < L) return;\n        if (L <= l && r <= R) {\n            apl(i, l,\
    \ r, x);return;\n        }\n        psh(i, l, r);\n        u(ls(i), l, m, L, R,\
    \ x);\n        u(rs(i), m + 1, r, L, R, x);\n        t[i] = ((t[ls(i)]) + t[rs(i)])\
    \ % mod;\n    }\n    inline int q(int i, int l, int r, int L, int R) {\n     \
    \   if ( l > R || r < L) return 0;\n        if (L <= l && r <= R) {\n        \
    \    return t[i] % mod;\n        }\n        psh(i, l, r);\n        return (q(ls(i),\
    \ l, m, L,R) + q(rs(i), m + 1, r, L, R)) % mod;\n    }\n    inline int q(int l,\
    \ int r){\n        return q(1, 0, n - 1, l, r);\n    }\n    inline void u(int\
    \ l, int r, int x){\n        u(1, 0, n - 1, l, r, x);\n    }\n};  \nstruct HLD{\n\
    \    int n, timer, mod;\n    vector<vector<int>> a, s;\n    vector<int> dep, p,\
    \ sz, h, id;\n    lsg f;\n    HLD(vector<vector<int>> a, int root, int mod): a(a),\
    \ mod(mod), n(a.size()), s(n), dep(n), p(n), sz(n), h(n), id(n), f(n, mod), timer(0)\
    \ {\n        p[root] = -1;\n        dfs1(root);\n        h[root] = root;\n   \
    \     dfs2(root);\n    }   \n    inline void dfs1(int v) {\n        sz[v] = 1;\n\
    \        for (int u : a[v]) {\n            if (u == p[v]) continue;\n        \
    \    p[u] = v;\n            dep[u] = dep[v] + 1;\n            s[v].emplace_back(u);\n\
    \            dfs1(u);\n            sz[v] += sz[u];\n        }\n        if(s[v].size()){\n\
    \            for (int i = 1; i < s[v].size(); i++) {\n                if (sz[s[v][i]]\
    \ > sz[s[v][0]]) swap(s[v][i], s[v][0]);\n            }\n        }\n    }\n  \
    \  inline void dfs2(int v){\n        id[v] = timer++;\n        if(s[v].empty())return;\n\
    \        h[s[v][0]] = h[v];\n        dfs2(s[v][0]);\n        for (int i = 1; i\
    \ < s[v].size(); i++) {\n            h[s[v][i]] = s[v][i];\n            dfs2(s[v][i]);\n\
    \        }\n    }   \n    inline int q(int u, int v) {\n        int ans = 0;\n\
    \        while (h[u] != h[v]) {\n            if (dep[h[u]] > dep[h[v]]) {\n  \
    \              ans = (ans + f.q(id[h[u]], id[u])) % mod;\n                u =\
    \ p[h[u]];\n            }\n            else {\n                ans = (ans + f.q(id[h[v]],\
    \ id[v])) % mod;\n                v = p[h[v]];\n            }\n        }\n   \
    \     if (dep[u] > dep[v]) swap(u, v);\n        ans = (ans + f.q(id[u], id[v]))\
    \ % mod;\n        return ans;\n    }\n    inline void u(int x, int y, int z) {\n\
    \        while (h[x] != h[y]) {\n            if (dep[h[x]] > dep[h[y]]) {\n  \
    \              f.u(id[h[x]], id[x], z % mod);\n                x = p[h[x]];\n\
    \            }\n            else {\n                f.u(id[h[y]], id[y], z % mod);\n\
    \                y = p[h[y]];\n            }\n        }\n        if (dep[x] >\
    \ dep[y]) swap(x, y);\n        f.u(id[x], id[y], z);\n    }\n    inline void u(int\
    \ x, int z) {\n        f.u(id[x], id[x] + sz[x] - 1, z);\n    }\n    inline int\
    \ q(int x){\n        return f.q(id[x], id[x] + sz[x] - 1);\n    }\n};\n"
  dependsOn: []
  isVerificationFile: false
  path: hld.hpp
  requiredBy: []
  timestamp: '2025-05-17 19:44:43+05:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: hld.hpp
layout: document
redirect_from:
- /library/hld.hpp
- /library/hld.hpp.html
title: hld.hpp
---
