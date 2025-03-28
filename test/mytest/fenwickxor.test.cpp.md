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
    \ \"template.hpp\"\r\n#include \"other/fastio.hpp\"\r\n#include \"random/base.hpp\"\
    \r\n#include \"ds/fenwick/rangefenwick.hpp\"\r\n#include \"monoid/xor.hpp\"\r\n\
    \r\nstruct Naive {\r\n    vi arr;\r\n    Naive(int n) : arr(n + 1, 0) {}\r\n\r\
    \n    void add(int l, int r, ll x) {\r\n        for (int i = l; i <= r; ++i) {\r\
    \n            arr[i] ^= x;  // XOR update\r\n        }\r\n    }\r\n\r\n    ll\
    \ get(int l, int r) {\r\n        ll res = 0;\r\n        for (int i = l; i <= r;\
    \ ++i) {\r\n            res ^= arr[i];  // XOR query\r\n        }\r\n        return\
    \ res;\r\n    }\r\n};\r\nvoid test(){\r\n    const int N = RNG(1,100);\r\n   \
    \ const int Q = RNG(1,100);\r\n    vi arr(N);\r\n    FOR(i,N) arr[i] = RNG(-100,100);\r\
    \n    RFenwick<Monoid_Xor<ll>> fenwick(arr);\r\n    Naive naive(N);\r\n    for\
    \ (int i = 0; i < N; ++i) {\r\n        naive.add(i + 1, i + 1, arr[i]);\r\n  \
    \  }\r\n    FOR(Q) {\r\n        int type = RNG(1, 3);  \r\n        int l = RNG(1,\
    \ N + 1);\r\n        int r = RNG(l, N + 1);\r\n        if (type == 1) {\r\n  \
    \          ll x = RNG(-50, 50);\r\n            fenwick.update(l, r, x);\r\n  \
    \          naive.add(l, r, x);\r\n        } else {\r\n            ll fenwick_result\
    \ = fenwick.get(l, r);\r\n            ll naive_result = naive.get(l, r);\r\n \
    \           assert(fenwick_result == naive_result);\r\n        }\r\n    }\r\n\r\
    \n}\r\nsigned main(){\r\n    test();\r\n    LL(A,B);\r\n    W(A + B);\r\n}"
  dependsOn: []
  isVerificationFile: true
  path: test/mytest/fenwickxor.test.cpp
  requiredBy: []
  timestamp: '1970-01-01 00:00:00+00:00'
  verificationStatus: TEST_WRONG_ANSWER
  verifiedWith: []
documentation_of: test/mytest/fenwickxor.test.cpp
layout: document
redirect_from:
- /verify/test/mytest/fenwickxor.test.cpp
- /verify/test/mytest/fenwickxor.test.cpp.html
title: test/mytest/fenwickxor.test.cpp
---
