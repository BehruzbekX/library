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
  bundledCode: "#line 1 \"phi.cpp\"\nint phi(int n){\n    int result = n;\n    for(int\
    \ i = 2;i * i <= n;++i){\n        if(n % i == 0){\n            result -= result\
    \ / i;\n            while(n % i == 0) n /= i;\n        }\n    }\n    if(n > 1)\
    \ result-= result / n;\n    return result;\n}\n"
  code: "int phi(int n){\n    int result = n;\n    for(int i = 2;i * i <= n;++i){\n\
    \        if(n % i == 0){\n            result -= result / i;\n            while(n\
    \ % i == 0) n /= i;\n        }\n    }\n    if(n > 1) result-= result / n;\n  \
    \  return result;\n}"
  dependsOn: []
  isVerificationFile: false
  path: phi.cpp
  requiredBy: []
  timestamp: '2024-08-20 21:52:12+05:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: phi.cpp
layout: document
redirect_from:
- /library/phi.cpp
- /library/phi.cpp.html
title: phi.cpp
---
