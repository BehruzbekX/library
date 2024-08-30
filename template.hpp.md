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
    links:
    - https://trap.jp/post/1224/
  bundledCode: "#line 1 \"template.hpp\"\n// #pragma GCC target(\"avx2,popcnt\")\n\
    \n\n#include <bits/stdc++.h>\n\n\nusing namespace std;\n\ntemplate<typename T>\n\
    using VI = vector<T>;\ntemplate<typename T>\nusing pq = priority_queue<T>;\ntemplate<class\
    \ T>\nusing pqg = priority_queue<T, VI<T>, greater<T>>;\n\n#define SZ(A) ((int)(A).size())\n\
    #define ALL(A) (A).begin(),(A).end()\n\nusing LL = long long;\nusing ULL = unsigned\
    \ long long;\nusing i128 = __int128;\nusing u128 = unsigned __int128;\n\ntemplate<int>\n\
    constexpr int mod = 0;\ntemplate<>\nconstexpr long mod<998> = 998'244'353l;\n\
    template<>\nconstexpr LL mod<107> = 1e9 + 7LL;\n\n\ntemplate<class T>\nconstexpr\
    \ T inf = 0;\ntemplate<>\nconstexpr int inf<int> = 2'147'483'647;\ntemplate<>\n\
    constexpr LL inf<LL> = 4'223'372'036'854'775'807;\ntemplate<>\nconstexpr unsigned\
    \ int inf<unsigned int> = 2'147'483'647;\ntemplate<>\nconstexpr ULL inf<ULL> =\
    \ 18'446'744'073'709'551'615ULL;\ntemplate<>\nconstexpr i128 inf<i128> = i128(inf<LL>)\
    \ * 2'000'000'000'000'000'000;\ntemplate<>\nconstexpr float inf<float> = inf<int>;\n\
    template<>\nconstexpr double inf<double> = inf<int>;\ntemplate<>\nconstexpr long\
    \ double inf<long double> = inf<LL>;\ntemplate<>\nconstexpr short inf<short> =\
    \ 32'767;\ntemplate<>\nconstexpr unsigned short inf<unsigned short> = 65'535;\n\
    template<>\nconstexpr char inf<char> = 127;\ntemplate<>\nconstexpr unsigned char\
    \ inf<unsigned char> = 255;\ntemplate<>\nconstexpr long inf<long> = 2'147'483'647L;\n\
    template<>\nconstexpr unsigned long inf<unsigned long> = 4'294'967'295UL;\n\n\
    // https://trap.jp/post/1224/\n\n#define FOR1(a) for (LL _ = 0; _ < (a); ++_)\n\
    #define FOR2(i, a) for (LL i = 0; i < (a); ++i)\n#define FOR3(i, a, b) for (LL\
    \ i = a; i < (b); ++i)\n#define FOR4(i, a, b, c) for (LL i = a; i < (b); i +=\
    \ (c))\n#define FOR1_R(a) for (LL i = (a)-1; i >= (0); --i)\n#define FOR2_R(i,\
    \ a) for (LL i = (a)-1; i >= (0); --i)\n#define FOR3_R(i, a, b) for (LL i = (b)-1;\
    \ i >= (a); --i)\n#define overload4(a, b, c, d, e, ...) e\n#define overload3(a,\
    \ b, c, d, ...) d\n#define FOR(...) overload4(__VA_ARGS__, FOR4, FOR3, FOR2, FOR1)(__VA_ARGS__)\n\
    #define FOR_R(...) overload3(__VA_ARGS__, FOR3_R, FOR2_R, FOR1_R)(__VA_ARGS__)\n\
    #define TEST INT(__T);FOR(__T)\n\n#define F first\n#define S second\n#define MP\
    \ make_pair\n#define PB push_back\n#define EB emplace_back\n#define MIN(A) *min_element(ALL(A))\n\
    #define MAX(A) *max_element(ALL(A))\n#define LB(c,x) distance((c).begin(), lower_bound(ALL(c),(x)))\n\
    #define UB(c,x) distance((c).begin(), upper_bound(ALL(c),(x)))\n\nint popcnt(int\
    \ x) { return __builtin_popcount(x); }\nint popcnt(LL x) { return __builtin_popcountll(x);\
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
    \    if(off == 0) p.erase(p.begin());\n    return p;\n}   \n"
  code: "// #pragma GCC target(\"avx2,popcnt\")\n\n\n#include <bits/stdc++.h>\n\n\n\
    using namespace std;\n\ntemplate<typename T>\nusing VI = vector<T>;\ntemplate<typename\
    \ T>\nusing pq = priority_queue<T>;\ntemplate<class T>\nusing pqg = priority_queue<T,\
    \ VI<T>, greater<T>>;\n\n#define SZ(A) ((int)(A).size())\n#define ALL(A) (A).begin(),(A).end()\n\
    \nusing LL = long long;\nusing ULL = unsigned long long;\nusing i128 = __int128;\n\
    using u128 = unsigned __int128;\n\ntemplate<int>\nconstexpr int mod = 0;\ntemplate<>\n\
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
    \    if(off == 0) p.erase(p.begin());\n    return p;\n}   "
  dependsOn: []
  isVerificationFile: false
  path: template.hpp
  requiredBy:
  - main.cpp
  timestamp: '2024-08-30 11:48:08+05:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - test/mytest/fenwickraq.test.cpp
  - test/mytest/issubstring.test.cpp
  - test/library_checker/aplusb.test.cpp
documentation_of: template.hpp
layout: document
redirect_from:
- /library/template.hpp
- /library/template.hpp.html
title: template.hpp
---
