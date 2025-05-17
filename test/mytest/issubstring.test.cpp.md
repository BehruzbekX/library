---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: true
  _pathExtension: cpp
  _verificationStatusIcon: ':x:'
  attributes: {}
  bundledCode: "Traceback (most recent call last):\n  File \"/opt/hostedtoolcache/Python/3.13.3/x64/lib/python3.13/site-packages/onlinejudge_verify/documentation/build.py\"\
    , line 71, in _render_source_code_stat\n    bundled_code = language.bundle(stat.path,\
    \ basedir=basedir, options={'include_paths': [basedir]}).decode()\n          \
    \         ~~~~~~~~~~~~~~~^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n\
    \  File \"/opt/hostedtoolcache/Python/3.13.3/x64/lib/python3.13/site-packages/onlinejudge_verify/languages/cplusplus.py\"\
    , line 187, in bundle\n    bundler.update(path)\n    ~~~~~~~~~~~~~~^^^^^^\n  File\
    \ \"/opt/hostedtoolcache/Python/3.13.3/x64/lib/python3.13/site-packages/onlinejudge_verify/languages/cplusplus_bundle.py\"\
    , line 401, in update\n    self.update(self._resolve(pathlib.Path(included), included_from=path))\n\
    \                ~~~~~~~~~~~~~^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n \
    \ File \"/opt/hostedtoolcache/Python/3.13.3/x64/lib/python3.13/site-packages/onlinejudge_verify/languages/cplusplus_bundle.py\"\
    , line 260, in _resolve\n    raise BundleErrorAt(path, -1, \"no such header\"\
    )\nonlinejudge_verify.languages.cplusplus_bundle.BundleErrorAt: other/fastio.hpp:\
    \ line -1: no such header\n"
  code: "#define PROBLEM \"https://judge.yosupo.jp/problem/aplusb\"\r\n\r\n\r\n\r\n\
    #include \"template.hpp\"\r\n#include \"other/fastio.hpp\"\r\n#include \"string/is_substring.hpp\"\
    \r\n#include \"random/base.hpp\"\r\ntemplate<typename X>\r\nbool naive_is_substring(X&\
    \ S, X& T) {\r\n    if (S.size() > T.size()) return false;\r\n    for (size_t\
    \ i = 0; i <= T.size() - S.size(); ++i) {\r\n        bool match = true;\r\n  \
    \      for (size_t j = 0; j < S.size(); ++j) {\r\n            if (T[i + j] !=\
    \ S[j]) {\r\n                match = false;\r\n                break;\r\n    \
    \        }\r\n        }\r\n        if (match) return true;\r\n    }\r\n    return\
    \ false;\r\n}\r\nstring gen(int n,char a ='a',char b = 'b'){\r\n    string res;\r\
    \n    FOR(i,n){\r\n        res += char(RNG(a,b + 1));\r\n    }\r\n    return res;\r\
    \n}\r\nvoid test(){\r\n    int n = RNG(1,100);\r\n    int m = RNG(n,200);\r\n\r\
    \n    string s = gen(n),t = gen(m);\r\n    if(RNG(2) == 1) {\r\n        int pos\
    \ = RNG(0,m - n + 1);\r\n        t.replace(pos,n,s);\r\n    }\r\n    bool z =\
    \ is_substring(s,t),ni = naive_is_substring(s,t);\r\n    assert(z == ni);\r\n\
    }\r\n\r\nsigned main(){\r\n    test();\r\n    LL(A,B);\r\n    W(A + B);\r\n}"
  dependsOn: []
  isVerificationFile: true
  path: test/mytest/issubstring.test.cpp
  requiredBy: []
  timestamp: '1970-01-01 00:00:00+00:00'
  verificationStatus: TEST_WRONG_ANSWER
  verifiedWith: []
documentation_of: test/mytest/issubstring.test.cpp
layout: document
redirect_from:
- /verify/test/mytest/issubstring.test.cpp
- /verify/test/mytest/issubstring.test.cpp.html
title: test/mytest/issubstring.test.cpp
---
