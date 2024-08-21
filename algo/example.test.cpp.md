---
data:
  _extendedDependsOn:
  - icon: ':x:'
    path: algo/my_template.hpp
    title: algo/my_template.hpp
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: true
  _pathExtension: cpp
  _verificationStatusIcon: ':x:'
  attributes: {}
  bundledCode: "Traceback (most recent call last):\n  File \"/opt/hostedtoolcache/Python/3.12.4/x64/lib/python3.12/site-packages/onlinejudge_verify/documentation/build.py\"\
    , line 71, in _render_source_code_stat\n    bundled_code = language.bundle(stat.path,\
    \ basedir=basedir, options={'include_paths': [basedir]}).decode()\n          \
    \         ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n\
    \  File \"/opt/hostedtoolcache/Python/3.12.4/x64/lib/python3.12/site-packages/onlinejudge_verify/languages/cplusplus.py\"\
    , line 187, in bundle\n    bundler.update(path)\n  File \"/opt/hostedtoolcache/Python/3.12.4/x64/lib/python3.12/site-packages/onlinejudge_verify/languages/cplusplus_bundle.py\"\
    , line 401, in update\n    self.update(self._resolve(pathlib.Path(included), included_from=path))\n\
    \  File \"/opt/hostedtoolcache/Python/3.12.4/x64/lib/python3.12/site-packages/onlinejudge_verify/languages/cplusplus_bundle.py\"\
    , line 401, in update\n    self.update(self._resolve(pathlib.Path(included), included_from=path))\n\
    \                ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n \
    \ File \"/opt/hostedtoolcache/Python/3.12.4/x64/lib/python3.12/site-packages/onlinejudge_verify/languages/cplusplus_bundle.py\"\
    , line 260, in _resolve\n    raise BundleErrorAt(path, -1, \"no such header\"\
    )\nonlinejudge_verify.languages.cplusplus_bundle.BundleErrorAt: bits/stdc++.h:\
    \ line -1: no such header\n"
  code: "\n#include \"my_template.hpp\"\n#define PROBLEM \"https://onlinejudge.u-aizu.ac.jp/courses/lesson/1/ALDS1/4/ALDS1_4_B\"\
    \n#include <my_template.hpp>\nusing namespace std;\n\nsigned main() {\n    INT(n);\n\
    \    VEC(int,a,n);\n    INT(q);\n    int cnt = 0;\n    while (q --) {\n      \
    \  INT(t_i);\n        cnt += binary_search(ALL(s), t_i);\n    }\n    W(cnt);\n\
    \    return 0;\n}\n"
  dependsOn:
  - algo/my_template.hpp
  isVerificationFile: true
  path: algo/example.test.cpp
  requiredBy: []
  timestamp: '2024-08-21 14:35:22+05:00'
  verificationStatus: TEST_WRONG_ANSWER
  verifiedWith: []
documentation_of: algo/example.test.cpp
layout: document
redirect_from:
- /verify/algo/example.test.cpp
- /verify/algo/example.test.cpp.html
title: algo/example.test.cpp
---
