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
  bundledCode: "#line 2 \"dsu.hpp\"\n\n#define io(x) iota(x.begin(),x.end(),0)\n#define\
    \ res(x,n,v) x.resize(n,v)\n#define cmax(a,b) a=max((a),(b))\n#define cmin(a,b)\
    \ a=min((a),(b))\nstruct dsu{\n    vector<int>p,sz,s,mn,mx;\n    void init(int\
    \ n){\n        n++;\n        res(p,n,0);\n        res(s,n,1);\n        res(sz,n,1);\n\
    \        res(mn,n,0);\n        res(mx,n,0);\n        io(p);\n        io(mn);\n\
    \        io(mx);\n    }\n    int find(int x){return p[x]==x?x:p[x]=find(p[x]);}\n\
    \    bool con(int x,int y){return find(x)==find(y);}\n    bool merge(int u,int\
    \ v){\n        u=find(u),v=find(v);\n        if(u==v)return 0;\n        if(sz[u]<sz[v])swap(u,v);\n\
    \        p[v]=u;\n        // ans+=sz[u]*sz[v];\n        sz[u]+=sz[v];\n      \
    \  s[u]+=sz[v];\n        cmax(mx[u],mx[v]);\n        cmin(mn[u],mn[v]);\n    \
    \    return 1;\n    }\n    int gets(int x){return sz[find(x)];}\n    int getm(int\
    \ x){return mn[find(x)];}\n    int getmx(int x){return mx[find(x)];}\n};\n"
  code: "#pragma once\n\n#define io(x) iota(x.begin(),x.end(),0)\n#define res(x,n,v)\
    \ x.resize(n,v)\n#define cmax(a,b) a=max((a),(b))\n#define cmin(a,b) a=min((a),(b))\n\
    struct dsu{\n    vector<int>p,sz,s,mn,mx;\n    void init(int n){\n        n++;\n\
    \        res(p,n,0);\n        res(s,n,1);\n        res(sz,n,1);\n        res(mn,n,0);\n\
    \        res(mx,n,0);\n        io(p);\n        io(mn);\n        io(mx);\n    }\n\
    \    int find(int x){return p[x]==x?x:p[x]=find(p[x]);}\n    bool con(int x,int\
    \ y){return find(x)==find(y);}\n    bool merge(int u,int v){\n        u=find(u),v=find(v);\n\
    \        if(u==v)return 0;\n        if(sz[u]<sz[v])swap(u,v);\n        p[v]=u;\n\
    \        // ans+=sz[u]*sz[v];\n        sz[u]+=sz[v];\n        s[u]+=sz[v];\n \
    \       cmax(mx[u],mx[v]);\n        cmin(mn[u],mn[v]);\n        return 1;\n  \
    \  }\n    int gets(int x){return sz[find(x)];}\n    int getm(int x){return mn[find(x)];}\n\
    \    int getmx(int x){return mx[find(x)];}\n};"
  dependsOn: []
  isVerificationFile: false
  path: dsu.hpp
  requiredBy: []
  timestamp: '2025-03-28 21:19:52+05:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: dsu.hpp
layout: document
redirect_from:
- /library/dsu.hpp
- /library/dsu.hpp.html
title: dsu.hpp
---
