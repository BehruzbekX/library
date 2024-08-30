---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: other/fastio.hpp
    title: other/fastio.hpp
  - icon: ':heavy_check_mark:'
    path: random/base.hpp
    title: random/base.hpp
  - icon: ':heavy_check_mark:'
    path: string/is_substring.hpp
    title: string/is_substring.hpp
  - icon: ':heavy_check_mark:'
    path: string/zalgorithm.hpp
    title: string/zalgorithm.hpp
  - icon: ':heavy_check_mark:'
    path: template.hpp
    title: template.hpp
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: cpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    '*NOT_SPECIAL_COMMENTS*': ''
    PROBLEM: https://judge.yosupo.jp/problem/aplusb
    links:
    - https://judge.yosupo.jp/problem/aplusb
  bundledCode: "Traceback (most recent call last):\n  File \"/opt/hostedtoolcache/Python/3.12.5/x64/lib/python3.12/site-packages/onlinejudge_verify/documentation/build.py\"\
    , line 71, in _render_source_code_stat\n    bundled_code = language.bundle(stat.path,\
    \ basedir=basedir, options={'include_paths': [basedir]}).decode()\n          \
    \         ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n\
    \  File \"/opt/hostedtoolcache/Python/3.12.5/x64/lib/python3.12/site-packages/onlinejudge_verify/languages/cplusplus.py\"\
    , line 187, in bundle\n    bundler.update(path)\n  File \"/opt/hostedtoolcache/Python/3.12.5/x64/lib/python3.12/site-packages/onlinejudge_verify/languages/cplusplus_bundle.py\"\
    , line 312, in update\n    raise BundleErrorAt(path, i + 1, \"#pragma once found\
    \ in a non-first line\")\nonlinejudge_verify.languages.cplusplus_bundle.BundleErrorAt:\
    \ test/mytest/issubstring.test.cpp: line 3: #pragma once found in a non-first\
    \ line\n"
  code: "#define PROBLEM \"https://judge.yosupo.jp/problem/aplusb\"\n\n#pragma once\n\
    \n#include \"template.hpp\"\n#include \"other/fastio.hpp\"\n#include \"string/is_substring.hpp\"\
    \n#include \"random/base.hpp\"\ntemplate<typename X>\nbool naive_is_substring(X&\
    \ S, X& T) {\n    if (S.size() > T.size()) return false;\n    for (size_t i =\
    \ 0; i <= T.size() - S.size(); ++i) {\n        bool match = true;\n        for\
    \ (size_t j = 0; j < S.size(); ++j) {\n            if (T[i + j] != S[j]) {\n \
    \               match = false;\n                break;\n            }\n      \
    \  }\n        if (match) return true;\n    }\n    return false;\n}\nstring gen(int\
    \ n,char a ='a',char b = 'b'){\n    string res;\n    FOR(i,n){\n        res +=\
    \ char(RNG(a,b + 1));\n    }\n    return res;\n}\nvoid test(){\n    int n = RNG(1,100);\n\
    \    int m = RNG(n,200);\n\n    string s = gen(n),t = gen(m);\n    if(RNG(2) ==\
    \ 1) {\n        int pos = RNG(0,m - n + 1);\n        t.replace(pos,n,s);\n   \
    \ }\n    bool z = is_substring(s,t),ni = naive_is_substring(s,t);\n    assert(z\
    \ == ni);\n}\n\nsigned main(){\n    test();\n    LL(A,B);\n    W(A + B);\n}"
  dependsOn:
  - template.hpp
  - other/fastio.hpp
  - string/is_substring.hpp
  - string/zalgorithm.hpp
  - random/base.hpp
  isVerificationFile: true
  path: test/mytest/issubstring.test.cpp
  requiredBy: []
  timestamp: '2024-08-30 11:48:08+05:00'
  verificationStatus: TEST_ACCEPTED
  verifiedWith: []
documentation_of: test/mytest/issubstring.test.cpp
layout: document
redirect_from:
- /verify/test/mytest/issubstring.test.cpp
- /verify/test/mytest/issubstring.test.cpp.html
title: test/mytest/issubstring.test.cpp
---
