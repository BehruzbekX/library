---
data:
  _extendedDependsOn: []
  _extendedRequiredBy:
  - icon: ':warning:'
    path: main.cpp
    title: main.cpp
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':warning:'
  attributes:
    links: []
  bundledCode: "#line 1 \"fastio.hpp\"\nistream &operator>>(istream &in, i128 &a)\
    \ {\r\n        string s;\r\n        in >> s;\r\n        a = 0;\r\n        for\
    \ (auto &it: s) if (isdigit(it)) a = a * 10 + it - '0';\r\n        if (s[0] ==\
    \ '-') a *= -1;\r\n        return in;\r\n    }\r\n\r\n    ostream &operator<<(ostream\
    \ &os, const i128 &v) {\r\n        if (v == 0) return (os << \"0\");\r\n     \
    \   i128 num = v;\r\n        if (v < 0) os << '-', num = -num;\r\n        string\
    \ s;\r\n        for (; num > 0; num /= 10) s.PB((char) (num % 10) + '0');\r\n\
    \        reverse(ALL(s));\r\n        return (os << s);\r\n    }\r\n\r\n    template<class\
    \ t>\r\n    istream &operator>>(istream &in, VI<t> &a) {\r\n        for (auto\
    \ &nx: a) {\r\n            in >> nx;\r\n        }\r\n        return in;\r\n  \
    \  }\r\n    template<class t>\r\n    istream &operator>>(istream &in, VI<VI<t>>\
    \ &a) {\r\n        for (auto &nx: a) for(auto &ny : nx) in >> ny;\r\n        return\
    \ in;\r\n    }\r\n    template<class t, class u>\r\n    istream &operator>>(istream\
    \ &in, pair<t, u> &p) {\r\n        in >> p.first >> p.second;\r\n        return\
    \ in;\r\n    }\r\n    template<class t, class u>\r\n    istream &operator>>(istream\
    \ &in, VI<pair<t, u> > &p) {\r\n        for (auto &nx: p) in >> nx;\r\n      \
    \  return in;\r\n    }\r\n\r\n\r\n\r\n    template<class T>\r\n    void _R(T &x)\
    \ { cin >> x; }\r\n\r\n    void R() {\r\n    }\r\n\r\n    template<class T, class...\
    \ U>\r\n    void R(T &head, U &... tail) {\r\n        _R(head);\r\n        R(tail...);\r\
    \n    }\r\n\r\n    template<class T>\r\n    void _W(const T &x) {\r\n        cout\
    \ << (x);\r\n    }\r\n\r\n    template<class T, class U>\r\n    void _W(const\
    \ pair<T, U> &x) {\r\n        _W(x.F);\r\n        cout << ' ';\r\n        _W(x.S);\r\
    \n    }\r\n\r\n    template<class T>\r\n    void _W(const VI<T> &x) {\r\n    \
    \    for (auto nx = x.begin(); nx != x.end(); _W(*nx++)) if (nx != x.cbegin())\
    \ cout << \" \";\r\n    }\r\n\r\n    template<class T>\r\n    void _W(const set<T>\
    \ &x) {\r\n        for (auto nx = x.begin(); nx != x.end(); _W(*nx++)) if (nx\
    \ != x.cbegin()) cout << \" \";\r\n    }\r\n\r\n    template<class T>\r\n    void\
    \ _W(const multiset<T> &x) {\r\n        for (auto nx = x.begin(); nx != x.end();\
    \ _W(*nx++)) if (nx != x.cbegin()) cout << \" \";\r\n    }\r\n\r\n    void W()\
    \ {\r\n    }\r\n\r\n    template<class T, class... U>\r\n    void W(const T &head,\
    \ const U &... tail) {\r\n        _W(head);\r\n        cout << (sizeof...(tail)\
    \ ? ' ' : '\\n');\r\n        W(tail...);\r\n    }\r\n#define INT(...) \\\r\n \
    \   int __VA_ARGS__; \\\r\n    R(__VA_ARGS__);\r\n#define LL(...) \\\r\n    LL\
    \ __VA_ARGS__; \\\r\n    R(__VA_ARGS__);\r\n#define STR(...) \\\r\n    string\
    \ __VA_ARGS__; \\\r\n    R(__VA_ARGS__);\r\n#define CHAR(...) \\\r\n    char __VA_ARGS__;\
    \ \\\r\n    R(__VA_ARGS__);\r\n#define DB(...) \\\r\n    double __VA_ARGS__; \\\
    \r\n    R(__VA_ARGS__);\r\n#define VEC(type,name,size) \\\r\n    VI<type> name(size);\
    \ \\\r\n    R(name)\r\n#define VECC(type,name, h,w) \\\r\n    VI<VI<type>> name(h,VI<type>(w));\\\
    \r\n    R(name)\r\n\r\nvoid YES(bool x = 1) {W(x ? \"YES\" : \"NO\");}\r\nvoid\
    \ NO(bool x = 1) {YES(!x);}\r\nvoid Yes(bool x = 1) {W(x ? \"Yes\" : \"No\");}\r\
    \nvoid No(bool x = 1) {YES(!x);}\r\nvoid yes(bool x = 1) {W(x ? \"yes\" : \"no\"\
    );}\r\nvoid no(bool x = 1) {YES(!x);}\n"
  code: "istream &operator>>(istream &in, i128 &a) {\r\n        string s;\r\n    \
    \    in >> s;\r\n        a = 0;\r\n        for (auto &it: s) if (isdigit(it))\
    \ a = a * 10 + it - '0';\r\n        if (s[0] == '-') a *= -1;\r\n        return\
    \ in;\r\n    }\r\n\r\n    ostream &operator<<(ostream &os, const i128 &v) {\r\n\
    \        if (v == 0) return (os << \"0\");\r\n        i128 num = v;\r\n      \
    \  if (v < 0) os << '-', num = -num;\r\n        string s;\r\n        for (; num\
    \ > 0; num /= 10) s.PB((char) (num % 10) + '0');\r\n        reverse(ALL(s));\r\
    \n        return (os << s);\r\n    }\r\n\r\n    template<class t>\r\n    istream\
    \ &operator>>(istream &in, VI<t> &a) {\r\n        for (auto &nx: a) {\r\n    \
    \        in >> nx;\r\n        }\r\n        return in;\r\n    }\r\n    template<class\
    \ t>\r\n    istream &operator>>(istream &in, VI<VI<t>> &a) {\r\n        for (auto\
    \ &nx: a) for(auto &ny : nx) in >> ny;\r\n        return in;\r\n    }\r\n    template<class\
    \ t, class u>\r\n    istream &operator>>(istream &in, pair<t, u> &p) {\r\n   \
    \     in >> p.first >> p.second;\r\n        return in;\r\n    }\r\n    template<class\
    \ t, class u>\r\n    istream &operator>>(istream &in, VI<pair<t, u> > &p) {\r\n\
    \        for (auto &nx: p) in >> nx;\r\n        return in;\r\n    }\r\n\r\n\r\n\
    \r\n    template<class T>\r\n    void _R(T &x) { cin >> x; }\r\n\r\n    void R()\
    \ {\r\n    }\r\n\r\n    template<class T, class... U>\r\n    void R(T &head, U\
    \ &... tail) {\r\n        _R(head);\r\n        R(tail...);\r\n    }\r\n\r\n  \
    \  template<class T>\r\n    void _W(const T &x) {\r\n        cout << (x);\r\n\
    \    }\r\n\r\n    template<class T, class U>\r\n    void _W(const pair<T, U> &x)\
    \ {\r\n        _W(x.F);\r\n        cout << ' ';\r\n        _W(x.S);\r\n    }\r\
    \n\r\n    template<class T>\r\n    void _W(const VI<T> &x) {\r\n        for (auto\
    \ nx = x.begin(); nx != x.end(); _W(*nx++)) if (nx != x.cbegin()) cout << \" \"\
    ;\r\n    }\r\n\r\n    template<class T>\r\n    void _W(const set<T> &x) {\r\n\
    \        for (auto nx = x.begin(); nx != x.end(); _W(*nx++)) if (nx != x.cbegin())\
    \ cout << \" \";\r\n    }\r\n\r\n    template<class T>\r\n    void _W(const multiset<T>\
    \ &x) {\r\n        for (auto nx = x.begin(); nx != x.end(); _W(*nx++)) if (nx\
    \ != x.cbegin()) cout << \" \";\r\n    }\r\n\r\n    void W() {\r\n    }\r\n\r\n\
    \    template<class T, class... U>\r\n    void W(const T &head, const U &... tail)\
    \ {\r\n        _W(head);\r\n        cout << (sizeof...(tail) ? ' ' : '\\n');\r\
    \n        W(tail...);\r\n    }\r\n#define INT(...) \\\r\n    int __VA_ARGS__;\
    \ \\\r\n    R(__VA_ARGS__);\r\n#define LL(...) \\\r\n    LL __VA_ARGS__; \\\r\n\
    \    R(__VA_ARGS__);\r\n#define STR(...) \\\r\n    string __VA_ARGS__; \\\r\n\
    \    R(__VA_ARGS__);\r\n#define CHAR(...) \\\r\n    char __VA_ARGS__; \\\r\n \
    \   R(__VA_ARGS__);\r\n#define DB(...) \\\r\n    double __VA_ARGS__; \\\r\n  \
    \  R(__VA_ARGS__);\r\n#define VEC(type,name,size) \\\r\n    VI<type> name(size);\
    \ \\\r\n    R(name)\r\n#define VECC(type,name, h,w) \\\r\n    VI<VI<type>> name(h,VI<type>(w));\\\
    \r\n    R(name)\r\n\r\nvoid YES(bool x = 1) {W(x ? \"YES\" : \"NO\");}\r\nvoid\
    \ NO(bool x = 1) {YES(!x);}\r\nvoid Yes(bool x = 1) {W(x ? \"Yes\" : \"No\");}\r\
    \nvoid No(bool x = 1) {YES(!x);}\r\nvoid yes(bool x = 1) {W(x ? \"yes\" : \"no\"\
    );}\r\nvoid no(bool x = 1) {YES(!x);}"
  dependsOn: []
  isVerificationFile: false
  path: fastio.hpp
  requiredBy:
  - main.cpp
  timestamp: '2024-08-22 15:54:21+05:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: fastio.hpp
layout: document
redirect_from:
- /library/fastio.hpp
- /library/fastio.hpp.html
title: fastio.hpp
---
