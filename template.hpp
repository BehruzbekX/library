// https://codeforces.com/blog/entry/96344
#pragma GCC optimize("Ofast,unroll-loops")


// #pragma GCC target("avx2,popcnt")

#include <bits/stdc++.h>


using namespace std;


#define sz(A) ((int)(A).size())
#define all(A) (A).begin(),(A).end()

using u64 = unsigned long long;
using u32 = unsigned int;
using i128 = __int128;
using u128 = unsigned __int128;
using ll = long long;
using f128 = __float128;


template<typename T>
using pq = priority_queue<T>;
template<typename T> 
using pqg = priority_queue<T, vector<T>, greater<T>>;
using pi = pair<ll,ll>;
using vi = vector<ll>;
template <class T>
using vc = vector<T>;
template <class T>
using vvc = vector<vc<T>>;
template <class T>
using vvvc = vector<vvc<T>>;
template <class T>
using vvvvc = vector<vvvc<T>>;
template <class T>
using vvvvvc = vector<vvvvc<T>>;
#define vv(type, name, h, ...) \
  vector<vector<type>> name(h, vector<type>(__VA_ARGS__))
#define vvv(type, name, h, w, ...)   \
  vector<vector<vector<type>>> name( \
      h, vector<vector<type>>(w, vector<type>(__VA_ARGS__)))
#define vvvv(type, name, a, b, c, ...)       \
  vector<vector<vector<vector<type>>>> name( \
      a, vector<vector<vector<type>>>(       \
             b, vector<vector<type>>(c, vector<type>(__VA_ARGS__))))


template<int>
constexpr int mod = 0;
template<>
constexpr long mod<998> = 998'244'353l;
template<>
constexpr ll mod<107> = 1000000007ll;


template<class T>
constexpr T inf = 0;
template<>
constexpr int inf<int> = 2'147'483'647;
template<>
constexpr ll inf<ll> = 4'223'372'036'854'775'807;
template<>
constexpr unsigned int inf<unsigned int> = 2'147'483'647;
template<>
constexpr u64 inf<u64> = 18'446'744'073'709'551'615ull;
template<>
constexpr i128 inf<i128> = i128(inf<ll>) * 2'000'000'000'000'000'000;
template<>
constexpr float inf<float> = inf<int>;
template<>
constexpr double inf<double> = inf<int>;
template<>
constexpr long double inf<long double> = inf<ll>;
template<>
constexpr short inf<short> = 32'767;
template<>
constexpr unsigned short inf<unsigned short> = 65'535;
template<>
constexpr char inf<char> = 127;
template<>
constexpr unsigned char inf<unsigned char> = 255;
template<>
constexpr long inf<long> = 2'147'483'647L;
template<>
constexpr unsigned long inf<unsigned long> = 4'294'967'295UL;

// https://trap.jp/post/1224/

#define FOR1(a) for (ll _ = 0; _ < ll(a); ++_)
#define FOR2(i, a) for (ll i = 0; i < ll(a); ++i)
#define FOR3(i, a, b) for (ll i = a; i < ll(b); ++i)
#define FOR4(i, a, b, c) for (ll i = a; i < ll(b); i += (c))
#define FOR1_R(a) for (ll i = (a)-1; i >= ll(0); --i)
#define FOR2_R(i, a) for (ll i = (a)-1; i >= ll(0); --i)
#define FOR3_R(i, a, b) for (ll i = (b)-1; i >= ll(a); --i)
#define overload4(a, b, c, d, e, ...) e
#define overload3(a, b, c, d, ...) d
#define FOR(...) overload4(__VA_ARGS__, FOR4, FOR3, FOR2, FOR1)(__VA_ARGS__)
#define FOR_R(...) overload3(__VA_ARGS__, FOR3_R, FOR2_R, FOR1_R)(__VA_ARGS__)

#define F first
#define S second
#define MP make_pair
#define MT make_tuple
#define PB push_back
#define EB emplace_back
#define MIN(A) *min_element(all(A))
#define MAX(A) *max_element(all(A))
#define LB(c,x) distance((c).begin(), lower_bound(all(c),(x)))
#define UB(c,x) distance((c).begin(), upper_bound(all(c),(x)))
#define UNIQUE(x) sort(all(x)), x.erase(unique(all(x)), x.end()), x.shrink_to_fit()

int popcnt(int x) { return __builtin_popcount(x); }
int popcnt(ll x) { return __builtin_popcountll(x); }
int popcnt(u64 x) { return __builtin_popcountll(x); }


template<class U, class T, int Z>
U SMOD(T &x, T &y) {
    x %= mod<Z>;
    y %= mod<Z>;
    U result = (x + y) % mod<Z>;
    return result;
}
template<class U,class T,int Z>
U PMOD(T &x,T &y) {
    x %= mod<Z>,y %= mod<Z>;
    U result = (x * y) % mod<Z>;
    return result;
}

template <class T, class S>
inline bool chmax(T &a, const S &b) {
  return (a < b ? a = b, 1 : 0);
}
template <class T, class S>
inline bool chmin(T &a, const S &b) {
  return (a > b ? a = b, 1 : 0);
}

template<class T, class U>
T SUM(const vector<U> &A) {
    T sum = 0ll;
    for (auto &&a: A) sum += a;
    return sum;
}

template<class T>
T POP(vc<T> &a) {
    T x = a.back();
    a.pop_back();
    return x;
}

template<class T>
T POP(set<T> &a) {
    T x = *prev(a.end());
    a.erase(x);
    return x;
}

template<class T>
T POP(multiset<T> &a) {
    T x = *prev(a.end());
    a.erase(prev(a.end()));
    return x;
}

template<class T>
T POP(pq<T> &a) {
    T x = a.top();
    a.pop();
    return x;
}

template<class T>
T POP(deque<T> &a) {
    T x = a.front();
    a.pop();
    return x;
}

template<class T>
T POP(pqg<T> &a) {
    T x = a.top();
    a.pop();
    return x;
}

template<class Q, class G>
vc<Q> PSUM(const vc<G> &A,int off = 1) {
    vc<Q> p(SZ(A) + 1);
    FOR(i, SZ(A)) p[i + 1] = p[i] + A[i];
    if(off == 0) p.erase(p.begin());
    return p;
}   