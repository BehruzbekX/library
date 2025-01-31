---
data:
  _extendedDependsOn: []
  _extendedRequiredBy:
  - icon: ':warning:'
    path: string/isb.hpp
    title: string/isb.hpp
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':warning:'
  attributes:
    links:
    - https://codeforces.com/edu/course/2/lesson/3/2
    - https://i.ibb.co/jkCpXcq/image.png
  bundledCode: "#line 2 \"string/zf.hpp\"\n\r\n//https://i.ibb.co/jkCpXcq/image.png\r\
    \n//https://codeforces.com/edu/course/2/lesson/3/2\r\n\r\ntemplate<typename E>\r\
    \nvi zf(const E& s){\r\n    int n = sz(s);\r\n    vi z(n);\r\n    ll l = 0,r =\
    \ 0;\r\n    FOR(i,1,n){\r\n        if(i < r) z[i] = min(r - i,z[i - l]);\r\n \
    \       while(i + z[i] < n && s[z[i]] == s[i + z[i]])z[i]++;\r\n        if(i +\
    \ z[i] > r) l = i,r = i + z[i];\r\n    }\r\n    return z;\r\n}\n"
  code: "#pragma once\r\n\r\n//https://i.ibb.co/jkCpXcq/image.png\r\n//https://codeforces.com/edu/course/2/lesson/3/2\r\
    \n\r\ntemplate<typename E>\r\nvi zf(const E& s){\r\n    int n = sz(s);\r\n   \
    \ vi z(n);\r\n    ll l = 0,r = 0;\r\n    FOR(i,1,n){\r\n        if(i < r) z[i]\
    \ = min(r - i,z[i - l]);\r\n        while(i + z[i] < n && s[z[i]] == s[i + z[i]])z[i]++;\r\
    \n        if(i + z[i] > r) l = i,r = i + z[i];\r\n    }\r\n    return z;\r\n}"
  dependsOn: []
  isVerificationFile: false
  path: string/zf.hpp
  requiredBy:
  - string/isb.hpp
  timestamp: '2025-01-31 21:31:14+05:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: string/zf.hpp
layout: document
redirect_from:
- /library/string/zf.hpp
- /library/string/zf.hpp.html
title: string/zf.hpp
---
