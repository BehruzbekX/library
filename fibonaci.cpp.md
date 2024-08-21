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
  bundledCode: "#line 1 \"fibonaci.cpp\"\nconst long M = 1000000007; // modulo\nmap<long,\
    \ long> F;\n\nlong f(long n) {\n    if (F.count(n)) return F[n];\n    long k=n/2;\n\
    \    if (n%2==0) { // n=2*k\n        return F[n] = (f(k)*f(k) + f(k-1)*f(k-1))\
    \ % M;\n    } else { // n=2*k+1\n        return F[n] = (f(k)*f(k+1) + f(k-1)*f(k))\
    \ % M;\n    }\n}\nF[0]=F[1]=1;\n\n"
  code: "const long M = 1000000007; // modulo\nmap<long, long> F;\n\nlong f(long n)\
    \ {\n    if (F.count(n)) return F[n];\n    long k=n/2;\n    if (n%2==0) { // n=2*k\n\
    \        return F[n] = (f(k)*f(k) + f(k-1)*f(k-1)) % M;\n    } else { // n=2*k+1\n\
    \        return F[n] = (f(k)*f(k+1) + f(k-1)*f(k)) % M;\n    }\n}\nF[0]=F[1]=1;\n\
    \n"
  dependsOn: []
  isVerificationFile: false
  path: fibonaci.cpp
  requiredBy: []
  timestamp: '2024-08-20 21:52:12+05:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: fibonaci.cpp
layout: document
redirect_from:
- /library/fibonaci.cpp
- /library/fibonaci.cpp.html
title: fibonaci.cpp
---
