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
  bundledCode: "#line 2 \"string/prefix_function.hpp\"\n\n\ntemplate<typename E>\n\
    //prefix function\nVI<int> prefixfunction(E& S){\n    int n = int(S.size()),k;\n\
    \    Vi<int> p(n);\n    FOR(i,1,n){\n        k = p[i - 1];\n        while(S[i]\
    \ != S[k] && k > 0) k = p[k - 1];\n        if(s[i] == s[k]) ++k;\n        p[i]\
    \ = k;\n    }\n    return p;\n}\n"
  code: "#pragma once\n\n\ntemplate<typename E>\n//prefix function\nVI<int> prefixfunction(E&\
    \ S){\n    int n = int(S.size()),k;\n    Vi<int> p(n);\n    FOR(i,1,n){\n    \
    \    k = p[i - 1];\n        while(S[i] != S[k] && k > 0) k = p[k - 1];\n     \
    \   if(s[i] == s[k]) ++k;\n        p[i] = k;\n    }\n    return p;\n}"
  dependsOn: []
  isVerificationFile: false
  path: string/prefix_function.hpp
  requiredBy: []
  timestamp: '2024-08-30 11:48:08+05:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: string/prefix_function.hpp
layout: document
redirect_from:
- /library/string/prefix_function.hpp
- /library/string/prefix_function.hpp.html
title: string/prefix_function.hpp
---
