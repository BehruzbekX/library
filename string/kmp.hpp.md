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
  bundledCode: "#line 2 \"string/kmp.hpp\"\n\r\ntemplate<typename E>\r\nvector<int>\
    \ kmp(E& S){\r\n    int n = int(S.size()),k;\r\n    vector<int> p(n);\r\n    for(int\
    \ i=1;i<n;i++){\r\n        k = p[i - 1];\r\n        while(S[i] != S[k] && k >\
    \ 0) k = p[k - 1];\r\n        if(S[i] == S[k]) ++k;\r\n        p[i] = k;\r\n \
    \   }\r\n    return p;\r\n}\n"
  code: "#pragma once\r\n\r\ntemplate<typename E>\r\nvector<int> kmp(E& S){\r\n  \
    \  int n = int(S.size()),k;\r\n    vector<int> p(n);\r\n    for(int i=1;i<n;i++){\r\
    \n        k = p[i - 1];\r\n        while(S[i] != S[k] && k > 0) k = p[k - 1];\r\
    \n        if(S[i] == S[k]) ++k;\r\n        p[i] = k;\r\n    }\r\n    return p;\r\
    \n}"
  dependsOn: []
  isVerificationFile: false
  path: string/kmp.hpp
  requiredBy: []
  timestamp: '2025-01-31 21:31:14+05:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: string/kmp.hpp
layout: document
redirect_from:
- /library/string/kmp.hpp
- /library/string/kmp.hpp.html
title: string/kmp.hpp
---
