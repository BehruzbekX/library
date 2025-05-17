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
  code: "#define PROBLEM \"https://judge.yosupo.jp/problem/point_add_range_sum\"\r\
    \n\r\n#include \"template.hpp\"\r\n#include \"other/fastio.hpp\"\r\n#include \"\
    monoid/add.hpp\"\r\n#include \"ds/fenwick/fenwick.hpp\"\r\n\r\nvoid solve(){\r\
    \n    LL(N,Q);\r\n    VEC(ll,a,N);\r\n    Fenwick<Monoid_Add<ll>> fenwick(a);\r\
    \n    FOR(Q){\r\n        INT(type,l,r);\r\n        if(type == 0) l++,fenwick.update(l,r);\r\
    \n        else ++l,W(fenwick.get(l,r));\r\n    }\r\n}\r\nsigned main(){\r\n  \
    \  ios::sync_with_stdio(false),cin.tie(nullptr);\r\n    solve();\r\n}"
  dependsOn: []
  isVerificationFile: true
  path: test/library_checker/point_add_range_sum.test.cpp
  requiredBy: []
  timestamp: '1970-01-01 00:00:00+00:00'
  verificationStatus: TEST_WRONG_ANSWER
  verifiedWith: []
documentation_of: test/library_checker/point_add_range_sum.test.cpp
layout: document
redirect_from:
- /verify/test/library_checker/point_add_range_sum.test.cpp
- /verify/test/library_checker/point_add_range_sum.test.cpp.html
title: test/library_checker/point_add_range_sum.test.cpp
---
