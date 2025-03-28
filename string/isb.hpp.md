---
data:
  _extendedDependsOn:
  - icon: ':warning:'
    path: string/zf.hpp
    title: string/zf.hpp
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':warning:'
  attributes:
    links: []
  bundledCode: "#line 2 \"string/isb.hpp\"\n\r\n#line 2 \"string/zf.hpp\"\n\r\n//https://i.ibb.co/jkCpXcq/image.png\r\
    \n//https://codeforces.com/edu/course/2/lesson/3/2\r\n\r\ntemplate<typename E>\r\
    \nvector<int> zf(const E& s){\r\n    int n = int(s.size());\r\n    vector<int>\
    \ z(n);\r\n    int l = 0,r = 0;\r\n    for(int i=1;i<n;i++){\r\n        if(i <\
    \ r) z[i] = min(r - i,z[i - l]);\r\n        while(i + z[i] < n && s[z[i]] == s[i\
    \ + z[i]])z[i]++;\r\n        if(i + z[i] > r) l = i,r = i + z[i];\r\n    }\r\n\
    \    return z;\r\n}\n#line 4 \"string/isb.hpp\"\n//check if T is substring of\
    \ S\r\ntemplate<typename X>\r\nbool is_substring(X& S,X& T){\r\n    int n = int(S.size()),m\
    \ = int(T.size());\r\n    string s;\r\n    for(auto&& x : S) s.emplace_back(x);\r\
    \n    for(auto&& x : T) s.emplace_back(x);\r\n    auto p = zf(s);\r\n    for(int\
    \ i=n;i<n + m;i++){\r\n        if(p[i] >= n) return true;\r\n    }\r\n    return\
    \ false;\r\n}\n"
  code: "#pragma once\r\n\r\n#include \"string/zf.hpp\"\r\n//check if T is substring\
    \ of S\r\ntemplate<typename X>\r\nbool is_substring(X& S,X& T){\r\n    int n =\
    \ int(S.size()),m = int(T.size());\r\n    string s;\r\n    for(auto&& x : S) s.emplace_back(x);\r\
    \n    for(auto&& x : T) s.emplace_back(x);\r\n    auto p = zf(s);\r\n    for(int\
    \ i=n;i<n + m;i++){\r\n        if(p[i] >= n) return true;\r\n    }\r\n    return\
    \ false;\r\n}"
  dependsOn:
  - string/zf.hpp
  isVerificationFile: false
  path: string/isb.hpp
  requiredBy: []
  timestamp: '2025-03-28 21:19:52+05:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: string/isb.hpp
layout: document
redirect_from:
- /library/string/isb.hpp
- /library/string/isb.hpp.html
title: string/isb.hpp
---
