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
  bundledCode: "#line 1 \"algo/phi.cpp\"\nint phi(int n){\n    int result = n;\n \
    \   for(int i = 2;i * i <= n;++i){\n        if(n % i == 0){\n            result\
    \ -= result / i;\n            while(n % i == 0) n /= i;\n        }\n    }\n  \
    \  if(n > 1) result-= result / n;\n    return result;\n}\n"
  code: "int phi(int n){\n    int result = n;\n    for(int i = 2;i * i <= n;++i){\n\
    \        if(n % i == 0){\n            result -= result / i;\n            while(n\
    \ % i == 0) n /= i;\n        }\n    }\n    if(n > 1) result-= result / n;\n  \
    \  return result;\n}"
  dependsOn: []
  isVerificationFile: false
  path: algo/phi.cpp
  requiredBy: []
  timestamp: '2024-08-21 11:18:38+05:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: algo/phi.cpp
layout: document
redirect_from:
- /library/algo/phi.cpp
- /library/algo/phi.cpp.html
title: algo/phi.cpp
---
