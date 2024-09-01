---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: test/library_checker/aplusb.test.cpp
    title: test/library_checker/aplusb.test.cpp
  - icon: ':heavy_check_mark:'
    path: test/library_checker/point_add_range_sum.test.cpp
    title: test/library_checker/point_add_range_sum.test.cpp
  - icon: ':heavy_check_mark:'
    path: test/mytest/fenwickraq.test.cpp
    title: test/mytest/fenwickraq.test.cpp
  - icon: ':heavy_check_mark:'
    path: test/mytest/fenwickxor.test.cpp
    title: test/mytest/fenwickxor.test.cpp
  - icon: ':x:'
    path: test/mytest/issubstring.test.cpp
    title: test/mytest/issubstring.test.cpp
  _isVerificationFailed: true
  _pathExtension: hpp
  _verificationStatusIcon: ':question:'
  attributes:
    links: []
  bundledCode: "#line 1 \"other/fastio.hpp\"\nistream &operator>>(istream &in, i128\
    \ &a) {\n        string s;\n        in >> s;\n        a = 0;\n        for (auto\
    \ &it: s) if (isdigit(it)) a = a * 10 + it - '0';\n        if (s[0] == '-') a\
    \ *= -1;\n        return in;\n    }\n\n    ostream &operator<<(ostream &os, const\
    \ i128 &v) {\n        if (v == 0) return (os << \"0\");\n        i128 num = v;\n\
    \        if (v < 0) os << '-', num = -num;\n        string s;\n        for (;\
    \ num > 0; num /= 10) s.PB((char) (num % 10) + '0');\n        reverse(all(s));\n\
    \        return (os << s);\n    }\n\n    template<class t>\n    istream &operator>>(istream\
    \ &in, vector<t> &a) {\n        for (auto &nx: a) {\n            in >> nx;\n \
    \       }\n        return in;\n    }\n    template<class t>\n    istream &operator>>(istream\
    \ &in, vector<vector<t>> &a) {\n        for (auto &nx: a) for(auto &ny : nx) in\
    \ >> ny;\n        return in;\n    }\n    template<class t, class u>\n    istream\
    \ &operator>>(istream &in, pair<t, u> &p) {\n        in >> p.first >> p.second;\n\
    \        return in;\n    }\n    template<class t, class u>\n    istream &operator>>(istream\
    \ &in, vector<pair<t, u> > &p) {\n        for (auto &nx: p) in >> nx;\n      \
    \  return in;\n    }\n\n    template<class t>\n    istream &operator>>(istream\
    \ &in, vector<pair<t, t>> &p) {\n        for (auto &nx: p) in >> nx;\n       \
    \ return in;\n    }\n\n    template<class T>\n    void _R(T &x) { cin >> x; }\n\
    \n    void R() {\n    }\n\n    template<class T, class... U>\n    void R(T &head,\
    \ U &... tail) {\n        _R(head);\n        R(tail...);\n    }\n\n    template<class\
    \ T>\n    void _W(const T &x) {\n        cout << (x);\n    }\n\n    template<class\
    \ T, class U>\n    void _W(const pair<T, U> &x) {\n        _W(x.F);\n        cout\
    \ << ' ';\n        _W(x.S);\n    }\n\n    template<class T>\n    void _W(const\
    \ vector<T> &x) {\n        for (auto nx = x.begin(); nx != x.end(); _W(*nx++))\
    \ if (nx != x.cbegin()) cout << \" \";\n    }\n\n    template<class T>\n    void\
    \ _W(const set<T> &x) {\n        for (auto nx = x.begin(); nx != x.end(); _W(*nx++))\
    \ if (nx != x.cbegin()) cout << \" \";\n    }\n\n    template<class T>\n    void\
    \ _W(const multiset<T> &x) {\n        for (auto nx = x.begin(); nx != x.end();\
    \ _W(*nx++)) if (nx != x.cbegin()) cout << \" \";\n    }\n\n    void W() {\n \
    \   }\n\n    template<class T, class... U>\n    void W(const T &head, const U\
    \ &... tail) {\n        _W(head);\n        cout << (sizeof...(tail) ? ' ' : '\\\
    n');\n        W(tail...);\n    }\n\n#if defined(LOCAL)\n#define SHOW(...) SHOW_IMPL(__VA_ARGS__,\
    \ SHOW6, SHOW5, SHOW4, SHOW3, SHOW2, SHOW1)(__VA_ARGS__)\n#define SHOW_IMPL(_1,\
    \ _2, _3, _4, _5, _6, NAME, ...) NAME\n#define SHOW1(x) W(#x, \"=\", (x))\n#define\
    \ SHOW2(x, y) W(#x, \"=\", (x), #y, \"=\", (y))\n#define SHOW3(x, y, z) W(#x,\
    \ \"=\", (x), #y, \"=\", (y), #z, \"=\", (z))\n#define SHOW4(x, y, z, w) W(#x,\
    \ \"=\", (x), #y, \"=\", (y), #z, \"=\", (z), #w, \"=\", (w))\n#define SHOW5(x,\
    \ y, z, w, v) W(#x, \"=\", (x), #y, \"=\", (y), #z, \"=\", (z), #w, \"=\", (w),\
    \ #v, \"=\", (v))\n#define SHOW6(x, y, z, w, v, u) W(#x, \"=\", (x), #y, \"=\"\
    , (y), #z, \"=\", (z), #w, \"=\", (w), #v, \"=\", (v), #u, \"=\", (u))\n#else\n\
    #define SHOW(...)\n#endif\n\n#define INT(...) \\\n    int __VA_ARGS__; \\\n  \
    \  R(__VA_ARGS__);\n#define LL(...) \\\n    ll __VA_ARGS__; \\\n    R(__VA_ARGS__);\n\
    #define U64(...) \\\n    u64 __VA_ARGS__; \\\n    R(__VA_ARGS__);\n#define STR(...)\
    \ \\\n    string __VA_ARGS__; \\\n    R(__VA_ARGS__);\n#define CHAR(...) \\\n\
    \    char __VA_ARGS__; \\\n    R(__VA_ARGS__);\n#define DB(...) \\\n    long double\
    \ __VA_ARGS__; \\\n    R(__VA_ARGS__);\n#define VEC(type, name, size) \\\n  vector<type>\
    \ name(size);    \\\n  R(name)\n#define VECC(type, name, h, w) \\\n    vector<vector<type>>\
    \ name(h,vector<type>(w));\\\n    R(name)\n\nvoid YES(bool x = 1) {W(x ? \"YES\"\
    \ : \"NO\");}\nvoid NO(bool x = 1) {YES(!x);}\nvoid Yes(bool x = 1) {W(x ? \"\
    Yes\" : \"No\");}\nvoid No(bool x = 1) {YES(!x);}\nvoid yes(bool x = 1) {W(x ?\
    \ \"yes\" : \"no\");}\nvoid no(bool x = 1) {YES(!x);}\n"
  code: "istream &operator>>(istream &in, i128 &a) {\n        string s;\n        in\
    \ >> s;\n        a = 0;\n        for (auto &it: s) if (isdigit(it)) a = a * 10\
    \ + it - '0';\n        if (s[0] == '-') a *= -1;\n        return in;\n    }\n\n\
    \    ostream &operator<<(ostream &os, const i128 &v) {\n        if (v == 0) return\
    \ (os << \"0\");\n        i128 num = v;\n        if (v < 0) os << '-', num = -num;\n\
    \        string s;\n        for (; num > 0; num /= 10) s.PB((char) (num % 10)\
    \ + '0');\n        reverse(all(s));\n        return (os << s);\n    }\n\n    template<class\
    \ t>\n    istream &operator>>(istream &in, vector<t> &a) {\n        for (auto\
    \ &nx: a) {\n            in >> nx;\n        }\n        return in;\n    }\n   \
    \ template<class t>\n    istream &operator>>(istream &in, vector<vector<t>> &a)\
    \ {\n        for (auto &nx: a) for(auto &ny : nx) in >> ny;\n        return in;\n\
    \    }\n    template<class t, class u>\n    istream &operator>>(istream &in, pair<t,\
    \ u> &p) {\n        in >> p.first >> p.second;\n        return in;\n    }\n  \
    \  template<class t, class u>\n    istream &operator>>(istream &in, vector<pair<t,\
    \ u> > &p) {\n        for (auto &nx: p) in >> nx;\n        return in;\n    }\n\
    \n    template<class t>\n    istream &operator>>(istream &in, vector<pair<t, t>>\
    \ &p) {\n        for (auto &nx: p) in >> nx;\n        return in;\n    }\n\n  \
    \  template<class T>\n    void _R(T &x) { cin >> x; }\n\n    void R() {\n    }\n\
    \n    template<class T, class... U>\n    void R(T &head, U &... tail) {\n    \
    \    _R(head);\n        R(tail...);\n    }\n\n    template<class T>\n    void\
    \ _W(const T &x) {\n        cout << (x);\n    }\n\n    template<class T, class\
    \ U>\n    void _W(const pair<T, U> &x) {\n        _W(x.F);\n        cout << '\
    \ ';\n        _W(x.S);\n    }\n\n    template<class T>\n    void _W(const vector<T>\
    \ &x) {\n        for (auto nx = x.begin(); nx != x.end(); _W(*nx++)) if (nx !=\
    \ x.cbegin()) cout << \" \";\n    }\n\n    template<class T>\n    void _W(const\
    \ set<T> &x) {\n        for (auto nx = x.begin(); nx != x.end(); _W(*nx++)) if\
    \ (nx != x.cbegin()) cout << \" \";\n    }\n\n    template<class T>\n    void\
    \ _W(const multiset<T> &x) {\n        for (auto nx = x.begin(); nx != x.end();\
    \ _W(*nx++)) if (nx != x.cbegin()) cout << \" \";\n    }\n\n    void W() {\n \
    \   }\n\n    template<class T, class... U>\n    void W(const T &head, const U\
    \ &... tail) {\n        _W(head);\n        cout << (sizeof...(tail) ? ' ' : '\\\
    n');\n        W(tail...);\n    }\n\n#if defined(LOCAL)\n#define SHOW(...) SHOW_IMPL(__VA_ARGS__,\
    \ SHOW6, SHOW5, SHOW4, SHOW3, SHOW2, SHOW1)(__VA_ARGS__)\n#define SHOW_IMPL(_1,\
    \ _2, _3, _4, _5, _6, NAME, ...) NAME\n#define SHOW1(x) W(#x, \"=\", (x))\n#define\
    \ SHOW2(x, y) W(#x, \"=\", (x), #y, \"=\", (y))\n#define SHOW3(x, y, z) W(#x,\
    \ \"=\", (x), #y, \"=\", (y), #z, \"=\", (z))\n#define SHOW4(x, y, z, w) W(#x,\
    \ \"=\", (x), #y, \"=\", (y), #z, \"=\", (z), #w, \"=\", (w))\n#define SHOW5(x,\
    \ y, z, w, v) W(#x, \"=\", (x), #y, \"=\", (y), #z, \"=\", (z), #w, \"=\", (w),\
    \ #v, \"=\", (v))\n#define SHOW6(x, y, z, w, v, u) W(#x, \"=\", (x), #y, \"=\"\
    , (y), #z, \"=\", (z), #w, \"=\", (w), #v, \"=\", (v), #u, \"=\", (u))\n#else\n\
    #define SHOW(...)\n#endif\n\n#define INT(...) \\\n    int __VA_ARGS__; \\\n  \
    \  R(__VA_ARGS__);\n#define LL(...) \\\n    ll __VA_ARGS__; \\\n    R(__VA_ARGS__);\n\
    #define U64(...) \\\n    u64 __VA_ARGS__; \\\n    R(__VA_ARGS__);\n#define STR(...)\
    \ \\\n    string __VA_ARGS__; \\\n    R(__VA_ARGS__);\n#define CHAR(...) \\\n\
    \    char __VA_ARGS__; \\\n    R(__VA_ARGS__);\n#define DB(...) \\\n    long double\
    \ __VA_ARGS__; \\\n    R(__VA_ARGS__);\n#define VEC(type, name, size) \\\n  vector<type>\
    \ name(size);    \\\n  R(name)\n#define VECC(type, name, h, w) \\\n    vector<vector<type>>\
    \ name(h,vector<type>(w));\\\n    R(name)\n\nvoid YES(bool x = 1) {W(x ? \"YES\"\
    \ : \"NO\");}\nvoid NO(bool x = 1) {YES(!x);}\nvoid Yes(bool x = 1) {W(x ? \"\
    Yes\" : \"No\");}\nvoid No(bool x = 1) {YES(!x);}\nvoid yes(bool x = 1) {W(x ?\
    \ \"yes\" : \"no\");}\nvoid no(bool x = 1) {YES(!x);}"
  dependsOn: []
  isVerificationFile: false
  path: other/fastio.hpp
  requiredBy: []
  timestamp: '2024-09-01 12:11:39+05:00'
  verificationStatus: LIBRARY_SOME_WA
  verifiedWith:
  - test/mytest/fenwickxor.test.cpp
  - test/mytest/fenwickraq.test.cpp
  - test/mytest/issubstring.test.cpp
  - test/library_checker/point_add_range_sum.test.cpp
  - test/library_checker/aplusb.test.cpp
documentation_of: other/fastio.hpp
layout: document
redirect_from:
- /library/other/fastio.hpp
- /library/other/fastio.hpp.html
title: other/fastio.hpp
---
