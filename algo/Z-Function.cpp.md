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
  bundledCode: "#line 1 \"algo/Z-Function.cpp\"\ntemplate<typename T>\nvector<int>\
    \ z_function(T s) {\n    int n = s.size();\n    vector<int> z(n);\n    int l =\
    \ 0, r = 0;\n    for(int i = 1; i < n; i++) {\n        if(i < r) {\n         \
    \   z[i] = min(r - i, z[i - l]);\n        }\n        while(i + z[i] < n && s[z[i]]\
    \ == s[i + z[i]]) {\n            z[i]++;\n        }\n        if(i + z[i] > r)\
    \ {\n            l = i;\n            r = i + z[i];\n        }\n    }\n    return\
    \ z;\n}\n"
  code: "template<typename T>\nvector<int> z_function(T s) {\n    int n = s.size();\n\
    \    vector<int> z(n);\n    int l = 0, r = 0;\n    for(int i = 1; i < n; i++)\
    \ {\n        if(i < r) {\n            z[i] = min(r - i, z[i - l]);\n        }\n\
    \        while(i + z[i] < n && s[z[i]] == s[i + z[i]]) {\n            z[i]++;\n\
    \        }\n        if(i + z[i] > r) {\n            l = i;\n            r = i\
    \ + z[i];\n        }\n    }\n    return z;\n}"
  dependsOn: []
  isVerificationFile: false
  path: algo/Z-Function.cpp
  requiredBy: []
  timestamp: '2024-08-21 11:18:38+05:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: algo/Z-Function.cpp
layout: document
redirect_from:
- /library/algo/Z-Function.cpp
- /library/algo/Z-Function.cpp.html
title: algo/Z-Function.cpp
---
