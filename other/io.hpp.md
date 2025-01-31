---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':warning:'
  attributes:
    links: []
  bundledCode: "#line 1 \"other/io.hpp\"\nistream &operator>>(istream &in, i128 &a)\
    \ {\r\n        string s;\r\n        in >> s;\r\n        a = 0;\r\n        for\
    \ (auto &it: s) if (isdigit(it)) a = a * 10 + it - '0';\r\n        if (s[0] ==\
    \ '-') a *= -1;\r\n        return in;\r\n    }\r\n\r\n    ostream &operator<<(ostream\
    \ &os, const i128 &v) {\r\n        if (v == 0) return (os << \"0\");\r\n     \
    \   i128 num = v;\r\n        if (v < 0) os << '-', num = -num;\r\n        string\
    \ s;\r\n        for (; num > 0; num /= 10) s.PB((char) (num % 10) + '0');\r\n\
    \        reverse(all(s));\r\n        return (os << s);\r\n    }\r\n\r\n    template<class\
    \ t>\r\n    istream &operator>>(istream &in, vector<t> &a) {\r\n        for (auto\
    \ &nx: a) {\r\n            in >> nx;\r\n        }\r\n        return in;\r\n  \
    \  }\r\n    template<class t>\r\n    istream &operator>>(istream &in, vector<vector<t>>\
    \ &a) {\r\n        for (auto &nx: a) for(auto &ny : nx) in >> ny;\r\n        return\
    \ in;\r\n    }\r\n    template<class t, class u>\r\n    istream &operator>>(istream\
    \ &in, pair<t, u> &p) {\r\n        in >> p.first >> p.second;\r\n        return\
    \ in;\r\n    }\r\n    template<class t, class u>\r\n    istream &operator>>(istream\
    \ &in, vector<pair<t, u> > &p) {\r\n        for (auto &nx: p) in >> nx;\r\n  \
    \      return in;\r\n    }\r\n\r\n    template<class t>\r\n    istream &operator>>(istream\
    \ &in, vector<pair<t, t>> &p) {\r\n        for (auto &nx: p) in >> nx;\r\n   \
    \     return in;\r\n    }\r\n\r\n    template<class T>\r\n    void _read(T &x)\
    \ { cin >> x; }\r\n\r\n    void read() {\r\n    }\r\n\r\n    template<class T,\
    \ class... U>\r\n    void read(T &head, U &... tail) {\r\n        _read(head);\r\
    \n        read(tail...);\r\n    }\r\n\r\n    template<class T>\r\n    void _print(const\
    \ T &x) {\r\n        cout << (x);\r\n    }\r\n\r\n    template<class T, class\
    \ U>\r\n    void _print(const pair<T, U> &x) {\r\n        _print(x.F);\r\n   \
    \     cout << ' ';\r\n        _print(x.S);\r\n    }\r\n\r\n    template<class\
    \ T>\r\n    void _print(const vector<T> &x) {\r\n        for (auto nx = x.begin();\
    \ nx != x.end(); _print(*nx++)) if (nx != x.cbegin()) cout << \" \";\r\n    }\r\
    \n\r\n    template<class T>\r\n    void _print(const set<T> &x) {\r\n        for\
    \ (auto nx = x.begin(); nx != x.end(); _print(*nx++)) if (nx != x.cbegin()) cout\
    \ << \" \";\r\n    }\r\n\r\n    template<class T>\r\n    void _print(const multiset<T>\
    \ &x) {\r\n        for (auto nx = x.begin(); nx != x.end(); _print(*nx++)) if\
    \ (nx != x.cbegin()) cout << \" \";\r\n    }\r\n\r\n    void print() {\r\n   \
    \ }\r\n\r\n    template<class T, class... U>\r\n    void print(const T &head,\
    \ const U &... tail) {\r\n        _print(head);\r\n        cout << (sizeof...(tail)\
    \ ? ' ' : '\\n');\r\n        print(tail...);\r\n    }\r\n\r\n#if defined(LOCAL)\r\
    \n#define SHOW(...) SHOW_IMPL(__VA_ARGS__, SHOW6, SHOW5, SHOW4, SHOW3, SHOW2,\
    \ SHOW1)(__VA_ARGS__)\r\n#define SHOW_IMPL(_1, _2, _3, _4, _5, _6, NAME, ...)\
    \ NAME\r\n#define SHOW1(x) print(#x, \"=\", (x))\r\n#define SHOW2(x, y) print(#x,\
    \ \"=\", (x), #y, \"=\", (y))\r\n#define SHOW3(x, y, z) print(#x, \"=\", (x),\
    \ #y, \"=\", (y), #z, \"=\", (z))\r\n#define SHOW4(x, y, z, w) print(#x, \"=\"\
    , (x), #y, \"=\", (y), #z, \"=\", (z), #w, \"=\", (w))\r\n#define SHOW5(x, y,\
    \ z, w, v) print(#x, \"=\", (x), #y, \"=\", (y), #z, \"=\", (z), #w, \"=\", (w),\
    \ #v, \"=\", (v))\r\n#define SHOW6(x, y, z, w, v, u) print(#x, \"=\", (x), #y,\
    \ \"=\", (y), #z, \"=\", (z), #w, \"=\", (w), #v, \"=\", (v), #u, \"=\", (u))\r\
    \n#else\r\n#define SHOW(...)\r\n#endif\r\n\r\n#define INT(...) \\\r\n    int __VA_ARGS__;\
    \ \\\r\n    read(__VA_ARGS__);\r\n#define LL(...) \\\r\n    ll __VA_ARGS__; \\\
    \r\n    read(__VA_ARGS__);\r\n#define U64(...) \\\r\n    u64 __VA_ARGS__; \\\r\
    \n    read(__VA_ARGS__);\r\n#define STR(...) \\\r\n    string __VA_ARGS__; \\\r\
    \n    read(__VA_ARGS__);\r\n#define CHAR(...) \\\r\n    char __VA_ARGS__; \\\r\
    \n    read(__VA_ARGS__);\r\n#define DB(...) \\\r\n    long double __VA_ARGS__;\
    \ \\\r\n    read(__VA_ARGS__);\r\n#define VEC(type, name, size) \\\r\n  vector<type>\
    \ name(size);    \\\r\n  read(name)\r\n#define VECC(type, name, h, w) \\\r\n \
    \   vector<vector<type>> name(h,vector<type>(w));\\\r\n    read(name)\r\n\r\n\
    void YES(bool x = 1) {print(x ? \"YES\" : \"NO\");}\r\nvoid NO(bool x = 1) {YES(!x);}\r\
    \nvoid Yes(bool x = 1) {print(x ? \"Yes\" : \"No\");}\r\nvoid No(bool x = 1) {YES(!x);}\r\
    \nvoid yes(bool x = 1) {print(x ? \"yes\" : \"no\");}\r\nvoid no(bool x = 1) {YES(!x);}\r\
    \n"
  code: "istream &operator>>(istream &in, i128 &a) {\r\n        string s;\r\n    \
    \    in >> s;\r\n        a = 0;\r\n        for (auto &it: s) if (isdigit(it))\
    \ a = a * 10 + it - '0';\r\n        if (s[0] == '-') a *= -1;\r\n        return\
    \ in;\r\n    }\r\n\r\n    ostream &operator<<(ostream &os, const i128 &v) {\r\n\
    \        if (v == 0) return (os << \"0\");\r\n        i128 num = v;\r\n      \
    \  if (v < 0) os << '-', num = -num;\r\n        string s;\r\n        for (; num\
    \ > 0; num /= 10) s.PB((char) (num % 10) + '0');\r\n        reverse(all(s));\r\
    \n        return (os << s);\r\n    }\r\n\r\n    template<class t>\r\n    istream\
    \ &operator>>(istream &in, vector<t> &a) {\r\n        for (auto &nx: a) {\r\n\
    \            in >> nx;\r\n        }\r\n        return in;\r\n    }\r\n    template<class\
    \ t>\r\n    istream &operator>>(istream &in, vector<vector<t>> &a) {\r\n     \
    \   for (auto &nx: a) for(auto &ny : nx) in >> ny;\r\n        return in;\r\n \
    \   }\r\n    template<class t, class u>\r\n    istream &operator>>(istream &in,\
    \ pair<t, u> &p) {\r\n        in >> p.first >> p.second;\r\n        return in;\r\
    \n    }\r\n    template<class t, class u>\r\n    istream &operator>>(istream &in,\
    \ vector<pair<t, u> > &p) {\r\n        for (auto &nx: p) in >> nx;\r\n       \
    \ return in;\r\n    }\r\n\r\n    template<class t>\r\n    istream &operator>>(istream\
    \ &in, vector<pair<t, t>> &p) {\r\n        for (auto &nx: p) in >> nx;\r\n   \
    \     return in;\r\n    }\r\n\r\n    template<class T>\r\n    void _read(T &x)\
    \ { cin >> x; }\r\n\r\n    void read() {\r\n    }\r\n\r\n    template<class T,\
    \ class... U>\r\n    void read(T &head, U &... tail) {\r\n        _read(head);\r\
    \n        read(tail...);\r\n    }\r\n\r\n    template<class T>\r\n    void _print(const\
    \ T &x) {\r\n        cout << (x);\r\n    }\r\n\r\n    template<class T, class\
    \ U>\r\n    void _print(const pair<T, U> &x) {\r\n        _print(x.F);\r\n   \
    \     cout << ' ';\r\n        _print(x.S);\r\n    }\r\n\r\n    template<class\
    \ T>\r\n    void _print(const vector<T> &x) {\r\n        for (auto nx = x.begin();\
    \ nx != x.end(); _print(*nx++)) if (nx != x.cbegin()) cout << \" \";\r\n    }\r\
    \n\r\n    template<class T>\r\n    void _print(const set<T> &x) {\r\n        for\
    \ (auto nx = x.begin(); nx != x.end(); _print(*nx++)) if (nx != x.cbegin()) cout\
    \ << \" \";\r\n    }\r\n\r\n    template<class T>\r\n    void _print(const multiset<T>\
    \ &x) {\r\n        for (auto nx = x.begin(); nx != x.end(); _print(*nx++)) if\
    \ (nx != x.cbegin()) cout << \" \";\r\n    }\r\n\r\n    void print() {\r\n   \
    \ }\r\n\r\n    template<class T, class... U>\r\n    void print(const T &head,\
    \ const U &... tail) {\r\n        _print(head);\r\n        cout << (sizeof...(tail)\
    \ ? ' ' : '\\n');\r\n        print(tail...);\r\n    }\r\n\r\n#if defined(LOCAL)\r\
    \n#define SHOW(...) SHOW_IMPL(__VA_ARGS__, SHOW6, SHOW5, SHOW4, SHOW3, SHOW2,\
    \ SHOW1)(__VA_ARGS__)\r\n#define SHOW_IMPL(_1, _2, _3, _4, _5, _6, NAME, ...)\
    \ NAME\r\n#define SHOW1(x) print(#x, \"=\", (x))\r\n#define SHOW2(x, y) print(#x,\
    \ \"=\", (x), #y, \"=\", (y))\r\n#define SHOW3(x, y, z) print(#x, \"=\", (x),\
    \ #y, \"=\", (y), #z, \"=\", (z))\r\n#define SHOW4(x, y, z, w) print(#x, \"=\"\
    , (x), #y, \"=\", (y), #z, \"=\", (z), #w, \"=\", (w))\r\n#define SHOW5(x, y,\
    \ z, w, v) print(#x, \"=\", (x), #y, \"=\", (y), #z, \"=\", (z), #w, \"=\", (w),\
    \ #v, \"=\", (v))\r\n#define SHOW6(x, y, z, w, v, u) print(#x, \"=\", (x), #y,\
    \ \"=\", (y), #z, \"=\", (z), #w, \"=\", (w), #v, \"=\", (v), #u, \"=\", (u))\r\
    \n#else\r\n#define SHOW(...)\r\n#endif\r\n\r\n#define INT(...) \\\r\n    int __VA_ARGS__;\
    \ \\\r\n    read(__VA_ARGS__);\r\n#define LL(...) \\\r\n    ll __VA_ARGS__; \\\
    \r\n    read(__VA_ARGS__);\r\n#define U64(...) \\\r\n    u64 __VA_ARGS__; \\\r\
    \n    read(__VA_ARGS__);\r\n#define STR(...) \\\r\n    string __VA_ARGS__; \\\r\
    \n    read(__VA_ARGS__);\r\n#define CHAR(...) \\\r\n    char __VA_ARGS__; \\\r\
    \n    read(__VA_ARGS__);\r\n#define DB(...) \\\r\n    long double __VA_ARGS__;\
    \ \\\r\n    read(__VA_ARGS__);\r\n#define VEC(type, name, size) \\\r\n  vector<type>\
    \ name(size);    \\\r\n  read(name)\r\n#define VECC(type, name, h, w) \\\r\n \
    \   vector<vector<type>> name(h,vector<type>(w));\\\r\n    read(name)\r\n\r\n\
    void YES(bool x = 1) {print(x ? \"YES\" : \"NO\");}\r\nvoid NO(bool x = 1) {YES(!x);}\r\
    \nvoid Yes(bool x = 1) {print(x ? \"Yes\" : \"No\");}\r\nvoid No(bool x = 1) {YES(!x);}\r\
    \nvoid yes(bool x = 1) {print(x ? \"yes\" : \"no\");}\r\nvoid no(bool x = 1) {YES(!x);}\r\
    \n"
  dependsOn: []
  isVerificationFile: false
  path: other/io.hpp
  requiredBy: []
  timestamp: '2025-01-31 21:31:14+05:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: other/io.hpp
layout: document
redirect_from:
- /library/other/io.hpp
- /library/other/io.hpp.html
title: other/io.hpp
---
