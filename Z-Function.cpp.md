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
  bundledCode: "#line 1 \"Z-Function.cpp\"\ntemplate<typename T>\nvector<int> z_function(T\
    \ s) {\n    int n = s.size();\n    vector<int> z(n);\n    int l = 0, r = 0;\n\
    \    for(int i = 1; i < n; i++) {\n        if(i < r) {\n            z[i] = min(r\
    \ - i, z[i - l]);\n        }\n        while(i + z[i] < n && s[z[i]] == s[i + z[i]])\
    \ {\n            z[i]++;\n        }\n        if(i + z[i] > r) {\n            l\
    \ = i;\n            r = i + z[i];\n        }\n    }\n    return z;\n}\n"
  code: "template<typename T>\nvector<int> z_function(T s) {\n    int n = s.size();\n\
    \    vector<int> z(n);\n    int l = 0, r = 0;\n    for(int i = 1; i < n; i++)\
    \ {\n        if(i < r) {\n            z[i] = min(r - i, z[i - l]);\n        }\n\
    \        while(i + z[i] < n && s[z[i]] == s[i + z[i]]) {\n            z[i]++;\n\
    \        }\n        if(i + z[i] > r) {\n            l = i;\n            r = i\
    \ + z[i];\n        }\n    }\n    return z;\n}"
  dependsOn: []
  isVerificationFile: false
  path: Z-Function.cpp
  requiredBy: []
  timestamp: '2024-08-20 21:52:12+05:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: Z-Function.cpp
layout: document
redirect_from:
- /library/Z-Function.cpp
- /library/Z-Function.cpp.html
title: Z-Function.cpp
---
