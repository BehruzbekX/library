---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':warning:'
  attributes:
    links:
    - https://codeforces.com/blog/entry/96344
    - https://trap.jp/post/1224/
  bundledCode: "#line 1 \"template.hpp\"\n// https://codeforces.com/blog/entry/96344\r\
    \n#pragma GCC optimize(\"Ofast,unroll-loops\")\r\n\r\n\r\n// #pragma GCC target(\"\
    avx2,popcnt\")\r\n\r\n#include <bits/stdc++.h>\r\n\r\n\r\nusing namespace std;\r\
    \n\r\n\r\n#define sz(A) ((int)(A).size())\r\n#define all(A) (A).begin(),(A).end()\r\
    \n\r\nusing u64 = unsigned long long;\r\nusing u32 = unsigned int;\r\nusing i128\
    \ = __int128;\r\nusing u128 = unsigned __int128;\r\nusing ll = long long;\r\n\
    using f128 = __float128;\r\n\r\n\r\ntemplate<typename T>\r\nusing pq = priority_queue<T>;\r\
    \ntemplate<typename T> \r\nusing pqg = priority_queue<T, vector<T>, greater<T>>;\r\
    \nusing pi = pair<ll,ll>;\r\nusing vi = vector<ll>;\r\ntemplate <class T>\r\n\
    using vc = vector<T>;\r\ntemplate <class T>\r\nusing vvc = vector<vc<T>>;\r\n\
    template <class T>\r\nusing vvvc = vector<vvc<T>>;\r\ntemplate <class T>\r\nusing\
    \ vvvvc = vector<vvvc<T>>;\r\ntemplate <class T>\r\nusing vvvvvc = vector<vvvvc<T>>;\r\
    \n#define vv(type, name, h, ...) \\\r\n  vector<vector<type>> name(h, vector<type>(__VA_ARGS__))\r\
    \n#define vvv(type, name, h, w, ...)   \\\r\n  vector<vector<vector<type>>> name(\
    \ \\\r\n      h, vector<vector<type>>(w, vector<type>(__VA_ARGS__)))\r\n#define\
    \ vvvv(type, name, a, b, c, ...)       \\\r\n  vector<vector<vector<vector<type>>>>\
    \ name( \\\r\n      a, vector<vector<vector<type>>>(       \\\r\n            \
    \ b, vector<vector<type>>(c, vector<type>(__VA_ARGS__))))\r\n\r\n\r\ntemplate<int>\r\
    \nconstexpr int mod = 0;\r\ntemplate<>\r\nconstexpr long mod<998> = 998'244'353l;\r\
    \ntemplate<>\r\nconstexpr ll mod<107> = 1000000007ll;\r\n\r\n\r\ntemplate<class\
    \ T>\r\nconstexpr T inf = 0;\r\ntemplate<>\r\nconstexpr int inf<int> = 2'147'483'647;\r\
    \ntemplate<>\r\nconstexpr ll inf<ll> = 4'223'372'036'854'775'807;\r\ntemplate<>\r\
    \nconstexpr unsigned int inf<unsigned int> = 2'147'483'647;\r\ntemplate<>\r\n\
    constexpr u64 inf<u64> = 18'446'744'073'709'551'615ull;\r\ntemplate<>\r\nconstexpr\
    \ i128 inf<i128> = i128(inf<ll>) * 2'000'000'000'000'000'000;\r\ntemplate<>\r\n\
    constexpr float inf<float> = inf<int>;\r\ntemplate<>\r\nconstexpr double inf<double>\
    \ = inf<int>;\r\ntemplate<>\r\nconstexpr long double inf<long double> = inf<ll>;\r\
    \ntemplate<>\r\nconstexpr short inf<short> = 32'767;\r\ntemplate<>\r\nconstexpr\
    \ unsigned short inf<unsigned short> = 65'535;\r\ntemplate<>\r\nconstexpr char\
    \ inf<char> = 127;\r\ntemplate<>\r\nconstexpr unsigned char inf<unsigned char>\
    \ = 255;\r\ntemplate<>\r\nconstexpr long inf<long> = 2'147'483'647L;\r\ntemplate<>\r\
    \nconstexpr unsigned long inf<unsigned long> = 4'294'967'295UL;\r\n\r\n// https://trap.jp/post/1224/\r\
    \n\r\n#define FOR1(a) for (ll _ = 0; _ < ll(a); ++_)\r\n#define FOR2(i, a) for\
    \ (ll i = 0; i < ll(a); ++i)\r\n#define FOR3(i, a, b) for (ll i = a; i < ll(b);\
    \ ++i)\r\n#define FOR4(i, a, b, c) for (ll i = a; i < ll(b); i += (c))\r\n#define\
    \ FOR1_R(a) for (ll i = (a)-1; i >= ll(0); --i)\r\n#define FOR2_R(i, a) for (ll\
    \ i = (a)-1; i >= ll(0); --i)\r\n#define FOR3_R(i, a, b) for (ll i = (b)-1; i\
    \ >= ll(a); --i)\r\n#define overload4(a, b, c, d, e, ...) e\r\n#define overload3(a,\
    \ b, c, d, ...) d\r\n#define FOR(...) overload4(__VA_ARGS__, FOR4, FOR3, FOR2,\
    \ FOR1)(__VA_ARGS__)\r\n#define FOR_R(...) overload3(__VA_ARGS__, FOR3_R, FOR2_R,\
    \ FOR1_R)(__VA_ARGS__)\r\n\r\n#define F first\r\n#define S second\r\n#define MP\
    \ make_pair\r\n#define MT make_tuple\r\n#define PB push_back\r\n#define EB emplace_back\r\
    \n#define MIN(A) *min_element(all(A))\r\n#define MAX(A) *max_element(all(A))\r\
    \n#define LB(c,x) distance((c).begin(), lower_bound(all(c),(x)))\r\n#define UB(c,x)\
    \ distance((c).begin(), upper_bound(all(c),(x)))\r\n#define UNIQUE(x) sort(all(x)),\
    \ x.erase(unique(all(x)), x.end()), x.shrink_to_fit()\r\n\r\nint popcnt(int x)\
    \ { return __builtin_popcount(x); }\r\nint popcnt(ll x) { return __builtin_popcountll(x);\
    \ }\r\nint popcnt(u64 x) { return __builtin_popcountll(x); }\r\n\r\n\r\ntemplate<class\
    \ U, class T, int Z>\r\nU SMOD(T &x, T &y) {\r\n    x %= mod<Z>;\r\n    y %= mod<Z>;\r\
    \n    U result = (x + y) % mod<Z>;\r\n    return result;\r\n}\r\ntemplate<class\
    \ U,class T,int Z>\r\nU PMOD(T &x,T &y) {\r\n    x %= mod<Z>,y %= mod<Z>;\r\n\
    \    U result = (x * y) % mod<Z>;\r\n    return result;\r\n}\r\n\r\ntemplate <class\
    \ T, class S>\r\ninline bool chmax(T &a, const S &b) {\r\n  return (a < b ? a\
    \ = b, 1 : 0);\r\n}\r\ntemplate <class T, class S>\r\ninline bool chmin(T &a,\
    \ const S &b) {\r\n  return (a > b ? a = b, 1 : 0);\r\n}\r\n\r\ntemplate<class\
    \ T, class U>\r\nT SUM(const vector<U> &A) {\r\n    T sum = 0ll;\r\n    for (auto\
    \ &&a: A) sum += a;\r\n    return sum;\r\n}\r\n\r\ntemplate<class T>\r\nT POP(vc<T>\
    \ &a) {\r\n    T x = a.back();\r\n    a.pop_back();\r\n    return x;\r\n}\r\n\r\
    \ntemplate<class T>\r\nT POP(set<T> &a) {\r\n    T x = *prev(a.end());\r\n   \
    \ a.erase(x);\r\n    return x;\r\n}\r\n\r\ntemplate<class T>\r\nT POP(multiset<T>\
    \ &a) {\r\n    T x = *prev(a.end());\r\n    a.erase(prev(a.end()));\r\n    return\
    \ x;\r\n}\r\n\r\ntemplate<class T>\r\nT POP(pq<T> &a) {\r\n    T x = a.top();\r\
    \n    a.pop();\r\n    return x;\r\n}\r\n\r\ntemplate<class T>\r\nT POP(deque<T>\
    \ &a) {\r\n    T x = a.front();\r\n    a.pop();\r\n    return x;\r\n}\r\n\r\n\
    template<class T>\r\nT POP(pqg<T> &a) {\r\n    T x = a.top();\r\n    a.pop();\r\
    \n    return x;\r\n}\r\n\r\ntemplate<class Q, class G>\r\nvc<Q> PSUM(const vc<G>\
    \ &A,int off = 1) {\r\n    vc<Q> p(SZ(A) + 1);\r\n    FOR(i, SZ(A)) p[i + 1] =\
    \ p[i] + A[i];\r\n    if(off == 0) p.erase(p.begin());\r\n    return p;\r\n} \
    \  \n"
  code: "// https://codeforces.com/blog/entry/96344\r\n#pragma GCC optimize(\"Ofast,unroll-loops\"\
    )\r\n\r\n\r\n// #pragma GCC target(\"avx2,popcnt\")\r\n\r\n#include <bits/stdc++.h>\r\
    \n\r\n\r\nusing namespace std;\r\n\r\n\r\n#define sz(A) ((int)(A).size())\r\n\
    #define all(A) (A).begin(),(A).end()\r\n\r\nusing u64 = unsigned long long;\r\n\
    using u32 = unsigned int;\r\nusing i128 = __int128;\r\nusing u128 = unsigned __int128;\r\
    \nusing ll = long long;\r\nusing f128 = __float128;\r\n\r\n\r\ntemplate<typename\
    \ T>\r\nusing pq = priority_queue<T>;\r\ntemplate<typename T> \r\nusing pqg =\
    \ priority_queue<T, vector<T>, greater<T>>;\r\nusing pi = pair<ll,ll>;\r\nusing\
    \ vi = vector<ll>;\r\ntemplate <class T>\r\nusing vc = vector<T>;\r\ntemplate\
    \ <class T>\r\nusing vvc = vector<vc<T>>;\r\ntemplate <class T>\r\nusing vvvc\
    \ = vector<vvc<T>>;\r\ntemplate <class T>\r\nusing vvvvc = vector<vvvc<T>>;\r\n\
    template <class T>\r\nusing vvvvvc = vector<vvvvc<T>>;\r\n#define vv(type, name,\
    \ h, ...) \\\r\n  vector<vector<type>> name(h, vector<type>(__VA_ARGS__))\r\n\
    #define vvv(type, name, h, w, ...)   \\\r\n  vector<vector<vector<type>>> name(\
    \ \\\r\n      h, vector<vector<type>>(w, vector<type>(__VA_ARGS__)))\r\n#define\
    \ vvvv(type, name, a, b, c, ...)       \\\r\n  vector<vector<vector<vector<type>>>>\
    \ name( \\\r\n      a, vector<vector<vector<type>>>(       \\\r\n            \
    \ b, vector<vector<type>>(c, vector<type>(__VA_ARGS__))))\r\n\r\n\r\ntemplate<int>\r\
    \nconstexpr int mod = 0;\r\ntemplate<>\r\nconstexpr long mod<998> = 998'244'353l;\r\
    \ntemplate<>\r\nconstexpr ll mod<107> = 1000000007ll;\r\n\r\n\r\ntemplate<class\
    \ T>\r\nconstexpr T inf = 0;\r\ntemplate<>\r\nconstexpr int inf<int> = 2'147'483'647;\r\
    \ntemplate<>\r\nconstexpr ll inf<ll> = 4'223'372'036'854'775'807;\r\ntemplate<>\r\
    \nconstexpr unsigned int inf<unsigned int> = 2'147'483'647;\r\ntemplate<>\r\n\
    constexpr u64 inf<u64> = 18'446'744'073'709'551'615ull;\r\ntemplate<>\r\nconstexpr\
    \ i128 inf<i128> = i128(inf<ll>) * 2'000'000'000'000'000'000;\r\ntemplate<>\r\n\
    constexpr float inf<float> = inf<int>;\r\ntemplate<>\r\nconstexpr double inf<double>\
    \ = inf<int>;\r\ntemplate<>\r\nconstexpr long double inf<long double> = inf<ll>;\r\
    \ntemplate<>\r\nconstexpr short inf<short> = 32'767;\r\ntemplate<>\r\nconstexpr\
    \ unsigned short inf<unsigned short> = 65'535;\r\ntemplate<>\r\nconstexpr char\
    \ inf<char> = 127;\r\ntemplate<>\r\nconstexpr unsigned char inf<unsigned char>\
    \ = 255;\r\ntemplate<>\r\nconstexpr long inf<long> = 2'147'483'647L;\r\ntemplate<>\r\
    \nconstexpr unsigned long inf<unsigned long> = 4'294'967'295UL;\r\n\r\n// https://trap.jp/post/1224/\r\
    \n\r\n#define FOR1(a) for (ll _ = 0; _ < ll(a); ++_)\r\n#define FOR2(i, a) for\
    \ (ll i = 0; i < ll(a); ++i)\r\n#define FOR3(i, a, b) for (ll i = a; i < ll(b);\
    \ ++i)\r\n#define FOR4(i, a, b, c) for (ll i = a; i < ll(b); i += (c))\r\n#define\
    \ FOR1_R(a) for (ll i = (a)-1; i >= ll(0); --i)\r\n#define FOR2_R(i, a) for (ll\
    \ i = (a)-1; i >= ll(0); --i)\r\n#define FOR3_R(i, a, b) for (ll i = (b)-1; i\
    \ >= ll(a); --i)\r\n#define overload4(a, b, c, d, e, ...) e\r\n#define overload3(a,\
    \ b, c, d, ...) d\r\n#define FOR(...) overload4(__VA_ARGS__, FOR4, FOR3, FOR2,\
    \ FOR1)(__VA_ARGS__)\r\n#define FOR_R(...) overload3(__VA_ARGS__, FOR3_R, FOR2_R,\
    \ FOR1_R)(__VA_ARGS__)\r\n\r\n#define F first\r\n#define S second\r\n#define MP\
    \ make_pair\r\n#define MT make_tuple\r\n#define PB push_back\r\n#define EB emplace_back\r\
    \n#define MIN(A) *min_element(all(A))\r\n#define MAX(A) *max_element(all(A))\r\
    \n#define LB(c,x) distance((c).begin(), lower_bound(all(c),(x)))\r\n#define UB(c,x)\
    \ distance((c).begin(), upper_bound(all(c),(x)))\r\n#define UNIQUE(x) sort(all(x)),\
    \ x.erase(unique(all(x)), x.end()), x.shrink_to_fit()\r\n\r\nint popcnt(int x)\
    \ { return __builtin_popcount(x); }\r\nint popcnt(ll x) { return __builtin_popcountll(x);\
    \ }\r\nint popcnt(u64 x) { return __builtin_popcountll(x); }\r\n\r\n\r\ntemplate<class\
    \ U, class T, int Z>\r\nU SMOD(T &x, T &y) {\r\n    x %= mod<Z>;\r\n    y %= mod<Z>;\r\
    \n    U result = (x + y) % mod<Z>;\r\n    return result;\r\n}\r\ntemplate<class\
    \ U,class T,int Z>\r\nU PMOD(T &x,T &y) {\r\n    x %= mod<Z>,y %= mod<Z>;\r\n\
    \    U result = (x * y) % mod<Z>;\r\n    return result;\r\n}\r\n\r\ntemplate <class\
    \ T, class S>\r\ninline bool chmax(T &a, const S &b) {\r\n  return (a < b ? a\
    \ = b, 1 : 0);\r\n}\r\ntemplate <class T, class S>\r\ninline bool chmin(T &a,\
    \ const S &b) {\r\n  return (a > b ? a = b, 1 : 0);\r\n}\r\n\r\ntemplate<class\
    \ T, class U>\r\nT SUM(const vector<U> &A) {\r\n    T sum = 0ll;\r\n    for (auto\
    \ &&a: A) sum += a;\r\n    return sum;\r\n}\r\n\r\ntemplate<class T>\r\nT POP(vc<T>\
    \ &a) {\r\n    T x = a.back();\r\n    a.pop_back();\r\n    return x;\r\n}\r\n\r\
    \ntemplate<class T>\r\nT POP(set<T> &a) {\r\n    T x = *prev(a.end());\r\n   \
    \ a.erase(x);\r\n    return x;\r\n}\r\n\r\ntemplate<class T>\r\nT POP(multiset<T>\
    \ &a) {\r\n    T x = *prev(a.end());\r\n    a.erase(prev(a.end()));\r\n    return\
    \ x;\r\n}\r\n\r\ntemplate<class T>\r\nT POP(pq<T> &a) {\r\n    T x = a.top();\r\
    \n    a.pop();\r\n    return x;\r\n}\r\n\r\ntemplate<class T>\r\nT POP(deque<T>\
    \ &a) {\r\n    T x = a.front();\r\n    a.pop();\r\n    return x;\r\n}\r\n\r\n\
    template<class T>\r\nT POP(pqg<T> &a) {\r\n    T x = a.top();\r\n    a.pop();\r\
    \n    return x;\r\n}\r\n\r\ntemplate<class Q, class G>\r\nvc<Q> PSUM(const vc<G>\
    \ &A,int off = 1) {\r\n    vc<Q> p(SZ(A) + 1);\r\n    FOR(i, SZ(A)) p[i + 1] =\
    \ p[i] + A[i];\r\n    if(off == 0) p.erase(p.begin());\r\n    return p;\r\n} \
    \  "
  dependsOn: []
  isVerificationFile: false
  path: template.hpp
  requiredBy: []
  timestamp: '2025-01-31 21:31:14+05:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: template.hpp
layout: document
redirect_from:
- /library/template.hpp
- /library/template.hpp.html
title: template.hpp
---
