---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: other/fastio.hpp
    title: other/fastio.hpp
  - icon: ':heavy_check_mark:'
    path: string/zalgorithm.hpp
    title: string/zalgorithm.hpp
  - icon: ':heavy_check_mark:'
    path: template.hpp
    title: template.hpp
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: cpp
  _verificationStatusIcon: ':warning:'
  attributes:
    links: []
  bundledCode: "#line 1 \"main.cpp\"\n\n#line 1 \"template.hpp\"\n// #pragma GCC target(\"\
    avx2,popcnt\")\n\n\n#include <bits/stdc++.h>\n\n\nusing namespace std;\n\ntemplate<typename\
    \ T>\nusing VI = vector<T>;\ntemplate<typename T>\nusing pq = priority_queue<T>;\n\
    template<class T>\nusing pqg = priority_queue<T, VI<T>, greater<T>>;\n\n#define\
    \ SZ(A) ((int)(A).size())\n#define ALL(A) (A).begin(),(A).end()\n\nusing LL =\
    \ long long;\nusing ULL = unsigned long long;\nusing i128 = __int128;\nusing u128\
    \ = unsigned __int128;\n\ntemplate<int>\nconstexpr int mod = 0;\ntemplate<>\n\
    constexpr long mod<998> = 998'244'353l;\ntemplate<>\nconstexpr LL mod<107> = 1e9\
    \ + 7LL;\n\n\ntemplate<class T>\nconstexpr T inf = 0;\ntemplate<>\nconstexpr int\
    \ inf<int> = 2'147'483'647;\ntemplate<>\nconstexpr LL inf<LL> = 4'223'372'036'854'775'807;\n\
    template<>\nconstexpr unsigned int inf<unsigned int> = 2'147'483'647;\ntemplate<>\n\
    constexpr ULL inf<ULL> = 18'446'744'073'709'551'615ULL;\ntemplate<>\nconstexpr\
    \ i128 inf<i128> = i128(inf<LL>) * 2'000'000'000'000'000'000;\ntemplate<>\nconstexpr\
    \ float inf<float> = inf<int>;\ntemplate<>\nconstexpr double inf<double> = inf<int>;\n\
    template<>\nconstexpr long double inf<long double> = inf<LL>;\ntemplate<>\nconstexpr\
    \ short inf<short> = 32'767;\ntemplate<>\nconstexpr unsigned short inf<unsigned\
    \ short> = 65'535;\ntemplate<>\nconstexpr char inf<char> = 127;\ntemplate<>\n\
    constexpr unsigned char inf<unsigned char> = 255;\ntemplate<>\nconstexpr long\
    \ inf<long> = 2'147'483'647L;\ntemplate<>\nconstexpr unsigned long inf<unsigned\
    \ long> = 4'294'967'295UL;\n\n// https://trap.jp/post/1224/\n\n#define FOR1(a)\
    \ for (LL _ = 0; _ < (a); ++_)\n#define FOR2(i, a) for (LL i = 0; i < (a); ++i)\n\
    #define FOR3(i, a, b) for (LL i = a; i < (b); ++i)\n#define FOR4(i, a, b, c) for\
    \ (LL i = a; i < (b); i += (c))\n#define FOR1_R(a) for (LL i = (a)-1; i >= (0);\
    \ --i)\n#define FOR2_R(i, a) for (LL i = (a)-1; i >= (0); --i)\n#define FOR3_R(i,\
    \ a, b) for (LL i = (b)-1; i >= (a); --i)\n#define overload4(a, b, c, d, e, ...)\
    \ e\n#define overload3(a, b, c, d, ...) d\n#define FOR(...) overload4(__VA_ARGS__,\
    \ FOR4, FOR3, FOR2, FOR1)(__VA_ARGS__)\n#define FOR_R(...) overload3(__VA_ARGS__,\
    \ FOR3_R, FOR2_R, FOR1_R)(__VA_ARGS__)\n#define TEST INT(__T);FOR(__T)\n\n#define\
    \ F first\n#define S second\n#define MP make_pair\n#define PB push_back\n#define\
    \ EB emplace_back\n#define MIN(A) *min_element(ALL(A))\n#define MAX(A) *max_element(ALL(A))\n\
    #define LB(c,x) distance((c).begin(), lower_bound(ALL(c),(x)))\n#define UB(c,x)\
    \ distance((c).begin(), upper_bound(ALL(c),(x)))\n\nint popcnt(int x) { return\
    \ __builtin_popcount(x); }\nint popcnt(LL x) { return __builtin_popcountll(x);\
    \ }\nint popcnt(ULL x) { return __builtin_popcountll(x); }\n\n\ntemplate<class\
    \ U, class T, int Z>\nU SMOD(T &x, T &y) {\n    x %= mod<Z>;\n    y %= mod<Z>;\n\
    \    U result = (x + y) % mod<Z>;\n    return result;\n}\ntemplate<class U,class\
    \ T,int Z>\nU PMOD(T &x,T &y) {\n    x %= mod<Z>,y %= mod<Z>;\n    U result =\
    \ (x * y) % mod<Z>;\n    return result;\n}\n\ntemplate <class T, class S>\ninline\
    \ bool chmax(T &a, const S &b) {\n  return (a < b ? a = b, 1 : 0);\n}\ntemplate\
    \ <class T, class S>\ninline bool chmin(T &a, const S &b) {\n  return (a > b ?\
    \ a = b, 1 : 0);\n}\n\ntemplate<class T, class U>\nT SUM(const vector<U> &A) {\n\
    \    T sum = 0ll;\n    for (auto &&a: A) sum += a;\n    return sum;\n}\n\ntemplate<class\
    \ T>\nT POP(VI<T> &a) {\n    T x = a.back();\n    a.pop_back();\n    return x;\n\
    }\n\ntemplate<class T>\nT POP(set<T> &a) {\n    T x = *prev(a.end());\n    a.erase(x);\n\
    \    return x;\n}\n\ntemplate<class T>\nT POP(multiset<T> &a) {\n    T x = *prev(a.end());\n\
    \    a.erase(prev(a.end()));\n    return x;\n}\n\ntemplate<class T>\nT POP(pq<T>\
    \ &a) {\n    T x = a.top();\n    a.pop();\n    return x;\n}\n\ntemplate<class\
    \ T>\nT POP(deque<T> &a) {\n    T x = a.front();\n    a.pop();\n    return x;\n\
    }\n\ntemplate<class T>\nT POP(pqg<T> &a) {\n    T x = a.top();\n    a.pop();\n\
    \    return x;\n}\n\ntemplate<class Q, class G>\nVI<Q> PSUM(const VI<G> &A,int\
    \ off = 1) {\n    VI<Q> p(SZ(A) + 1);\n    FOR(i, SZ(A)) p[i + 1] = p[i] + A[i];\n\
    \    if(off == 0) p.erase(p.begin());\n    return p;\n}   \n#line 1 \"other/fastio.hpp\"\
    \nistream &operator>>(istream &in, i128 &a) {\n        string s;\n        in >>\
    \ s;\n        a = 0;\n        for (auto &it: s) if (isdigit(it)) a = a * 10 +\
    \ it - '0';\n        if (s[0] == '-') a *= -1;\n        return in;\n    }\n\n\
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
    \ x = 1) {YES(!x);}\n#line 2 \"string/zalgorithm.hpp\"\n\n//https://i.ibb.co/jkCpXcq/image.png\n\
    //https://codeforces.com/edu/course/2/lesson/3/2\n\ntemplate<typename E>\nVI<LL>\
    \ zalgorithm(const E& s){\n    int n = SZ(s);\n    VI<LL> z(n);\n    LL l = 0,r\
    \ = 0;\n    FOR(i,1,n){\n        if(i < r) z[i] = min(r - i,z[i - l]);\n     \
    \   while(i + z[i] < n && s[z[i]] == s[i + z[i]])z[i]++;\n        if(i + z[i]\
    \ > r) l = i,r = i + z[i];\n    }\n    return z;\n}\n#line 5 \"main.cpp\"\nusing\
    \ namespace std;\n\nvoid solve(){\n  INT(A,B);\n  W(A + B);\n}\n\n\n\n\nsigned\
    \ main(){\n    ios::sync_with_stdio(false),cin.tie(nullptr);\n    TEST\n    solve();\n\
    }\n"
  code: "\n#include \"template.hpp\"\n#include \"other/fastio.hpp\"\n#include \"string/zalgorithm.hpp\"\
    \nusing namespace std;\n\nvoid solve(){\n  INT(A,B);\n  W(A + B);\n}\n\n\n\n\n\
    signed main(){\n    ios::sync_with_stdio(false),cin.tie(nullptr);\n    TEST\n\
    \    solve();\n}"
  dependsOn:
  - template.hpp
  - other/fastio.hpp
  - string/zalgorithm.hpp
  isVerificationFile: false
  path: main.cpp
  requiredBy: []
  timestamp: '2024-08-30 11:48:08+05:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: main.cpp
layout: document
redirect_from:
- /library/main.cpp
- /library/main.cpp.html
title: main.cpp
---
