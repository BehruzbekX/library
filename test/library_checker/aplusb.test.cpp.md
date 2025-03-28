---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: true
  _pathExtension: cpp
  _verificationStatusIcon: ':x:'
  attributes: {}
  bundledCode: "Traceback (most recent call last):\n  File \"/opt/hostedtoolcache/Python/3.13.2/x64/lib/python3.13/site-packages/onlinejudge_verify/documentation/build.py\"\
    , line 71, in _render_source_code_stat\n    bundled_code = language.bundle(stat.path,\
    \ basedir=basedir, options={'include_paths': [basedir]}).decode()\n          \
    \         ~~~~~~~~~~~~~~~^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n\
    \  File \"/opt/hostedtoolcache/Python/3.13.2/x64/lib/python3.13/site-packages/onlinejudge_verify/languages/cplusplus.py\"\
    , line 187, in bundle\n    bundler.update(path)\n    ~~~~~~~~~~~~~~^^^^^^\n  File\
    \ \"/opt/hostedtoolcache/Python/3.13.2/x64/lib/python3.13/site-packages/onlinejudge_verify/languages/cplusplus_bundle.py\"\
    , line 401, in update\n    self.update(self._resolve(pathlib.Path(included), included_from=path))\n\
    \                ~~~~~~~~~~~~~^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n \
    \ File \"/opt/hostedtoolcache/Python/3.13.2/x64/lib/python3.13/site-packages/onlinejudge_verify/languages/cplusplus_bundle.py\"\
    , line 260, in _resolve\n    raise BundleErrorAt(path, -1, \"no such header\"\
    )\nonlinejudge_verify.languages.cplusplus_bundle.BundleErrorAt: other/fastio.hpp:\
    \ line -1: no such header\n"
  code: "#define PROBLEM \"https://judge.yosupo.jp/problem/aplusb\"\r\n\r\n#include\
    \ \"template.hpp\"\r\n\r\n#include \"other/fastio.hpp\"\r\n\r\n#include \"ds/fenwick/fenwick.hpp\"\
    \r\n#include \"ds/segtree/mergesorttree.hpp\"\r\n\r\n#include \"monoid/add.hpp\"\
    \r\n#include \"monoid/gcd.hpp\"\r\n#include \"monoid/xor.hpp\"\r\n#include \"\
    monoid/min.hpp\"\r\n#include \"monoid/max.hpp\"\r\n#include \"prime/miller.hpp\"\
    \r\n#include \"random/base.hpp\"\r\n#include \"random/shuffle.hpp\"\r\n\r\nvoid\
    \ solve() {\r\n     LL(A,B);\r\n     W(A + B);\r\n}\r\n\r\nsigned main() {\r\n\
    \    ios::sync_with_stdio(false), cin.tie(nullptr);\r\n    // TEST\r\n\r\n   \
    \ solve();\r\n}"
  dependsOn: []
  isVerificationFile: true
  path: test/library_checker/aplusb.test.cpp
  requiredBy: []
  timestamp: '1970-01-01 00:00:00+00:00'
  verificationStatus: TEST_WRONG_ANSWER
  verifiedWith: []
documentation_of: test/library_checker/aplusb.test.cpp
layout: document
redirect_from:
- /verify/test/library_checker/aplusb.test.cpp
- /verify/test/library_checker/aplusb.test.cpp.html
title: test/library_checker/aplusb.test.cpp
---
