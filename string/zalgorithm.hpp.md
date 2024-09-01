---
data:
  _extendedDependsOn: []
  _extendedRequiredBy:
  - icon: ':x:'
    path: string/is_substring.hpp
    title: string/is_substring.hpp
  _extendedVerifiedWith:
  - icon: ':x:'
    path: test/mytest/issubstring.test.cpp
    title: test/mytest/issubstring.test.cpp
  _isVerificationFailed: true
  _pathExtension: hpp
  _verificationStatusIcon: ':x:'
  attributes:
    links:
    - https://codeforces.com/edu/course/2/lesson/3/2
    - https://i.ibb.co/jkCpXcq/image.png
  bundledCode: "#line 2 \"string/zalgorithm.hpp\"\n\n//https://i.ibb.co/jkCpXcq/image.png\n\
    //https://codeforces.com/edu/course/2/lesson/3/2\n\ntemplate<typename E>\nvi zalgorithm(const\
    \ E& s){\n    int n = SZ(s);\n    VI<LL> z(n);\n    LL l = 0,r = 0;\n    FOR(i,1,n){\n\
    \        if(i < r) z[i] = min(r - i,z[i - l]);\n        while(i + z[i] < n &&\
    \ s[z[i]] == s[i + z[i]])z[i]++;\n        if(i + z[i] > r) l = i,r = i + z[i];\n\
    \    }\n    return z;\n}\n"
  code: "#pragma once\n\n//https://i.ibb.co/jkCpXcq/image.png\n//https://codeforces.com/edu/course/2/lesson/3/2\n\
    \ntemplate<typename E>\nvi zalgorithm(const E& s){\n    int n = SZ(s);\n    VI<LL>\
    \ z(n);\n    LL l = 0,r = 0;\n    FOR(i,1,n){\n        if(i < r) z[i] = min(r\
    \ - i,z[i - l]);\n        while(i + z[i] < n && s[z[i]] == s[i + z[i]])z[i]++;\n\
    \        if(i + z[i] > r) l = i,r = i + z[i];\n    }\n    return z;\n}"
  dependsOn: []
  isVerificationFile: false
  path: string/zalgorithm.hpp
  requiredBy:
  - string/is_substring.hpp
  timestamp: '2024-09-01 12:11:39+05:00'
  verificationStatus: LIBRARY_ALL_WA
  verifiedWith:
  - test/mytest/issubstring.test.cpp
documentation_of: string/zalgorithm.hpp
layout: document
redirect_from:
- /library/string/zalgorithm.hpp
- /library/string/zalgorithm.hpp.html
title: string/zalgorithm.hpp
---
