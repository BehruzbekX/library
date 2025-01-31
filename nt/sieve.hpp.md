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
  bundledCode: "#line 2 \"nt/sieve.hpp\"\n\ntemplate<typename T = int>\nvector<T>\
    \ sieve(int LIM) {\n    vector<bool> isp(LIM+1,true);\n    isp[0]=isp[1]=0;\n\
    \    for(T i=2;i*i<=LIM;i++){\n        if(isp[i]){\n            for(int j=i*i;j<=LIM;j+=i)isp[j]=false;\n\
    \        }\n    }\n    vector<T> p;\n    for (T i = 2; i<= LIM;i++)if(isp[i])p.emplace_back(i);\n\
    \    return p;\n}\n"
  code: "#pragma once\n\ntemplate<typename T = int>\nvector<T> sieve(int LIM) {\n\
    \    vector<bool> isp(LIM+1,true);\n    isp[0]=isp[1]=0;\n    for(T i=2;i*i<=LIM;i++){\n\
    \        if(isp[i]){\n            for(int j=i*i;j<=LIM;j+=i)isp[j]=false;\n  \
    \      }\n    }\n    vector<T> p;\n    for (T i = 2; i<= LIM;i++)if(isp[i])p.emplace_back(i);\n\
    \    return p;\n}"
  dependsOn: []
  isVerificationFile: false
  path: nt/sieve.hpp
  requiredBy: []
  timestamp: '2025-01-31 21:31:14+05:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: nt/sieve.hpp
layout: document
redirect_from:
- /library/nt/sieve.hpp
- /library/nt/sieve.hpp.html
title: nt/sieve.hpp
---
