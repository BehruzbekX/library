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
  bundledCode: "#line 1 \"hld_normal.hpp\"\nstruct sg{\n    int n;\n    vector<int>\
    \ t;\n    inline int op(int a, int b) {return max(a, b);}\n    inline void bud(vector<int>\
    \ a) {\n        n = (a.size());\n        t.resize(n<<1);\n        for (int i =\
    \ 0; i < n; i++) t[n + i] = a[i];\n        for (int i = n - 1; i >= 0; --i) t[i]\
    \ = max(t[i << 1], t[i << 1 | 1]);\n    }\n    inline int q(int l, int r){\n \
    \       int ans = 0;\n        for(l += n, r += n + 1; l < r; l >>= 1, r >>= 1)\
    \ {\n            if (l & 1) ans = max(ans, t[l++]);\n            if (r & 1) ans\
    \ = max(ans, t[--r]);\n        }\n        return ans;\n    }\n    inline void\
    \ u(int id, int x) {\n        for (t[id += n] = x; id > 1; id >>= 1) t[id>>1]=max(t[id],\
    \ t[id^1]);\n    }    \n};\nstruct HLD{ \n    int n, timer = 0;\n    sg f;\n \
    \   vector<vector<int>> a, child;\n    vector<int> depth, subtree, pos, parent,\
    \ head, e;\n  \n    HLD(vector<vector<int>> a, vector<int> e, int root = 0) :\
    \ n(a.size()), a(a), depth(n), subtree(n), pos(n), parent(n), head(n), child(n),\
    \ timer(0), e(n){\n        parent[root] = -1;\n        depth[root] = 0; \n   \
    \     dfs1(root);\n        head[root] = root;\n        dfs2(root);\n        for\
    \ (int i = 0; i < n; i++) this->e[pos[i]] = e[i];\n        f.bud(this->e);\n \
    \   }\n    inline void dfs1(int v) {\n        subtree[v] = 1;\n        for (int\
    \ u : a[v]) {\n            if(u == parent[v]) continue;\n            parent[u]\
    \ = v;\n            depth[u] = depth[v] + 1;\n            dfs1(u);\n         \
    \   subtree[v] += subtree[u];\n            child[v].emplace_back(u);\n       \
    \ }\n        if (child[v].size()) {\n            for (int i = 1; i < child[v].size();\
    \ i++) {\n                if (subtree[child[v][i]] > subtree[child[v][0]]) swap(child[v][i],\
    \ child[v][0]);\n            }\n    }\n    }\n    inline void dfs2(int v) {\n\
    \        pos[v] = timer++;\n        if(child[v].empty())return;\n        head[child[v][0]]\
    \ = head[v];\n        dfs2(child[v][0]);\n        for (int i = 1; i < child[v].size();\
    \ i++) {\n            head[child[v][i]] = child[v][i];\n            dfs2(child[v][i]);\n\
    \        }\n    }\n    inline void u(int i, int x) {\n        f.u(pos[i], x);\n\
    \    }\n    inline int q(int u, int v) {\n        int ans = 0;\n        while\
    \ (head[u] != head[v]) {\n            if (depth[head[u]] > depth[head[v]]) {\n\
    \                ans = max(ans, f.q(pos[head[u]], pos[u]));\n                u\
    \ = parent[head[u]];\n            }\n            else {\n                ans =\
    \ max(ans, f.q(pos[head[v]], pos[v]));\n                v = parent[head[v]];\n\
    \            }\n        }\n        if(depth[u] > depth[v]) swap(u, v);\n     \
    \   return max(ans, f.q(pos[u], pos[v]));\n    }\n};\n"
  code: "struct sg{\n    int n;\n    vector<int> t;\n    inline int op(int a, int\
    \ b) {return max(a, b);}\n    inline void bud(vector<int> a) {\n        n = (a.size());\n\
    \        t.resize(n<<1);\n        for (int i = 0; i < n; i++) t[n + i] = a[i];\n\
    \        for (int i = n - 1; i >= 0; --i) t[i] = max(t[i << 1], t[i << 1 | 1]);\n\
    \    }\n    inline int q(int l, int r){\n        int ans = 0;\n        for(l +=\
    \ n, r += n + 1; l < r; l >>= 1, r >>= 1) {\n            if (l & 1) ans = max(ans,\
    \ t[l++]);\n            if (r & 1) ans = max(ans, t[--r]);\n        }\n      \
    \  return ans;\n    }\n    inline void u(int id, int x) {\n        for (t[id +=\
    \ n] = x; id > 1; id >>= 1) t[id>>1]=max(t[id], t[id^1]);\n    }    \n};\nstruct\
    \ HLD{ \n    int n, timer = 0;\n    sg f;\n    vector<vector<int>> a, child;\n\
    \    vector<int> depth, subtree, pos, parent, head, e;\n  \n    HLD(vector<vector<int>>\
    \ a, vector<int> e, int root = 0) : n(a.size()), a(a), depth(n), subtree(n), pos(n),\
    \ parent(n), head(n), child(n), timer(0), e(n){\n        parent[root] = -1;\n\
    \        depth[root] = 0; \n        dfs1(root);\n        head[root] = root;\n\
    \        dfs2(root);\n        for (int i = 0; i < n; i++) this->e[pos[i]] = e[i];\n\
    \        f.bud(this->e);\n    }\n    inline void dfs1(int v) {\n        subtree[v]\
    \ = 1;\n        for (int u : a[v]) {\n            if(u == parent[v]) continue;\n\
    \            parent[u] = v;\n            depth[u] = depth[v] + 1;\n          \
    \  dfs1(u);\n            subtree[v] += subtree[u];\n            child[v].emplace_back(u);\n\
    \        }\n        if (child[v].size()) {\n            for (int i = 1; i < child[v].size();\
    \ i++) {\n                if (subtree[child[v][i]] > subtree[child[v][0]]) swap(child[v][i],\
    \ child[v][0]);\n            }\n    }\n    }\n    inline void dfs2(int v) {\n\
    \        pos[v] = timer++;\n        if(child[v].empty())return;\n        head[child[v][0]]\
    \ = head[v];\n        dfs2(child[v][0]);\n        for (int i = 1; i < child[v].size();\
    \ i++) {\n            head[child[v][i]] = child[v][i];\n            dfs2(child[v][i]);\n\
    \        }\n    }\n    inline void u(int i, int x) {\n        f.u(pos[i], x);\n\
    \    }\n    inline int q(int u, int v) {\n        int ans = 0;\n        while\
    \ (head[u] != head[v]) {\n            if (depth[head[u]] > depth[head[v]]) {\n\
    \                ans = max(ans, f.q(pos[head[u]], pos[u]));\n                u\
    \ = parent[head[u]];\n            }\n            else {\n                ans =\
    \ max(ans, f.q(pos[head[v]], pos[v]));\n                v = parent[head[v]];\n\
    \            }\n        }\n        if(depth[u] > depth[v]) swap(u, v);\n     \
    \   return max(ans, f.q(pos[u], pos[v]));\n    }\n};"
  dependsOn: []
  isVerificationFile: false
  path: hld_normal.hpp
  requiredBy: []
  timestamp: '2025-05-17 19:47:04+05:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: hld_normal.hpp
layout: document
redirect_from:
- /library/hld_normal.hpp
- /library/hld_normal.hpp.html
title: hld_normal.hpp
---
