---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: ds/fenwick/fenwick.hpp
    title: ds/fenwick/fenwick.hpp
  - icon: ':heavy_check_mark:'
    path: monoid/add.hpp
    title: monoid/add.hpp
  - icon: ':heavy_check_mark:'
    path: other/fastio.hpp
    title: other/fastio.hpp
  - icon: ':heavy_check_mark:'
    path: template.hpp
    title: template.hpp
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: cpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    '*NOT_SPECIAL_COMMENTS*': ''
    PROBLEM: https://judge.yosupo.jp/problem/point_add_range_sum
    links:
    - https://judge.yosupo.jp/problem/point_add_range_sum
  bundledCode: "#line 1 \"test/library_checker/point_add_range_sum.test.cpp\"\n#define\
    \ PROBLEM \"https://judge.yosupo.jp/problem/point_add_range_sum\"\n\n#line 1 \"\
    template.hpp\"\n// https://codeforces.com/blog/entry/96344\n#pragma GCC optimize(\"\
    Ofast,unroll-loops\")\n\n\n// #pragma GCC target(\"avx2,popcnt\")\n\n#include\
    \ <bits/stdc++.h>\n\n\nusing namespace std;\n\n\n#define sz(A) ((int)(A).size())\n\
    #define all(A) (A).begin(),(A).end()\n\nusing u64 = unsigned long long;\nusing\
    \ u32 = unsigned int;\nusing i128 = __int128;\nusing u128 = unsigned __int128;\n\
    using ll = long long;\nusing f128 = __float128;\n\n\ntemplate<typename T>\nusing\
    \ pq = priority_queue<T>;\ntemplate<typename T> \nusing pqg = priority_queue<T,\
    \ vector<T>, greater<T>>;\nusing pi = pair<ll,ll>;\nusing vi = vector<ll>;\ntemplate\
    \ <class T>\nusing vc = vector<T>;\ntemplate <class T>\nusing vvc = vector<vc<T>>;\n\
    template <class T>\nusing vvvc = vector<vvc<T>>;\ntemplate <class T>\nusing vvvvc\
    \ = vector<vvvc<T>>;\ntemplate <class T>\nusing vvvvvc = vector<vvvvc<T>>;\n#define\
    \ vv(type, name, h, ...) \\\n  vector<vector<type>> name(h, vector<type>(__VA_ARGS__))\n\
    #define vvv(type, name, h, w, ...)   \\\n  vector<vector<vector<type>>> name(\
    \ \\\n      h, vector<vector<type>>(w, vector<type>(__VA_ARGS__)))\n#define vvvv(type,\
    \ name, a, b, c, ...)       \\\n  vector<vector<vector<vector<type>>>> name( \\\
    \n      a, vector<vector<vector<type>>>(       \\\n             b, vector<vector<type>>(c,\
    \ vector<type>(__VA_ARGS__))))\n\n\ntemplate<int>\nconstexpr int mod = 0;\ntemplate<>\n\
    constexpr long mod<998> = 998'244'353l;\ntemplate<>\nconstexpr ll mod<107> = 1e9\
    \ + 7ll;\n\n\ntemplate<class T>\nconstexpr T inf = 0;\ntemplate<>\nconstexpr int\
    \ inf<int> = 2'147'483'647;\ntemplate<>\nconstexpr ll inf<ll> = 4'223'372'036'854'775'807;\n\
    template<>\nconstexpr unsigned int inf<unsigned int> = 2'147'483'647;\ntemplate<>\n\
    constexpr u64 inf<u64> = 18'446'744'073'709'551'615ull;\ntemplate<>\nconstexpr\
    \ i128 inf<i128> = i128(inf<ll>) * 2'000'000'000'000'000'000;\ntemplate<>\nconstexpr\
    \ float inf<float> = inf<int>;\ntemplate<>\nconstexpr double inf<double> = inf<int>;\n\
    template<>\nconstexpr long double inf<long double> = inf<ll>;\ntemplate<>\nconstexpr\
    \ short inf<short> = 32'767;\ntemplate<>\nconstexpr unsigned short inf<unsigned\
    \ short> = 65'535;\ntemplate<>\nconstexpr char inf<char> = 127;\ntemplate<>\n\
    constexpr unsigned char inf<unsigned char> = 255;\ntemplate<>\nconstexpr long\
    \ inf<long> = 2'147'483'647L;\ntemplate<>\nconstexpr unsigned long inf<unsigned\
    \ long> = 4'294'967'295UL;\n\n// https://trap.jp/post/1224/\n\n#define FOR1(a)\
    \ for (ll _ = 0; _ < ll(a); ++_)\n#define FOR2(i, a) for (ll i = 0; i < ll(a);\
    \ ++i)\n#define FOR3(i, a, b) for (ll i = a; i < ll(b); ++i)\n#define FOR4(i,\
    \ a, b, c) for (ll i = a; i < ll(b); i += (c))\n#define FOR1_R(a) for (ll i =\
    \ (a)-1; i >= ll(0); --i)\n#define FOR2_R(i, a) for (ll i = (a)-1; i >= ll(0);\
    \ --i)\n#define FOR3_R(i, a, b) for (ll i = (b)-1; i >= ll(a); --i)\n#define overload4(a,\
    \ b, c, d, e, ...) e\n#define overload3(a, b, c, d, ...) d\n#define FOR(...) overload4(__VA_ARGS__,\
    \ FOR4, FOR3, FOR2, FOR1)(__VA_ARGS__)\n#define FOR_R(...) overload3(__VA_ARGS__,\
    \ FOR3_R, FOR2_R, FOR1_R)(__VA_ARGS__)\n#define TEST INT(__T);FOR(__T)\n\n#define\
    \ F first\n#define S second\n#define MP make_pair\n#define MT make_tuple\n#define\
    \ PB push_back\n#define EB emplace_back\n#define MIN(A) *min_element(all(A))\n\
    #define MAX(A) *max_element(all(A))\n#define LB(c,x) distance((c).begin(), lower_bound(all(c),(x)))\n\
    #define UB(c,x) distance((c).begin(), upper_bound(all(c),(x)))\n#define UNIQUE(x)\
    \ sort(all(x)), x.erase(unique(all(x)), x.end()), x.shrink_to_fit()\n\nint popcnt(int\
    \ x) { return __builtin_popcount(x); }\nint popcnt(ll x) { return __builtin_popcountll(x);\
    \ }\nint popcnt(u64 x) { return __builtin_popcountll(x); }\n\n\ntemplate<class\
    \ U, class T, int Z>\nU SMOD(T &x, T &y) {\n    x %= mod<Z>;\n    y %= mod<Z>;\n\
    \    U result = (x + y) % mod<Z>;\n    return result;\n}\ntemplate<class U,class\
    \ T,int Z>\nU PMOD(T &x,T &y) {\n    x %= mod<Z>,y %= mod<Z>;\n    U result =\
    \ (x * y) % mod<Z>;\n    return result;\n}\n\ntemplate <class T, class S>\ninline\
    \ bool chmax(T &a, const S &b) {\n  return (a < b ? a = b, 1 : 0);\n}\ntemplate\
    \ <class T, class S>\ninline bool chmin(T &a, const S &b) {\n  return (a > b ?\
    \ a = b, 1 : 0);\n}\n\ntemplate<class T, class U>\nT SUM(const vector<U> &A) {\n\
    \    T sum = 0ll;\n    for (auto &&a: A) sum += a;\n    return sum;\n}\n\ntemplate<class\
    \ T>\nT POP(vc<T> &a) {\n    T x = a.back();\n    a.pop_back();\n    return x;\n\
    }\n\ntemplate<class T>\nT POP(set<T> &a) {\n    T x = *prev(a.end());\n    a.erase(x);\n\
    \    return x;\n}\n\ntemplate<class T>\nT POP(multiset<T> &a) {\n    T x = *prev(a.end());\n\
    \    a.erase(prev(a.end()));\n    return x;\n}\n\ntemplate<class T>\nT POP(pq<T>\
    \ &a) {\n    T x = a.top();\n    a.pop();\n    return x;\n}\n\ntemplate<class\
    \ T>\nT POP(deque<T> &a) {\n    T x = a.front();\n    a.pop();\n    return x;\n\
    }\n\ntemplate<class T>\nT POP(pqg<T> &a) {\n    T x = a.top();\n    a.pop();\n\
    \    return x;\n}\n\ntemplate<class Q, class G>\nvc<Q> PSUM(const vc<G> &A,int\
    \ off = 1) {\n    vc<Q> p(SZ(A) + 1);\n    FOR(i, SZ(A)) p[i + 1] = p[i] + A[i];\n\
    \    if(off == 0) p.erase(p.begin());\n    return p;\n}   \n#line 1 \"other/fastio.hpp\"\
    \nistream &operator>>(istream &in, i128 &a) {\n        string s;\n        in >>\
    \ s;\n        a = 0;\n        for (auto &it: s) if (isdigit(it)) a = a * 10 +\
    \ it - '0';\n        if (s[0] == '-') a *= -1;\n        return in;\n    }\n\n\
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
    \ \"yes\" : \"no\");}\nvoid no(bool x = 1) {YES(!x);}\n#line 2 \"monoid/add.hpp\"\
    \n\ntemplate <typename E>\nstruct Monoid_Add {\n  using X = E;\n  using value_type\
    \ = X;\n  static constexpr X op(const X &x, const X &y) noexcept { return x +\
    \ y; }\n  static constexpr X inverse(const X &x) noexcept { return -x; }\n  static\
    \ constexpr X power(const X &x, ll n) noexcept { return X(n) * x; }\n  static\
    \ constexpr X unit() { return X(0); }\n  static constexpr bool commute = true;\n\
    };\n#line 2 \"ds/fenwick/fenwick.hpp\"\n\ntemplate<typename Monoid>\nstruct Fenwick{\n\
    \tusing G = Monoid;\n\tusing X = typename Monoid::value_type;\n\tvector<X> bit;\n\
    \tint n;\n\tFenwick(int n){\n\t\tthis->n = n;\n\t\tbit.assign(n + 1,G::unit());\t\
    \t\n\t}\n\tFenwick(vector<X>& A):Fenwick(sz(A)){\n\t\tFOR(i,sz(A)){\n\t\t\tupdate(i\
    \ + 1,A[i]);\n\t\t}\n\t}\n\tX get(int r){ //A[1] op ... a[r]\n\t\tX res = G::unit();\n\
    \t\tfor(;r > 0;r -= r & -r){\n\t\t\tres = G::op(res,bit[r]);\n\t\t}\n\t\treturn\
    \ res;\n\t}\n\tX get(int l,int r){\n\t\treturn G::op(get(r),G::inverse(get(l -\
    \ 1)));\n\t}\n\tvoid update(int idx,X del){ //1-indexed q\n\t\tFOR(i,idx,n + 1,i\
    \ & -i) bit[i] = G::op(bit[i],del);\n\t}\n\tvoid update(int l,int r,X x){\n\t\t\
    update(l,G::power(x,1)),update(r + 1,G::inverse(G::power(x, 1)));\n\t}\n};\n#line\
    \ 7 \"test/library_checker/point_add_range_sum.test.cpp\"\n\nvoid solve(){\n \
    \   LL(N,Q);\n    VEC(ll,a,N);\n    Fenwick<Monoid_Add<ll>> fenwick(a);\n    FOR(Q){\n\
    \        INT(type,l,r);\n        if(type == 0) l++,fenwick.update(l,r);\n    \
    \    else ++l,W(fenwick.get(l,r));\n    }\n}\nsigned main(){\n    ios::sync_with_stdio(false),cin.tie(nullptr);\n\
    \    solve();\n}\n"
  code: "#define PROBLEM \"https://judge.yosupo.jp/problem/point_add_range_sum\"\n\
    \n#include \"template.hpp\"\n#include \"other/fastio.hpp\"\n#include \"monoid/add.hpp\"\
    \n#include \"ds/fenwick/fenwick.hpp\"\n\nvoid solve(){\n    LL(N,Q);\n    VEC(ll,a,N);\n\
    \    Fenwick<Monoid_Add<ll>> fenwick(a);\n    FOR(Q){\n        INT(type,l,r);\n\
    \        if(type == 0) l++,fenwick.update(l,r);\n        else ++l,W(fenwick.get(l,r));\n\
    \    }\n}\nsigned main(){\n    ios::sync_with_stdio(false),cin.tie(nullptr);\n\
    \    solve();\n}"
  dependsOn:
  - template.hpp
  - other/fastio.hpp
  - monoid/add.hpp
  - ds/fenwick/fenwick.hpp
  isVerificationFile: true
  path: test/library_checker/point_add_range_sum.test.cpp
  requiredBy: []
  timestamp: '2024-09-01 12:11:39+05:00'
  verificationStatus: TEST_ACCEPTED
  verifiedWith: []
documentation_of: test/library_checker/point_add_range_sum.test.cpp
layout: document
redirect_from:
- /verify/test/library_checker/point_add_range_sum.test.cpp
- /verify/test/library_checker/point_add_range_sum.test.cpp.html
title: test/library_checker/point_add_range_sum.test.cpp
---
