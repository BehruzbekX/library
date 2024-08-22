---
data:
  _extendedDependsOn:
  - icon: ':warning:'
    path: fastio.hpp
    title: fastio.hpp
  - icon: ':warning:'
    path: template.hpp
    title: template.hpp
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: cpp
  _verificationStatusIcon: ':warning:'
  attributes:
    links:
    - https://judge.yosupo.jp/problem/aplusb
  bundledCode: "#line 1 \"main.cpp\"\n#define PROBLEM \"https://judge.yosupo.jp/problem/aplusb\"\
    \r\n\r\n#line 1 \"template.hpp\"\n// #pragma GCC target(\"avx2,popcnt\")\r\n\r\
    \n\r\n#include <bits/stdc++.h>\r\n\r\n\r\nusing namespace std;\r\n\r\ntemplate<typename\
    \ T>\r\nusing VI = vector<T>;\r\ntemplate<typename T>\r\nusing pq = priority_queue<T>;\r\
    \ntemplate<class T>\r\nusing pqg = priority_queue<T, VI<T>, greater<int> >;\r\n\
    \r\n#define SZ(A) ((int)(A).size())\r\n#define ALL(A) (A).begin(),(A).end()\r\n\
    \r\ntypedef long long LL;\r\ntypedef unsigned long long ULL;\r\ntypedef __int128\
    \ i128;\r\n\r\ntemplate<class T>\r\nconstexpr T mod = 0;\r\ntemplate<>\r\nconstexpr\
    \ long mod<long> = 998'244'353l;\r\ntemplate<>\r\nconstexpr LL mod<LL> = 1e9 +\
    \ 7LL;\r\ntemplate<>\r\nconstexpr LL mod<ULL> = mod<LL>;\r\ntemplate<>\r\nconstexpr\
    \ i128 mod<i128> = 1'000'000'007LL;\r\n\r\ntemplate<class T>\r\nconstexpr T inf\
    \ = 0;\r\ntemplate<>\r\nconstexpr int inf<int> = 2'147'483'647;\r\ntemplate<>\r\
    \nconstexpr LL inf<LL> = 4'223'372'036'854'775'807;\r\ntemplate<>\r\nconstexpr\
    \ i128 inf<i128> = i128(inf<LL>) * 2'000'000'000'000'000'000;\r\n\r\n// https://trap.jp/post/1224/\r\
    \n\r\n#define FOR1(a) for (LL _ = 0; _ < (a); ++_)\r\n#define FOR2(i, a) for (LL\
    \ i = 0; i < (a); ++i)\r\n#define FOR3(i, a, b) for (LL i = a; i < (b); ++i)\r\
    \n#define FOR4(i, a, b, c) for (LL i = a; i < (b); i += (c))\r\n#define FOR1_R(a)\
    \ for (LL i = (a)-1; i >= (0); --i)\r\n#define FOR2_R(i, a) for (LL i = (a)-1;\
    \ i >= (0); --i)\r\n#define FOR3_R(i, a, b) for (LL i = (b)-1; i >= (a); --i)\r\
    \n#define overload4(a, b, c, d, e, ...) e\r\n#define overload3(a, b, c, d, ...)\
    \ d\r\n#define FOR(...) overload4(__VA_ARGS__, FOR4, FOR3, FOR2, FOR1)(__VA_ARGS__)\r\
    \n#define FOR_R(...) overload3(__VA_ARGS__, FOR3_R, FOR2_R, FOR1_R)(__VA_ARGS__)\r\
    \n#define TEST INT(__T);FOR(__T)\r\n\r\n#define F first\r\n#define S second\r\n\
    #define MP make_pair\r\n#define PB push_back\r\n#define EB emplace_back\r\n#define\
    \ MIN(A) *min_element(ALL(A))\r\n#define MAX(A) *max_element(ALL(A))\r\n#define\
    \ LB(c,x) distance((c).begin(), lower_bound(ALL(c),(x)))\r\n#define UB(c,x) distance((c).begin(),\
    \ upper_bound(ALL(c),(x)))\r\n\r\nint popcnt(int x) { return __builtin_popcount(x);\
    \ }\r\nint popcnt(LL x) { return __builtin_popcountll(x); }\r\nint popcnt(ULL\
    \ x) { return __builtin_popcountll(x); }\r\n\r\n\r\ntemplate<class U, class T,\
    \ class Z>\r\nU SMOD(T &x, T &y) {\r\n    x %= mod<Z>;\r\n    y %= mod<Z>;\r\n\
    \    U result = (x + y) % mod<Z>;\r\n    return result;\r\n}\r\ntemplate<class\
    \ U,class T,class Z>\r\nU PMOD(T &x,T &y) {\r\n    x %= mod<Z>,y %= mod<Z>;\r\n\
    \    U result = (x * y) % mod<Z>;\r\n    return result;\r\n}\r\n\r\ntemplate<class\
    \ T, class U>\r\nbool GMIN(T &a, U &b) {\r\n    return ((a) > (b) ? (a) = (b),\
    \ 1 : 0);\r\n}\r\n\r\ntemplate<class T, class U>\r\nbool GMAX(T &a, U &b) {\r\n\
    \    return ((a) < (b) ? (a) = (b), 1 : 0);\r\n}\r\n\r\ntemplate<class T, class\
    \ U>\r\nT SUM(const vector<U> &A) {\r\n    T sum = NULL;\r\n    for (auto &&a:\
    \ A) sum += a;\r\n    return sum;\r\n}\r\n\r\ntemplate<class T>\r\nT POP(VI<T>\
    \ &a) {\r\n    T x = a.back();\r\n    a.pop_back();\r\n    return x;\r\n}\r\n\r\
    \ntemplate<class T>\r\nT POP(pq<T> &a) {\r\n    T x = a.top();\r\n    a.pop();\r\
    \n    return x;\r\n}\r\n\r\ntemplate<class T>\r\nT POP(deque<T> &a) {\r\n    T\
    \ x = a.front();\r\n    a.pop();\r\n    return x;\r\n}\r\n\r\ntemplate<class T>\r\
    \nT POP(pqg<T> &a) {\r\n    T x = a.top();\r\n    a.pop();\r\n    return x;\r\n\
    }\r\n\r\ntemplate<class Q, class G>\r\nVI<Q> PSUM(const VI<G> &A,int off = 1)\
    \ {\r\n    VI<Q> p(SZ(A) + 1);\r\n    FOR(i, SZ(A)) p[i + 1] = p[i] + A[i];\r\n\
    \    if(off == 0) p.erase(p.begin());\r\n    return p;\r\n}\r\n#line 1 \"fastio.hpp\"\
    \nistream &operator>>(istream &in, i128 &a) {\r\n        string s;\r\n       \
    \ in >> s;\r\n        a = 0;\r\n        for (auto &it: s) if (isdigit(it)) a =\
    \ a * 10 + it - '0';\r\n        if (s[0] == '-') a *= -1;\r\n        return in;\r\
    \n    }\r\n\r\n    ostream &operator<<(ostream &os, const i128 &v) {\r\n     \
    \   if (v == 0) return (os << \"0\");\r\n        i128 num = v;\r\n        if (v\
    \ < 0) os << '-', num = -num;\r\n        string s;\r\n        for (; num > 0;\
    \ num /= 10) s.PB((char) (num % 10) + '0');\r\n        reverse(ALL(s));\r\n  \
    \      return (os << s);\r\n    }\r\n\r\n    template<class t>\r\n    istream\
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
    );}\r\nvoid no(bool x = 1) {YES(!x);}\n#line 5 \"main.cpp\"\n\r\nvoid solve()\
    \ {\r\n    i128 a,b;R(a,b);\r\n    W(a + b);\r\n}\r\n\r\nsigned main() {\r\n \
    \   ios::sync_with_stdio(false), cin.tie(nullptr);\r\n    // TEST\r\n\r\n    solve();\r\
    \n}\r\n"
  code: "#define PROBLEM \"https://judge.yosupo.jp/problem/aplusb\"\r\n\r\n#include\
    \ \"template.hpp\"\r\n#include \"fastio.hpp\"\r\n\r\nvoid solve() {\r\n    i128\
    \ a,b;R(a,b);\r\n    W(a + b);\r\n}\r\n\r\nsigned main() {\r\n    ios::sync_with_stdio(false),\
    \ cin.tie(nullptr);\r\n    // TEST\r\n\r\n    solve();\r\n}\r\n"
  dependsOn:
  - template.hpp
  - fastio.hpp
  isVerificationFile: false
  path: main.cpp
  requiredBy: []
  timestamp: '2024-08-22 15:56:19+05:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: main.cpp
layout: document
redirect_from:
- /library/main.cpp
- /library/main.cpp.html
title: main.cpp
---
