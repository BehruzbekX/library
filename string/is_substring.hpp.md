---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: string/zalgorithm.hpp
    title: string/zalgorithm.hpp
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: test/mytest/issubstring.test.cpp
    title: test/mytest/issubstring.test.cpp
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    links: []
  bundledCode: "#line 2 \"string/is_substring.hpp\"\n\n#line 2 \"string/zalgorithm.hpp\"\
    \n\n//https://i.ibb.co/jkCpXcq/image.png\n//https://codeforces.com/edu/course/2/lesson/3/2\n\
    \ntemplate<typename E>\nVI<LL> zalgorithm(const E& s){\n    int n = SZ(s);\n \
    \   VI<LL> z(n);\n    LL l = 0,r = 0;\n    FOR(i,1,n){\n        if(i < r) z[i]\
    \ = min(r - i,z[i - l]);\n        while(i + z[i] < n && s[z[i]] == s[i + z[i]])z[i]++;\n\
    \        if(i + z[i] > r) l = i,r = i + z[i];\n    }\n    return z;\n}\n#line\
    \ 4 \"string/is_substring.hpp\"\ntemplate<typename X>\nbool is_substring(X& S,X&\
    \ T){\n    int n = int(S.size()),m = int(T.size());\n    string s;\n    for(auto&&\
    \ x : S) s.PB(x);\n    for(auto&& x : T) s.PB(x);\n    auto p = zalgorithm(s);\n\
    \    FOR(i,n,n + m){\n        if(p[i] >= n) return true;\n    }\n    return false;\n\
    }\n"
  code: "#pragma once\n\n#include \"string/zalgorithm.hpp\"\ntemplate<typename X>\n\
    bool is_substring(X& S,X& T){\n    int n = int(S.size()),m = int(T.size());\n\
    \    string s;\n    for(auto&& x : S) s.PB(x);\n    for(auto&& x : T) s.PB(x);\n\
    \    auto p = zalgorithm(s);\n    FOR(i,n,n + m){\n        if(p[i] >= n) return\
    \ true;\n    }\n    return false;\n}"
  dependsOn:
  - string/zalgorithm.hpp
  isVerificationFile: false
  path: string/is_substring.hpp
  requiredBy: []
  timestamp: '2024-08-30 11:48:08+05:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - test/mytest/issubstring.test.cpp
documentation_of: string/is_substring.hpp
layout: document
redirect_from:
- /library/string/is_substring.hpp
- /library/string/is_substring.hpp.html
title: string/is_substring.hpp
---
