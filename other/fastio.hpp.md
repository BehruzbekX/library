---
data:
  _extendedDependsOn: []
  _extendedRequiredBy:
  - icon: ':warning:'
    path: main.cpp
    title: main.cpp
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: test/library_checker/aplusb.test.cpp
    title: test/library_checker/aplusb.test.cpp
  - icon: ':heavy_check_mark:'
    path: test/mytest/fenwickraq.test.cpp
    title: test/mytest/fenwickraq.test.cpp
  - icon: ':heavy_check_mark:'
    path: test/mytest/issubstring.test.cpp
    title: test/mytest/issubstring.test.cpp
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    links: []
  bundledCode: "#line 1 \"other/fastio.hpp\"\nistream &operator>>(istream &in, i128\
    \ &a) {\n        string s;\n        in >> s;\n        a = 0;\n        for (auto\
    \ &it: s) if (isdigit(it)) a = a * 10 + it - '0';\n        if (s[0] == '-') a\
    \ *= -1;\n        return in;\n    }\n\n    ostream &operator<<(ostream &os, const\
    \ i128 &v) {\n        if (v == 0) return (os << \"0\");\n        i128 num = v;\n\
    \        if (v < 0) os << '-', num = -num;\n        string s;\n        for (;\
    \ num > 0; num /= 10) s.PB((char) (num % 10) + '0');\n        reverse(ALL(s));\n\
    \        return (os << s);\n    }\n\n    template<class t>\n    istream &operator>>(istream\
    \ &in, VI<t> &a) {\n        for (auto &nx: a) {\n            in >> nx;\n     \
    \   }\n        return in;\n    }\n    template<class t>\n    istream &operator>>(istream\
    \ &in, VI<VI<t>> &a) {\n        for (auto &nx: a) for(auto &ny : nx) in >> ny;\n\
    \        return in;\n    }\n    template<class t, class u>\n    istream &operator>>(istream\
    \ &in, pair<t, u> &p) {\n        in >> p.first >> p.second;\n        return in;\n\
    \    }\n    template<class t, class u>\n    istream &operator>>(istream &in, VI<pair<t,\
    \ u> > &p) {\n        for (auto &nx: p) in >> nx;\n        return in;\n    }\n\
    \n\n\n    template<class T>\n    void _R(T &x) { cin >> x; }\n\n    void R() {\n\
    \    }\n\n    template<class T, class... U>\n    void R(T &head, U &... tail)\
    \ {\n        _R(head);\n        R(tail...);\n    }\n\n    template<class T>\n\
    \    void _W(const T &x) {\n        cout << (x);\n    }\n\n    template<class\
    \ T, class U>\n    void _W(const pair<T, U> &x) {\n        _W(x.F);\n        cout\
    \ << ' ';\n        _W(x.S);\n    }\n\n    template<class T>\n    void _W(const\
    \ VI<T> &x) {\n        for (auto nx = x.begin(); nx != x.end(); _W(*nx++)) if\
    \ (nx != x.cbegin()) cout << \" \";\n    }\n\n    template<class T>\n    void\
    \ _W(const set<T> &x) {\n        for (auto nx = x.begin(); nx != x.end(); _W(*nx++))\
    \ if (nx != x.cbegin()) cout << \" \";\n    }\n\n    template<class T>\n    void\
    \ _W(const multiset<T> &x) {\n        for (auto nx = x.begin(); nx != x.end();\
    \ _W(*nx++)) if (nx != x.cbegin()) cout << \" \";\n    }\n\n    void W() {\n \
    \   }\n\n    template<class T, class... U>\n    void W(const T &head, const U\
    \ &... tail) {\n        _W(head);\n        cout << (sizeof...(tail) ? ' ' : '\\\
    n');\n        W(tail...);\n    }\n#define INT(...) \\\n    int __VA_ARGS__; \\\
    \n    R(__VA_ARGS__);\n#define LL(...) \\\n    LL __VA_ARGS__; \\\n    R(__VA_ARGS__);\n\
    #define STR(...) \\\n    string __VA_ARGS__; \\\n    R(__VA_ARGS__);\n#define\
    \ CHAR(...) \\\n    char __VA_ARGS__; \\\n    R(__VA_ARGS__);\n#define DB(...)\
    \ \\\n    double __VA_ARGS__; \\\n    R(__VA_ARGS__);\n#define VEC(type,name,size)\
    \ \\\n    VI<type> name(size); \\\n    R(name)\n#define VECC(type,name, h,w) \\\
    \n    VI<VI<type>> name(h,VI<type>(w));\\\n    R(name)\n\nvoid YES(bool x = 1)\
    \ {W(x ? \"YES\" : \"NO\");}\nvoid NO(bool x = 1) {YES(!x);}\nvoid Yes(bool x\
    \ = 1) {W(x ? \"Yes\" : \"No\");}\nvoid No(bool x = 1) {YES(!x);}\nvoid yes(bool\
    \ x = 1) {W(x ? \"yes\" : \"no\");}\nvoid no(bool x = 1) {YES(!x);}\n"
  code: "istream &operator>>(istream &in, i128 &a) {\n        string s;\n        in\
    \ >> s;\n        a = 0;\n        for (auto &it: s) if (isdigit(it)) a = a * 10\
    \ + it - '0';\n        if (s[0] == '-') a *= -1;\n        return in;\n    }\n\n\
    \    ostream &operator<<(ostream &os, const i128 &v) {\n        if (v == 0) return\
    \ (os << \"0\");\n        i128 num = v;\n        if (v < 0) os << '-', num = -num;\n\
    \        string s;\n        for (; num > 0; num /= 10) s.PB((char) (num % 10)\
    \ + '0');\n        reverse(ALL(s));\n        return (os << s);\n    }\n\n    template<class\
    \ t>\n    istream &operator>>(istream &in, VI<t> &a) {\n        for (auto &nx:\
    \ a) {\n            in >> nx;\n        }\n        return in;\n    }\n    template<class\
    \ t>\n    istream &operator>>(istream &in, VI<VI<t>> &a) {\n        for (auto\
    \ &nx: a) for(auto &ny : nx) in >> ny;\n        return in;\n    }\n    template<class\
    \ t, class u>\n    istream &operator>>(istream &in, pair<t, u> &p) {\n       \
    \ in >> p.first >> p.second;\n        return in;\n    }\n    template<class t,\
    \ class u>\n    istream &operator>>(istream &in, VI<pair<t, u> > &p) {\n     \
    \   for (auto &nx: p) in >> nx;\n        return in;\n    }\n\n\n\n    template<class\
    \ T>\n    void _R(T &x) { cin >> x; }\n\n    void R() {\n    }\n\n    template<class\
    \ T, class... U>\n    void R(T &head, U &... tail) {\n        _R(head);\n    \
    \    R(tail...);\n    }\n\n    template<class T>\n    void _W(const T &x) {\n\
    \        cout << (x);\n    }\n\n    template<class T, class U>\n    void _W(const\
    \ pair<T, U> &x) {\n        _W(x.F);\n        cout << ' ';\n        _W(x.S);\n\
    \    }\n\n    template<class T>\n    void _W(const VI<T> &x) {\n        for (auto\
    \ nx = x.begin(); nx != x.end(); _W(*nx++)) if (nx != x.cbegin()) cout << \" \"\
    ;\n    }\n\n    template<class T>\n    void _W(const set<T> &x) {\n        for\
    \ (auto nx = x.begin(); nx != x.end(); _W(*nx++)) if (nx != x.cbegin()) cout <<\
    \ \" \";\n    }\n\n    template<class T>\n    void _W(const multiset<T> &x) {\n\
    \        for (auto nx = x.begin(); nx != x.end(); _W(*nx++)) if (nx != x.cbegin())\
    \ cout << \" \";\n    }\n\n    void W() {\n    }\n\n    template<class T, class...\
    \ U>\n    void W(const T &head, const U &... tail) {\n        _W(head);\n    \
    \    cout << (sizeof...(tail) ? ' ' : '\\n');\n        W(tail...);\n    }\n#define\
    \ INT(...) \\\n    int __VA_ARGS__; \\\n    R(__VA_ARGS__);\n#define LL(...) \\\
    \n    LL __VA_ARGS__; \\\n    R(__VA_ARGS__);\n#define STR(...) \\\n    string\
    \ __VA_ARGS__; \\\n    R(__VA_ARGS__);\n#define CHAR(...) \\\n    char __VA_ARGS__;\
    \ \\\n    R(__VA_ARGS__);\n#define DB(...) \\\n    double __VA_ARGS__; \\\n  \
    \  R(__VA_ARGS__);\n#define VEC(type,name,size) \\\n    VI<type> name(size); \\\
    \n    R(name)\n#define VECC(type,name, h,w) \\\n    VI<VI<type>> name(h,VI<type>(w));\\\
    \n    R(name)\n\nvoid YES(bool x = 1) {W(x ? \"YES\" : \"NO\");}\nvoid NO(bool\
    \ x = 1) {YES(!x);}\nvoid Yes(bool x = 1) {W(x ? \"Yes\" : \"No\");}\nvoid No(bool\
    \ x = 1) {YES(!x);}\nvoid yes(bool x = 1) {W(x ? \"yes\" : \"no\");}\nvoid no(bool\
    \ x = 1) {YES(!x);}"
  dependsOn: []
  isVerificationFile: false
  path: other/fastio.hpp
  requiredBy:
  - main.cpp
  timestamp: '2024-08-30 11:48:08+05:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - test/mytest/fenwickraq.test.cpp
  - test/mytest/issubstring.test.cpp
  - test/library_checker/aplusb.test.cpp
documentation_of: other/fastio.hpp
layout: document
redirect_from:
- /library/other/fastio.hpp
- /library/other/fastio.hpp.html
title: other/fastio.hpp
---
