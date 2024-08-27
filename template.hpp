// #pragma GCC target("avx2,popcnt")


#include <bits/stdc++.h>


using namespace std;

template<typename T>
using VI = vector<T>;
template<typename T>
using pq = priority_queue<T>;
template<class T>
using pqg = priority_queue<T, VI<T>, greater<int>>;

#define SZ(A) ((int)(A).size())
#define ALL(A) (A).begin(),(A).end()

using LL = long long;
using ULL = unsigned LL;
using i128 = __int128;
using u128 = unsigned __int128;

template<int>
constexpr int mod = 0;
template<>
constexpr long mod<998> = 998'244'353l;
template<>
constexpr LL mod<107> = 1e9 + 7LL;


template<class T>
constexpr T inf = 0;
template<>
constexpr int inf<int> = 2'147'483'647;
template<>
constexpr LL inf<LL> = 4'223'372'036'854'775'807;
template<>
constexpr ULL inf<ULL> = inf<LL>;
template<>
constexpr i128 inf<i128> = i128(inf<LL>) * 2'000'000'000'000'000'000;

// https://trap.jp/post/1224/

#define FOR1(a) for (LL _ = 0; _ < (a); ++_)
#define FOR2(i, a) for (LL i = 0; i < (a); ++i)
#define FOR3(i, a, b) for (LL i = a; i < (b); ++i)
#define FOR4(i, a, b, c) for (LL i = a; i < (b); i += (c))
#define FOR1_R(a) for (LL i = (a)-1; i >= (0); --i)
#define FOR2_R(i, a) for (LL i = (a)-1; i >= (0); --i)
#define FOR3_R(i, a, b) for (LL i = (b)-1; i >= (a); --i)
#define overload4(a, b, c, d, e, ...) e
#define overload3(a, b, c, d, ...) d
#define FOR(...) overload4(__VA_ARGS__, FOR4, FOR3, FOR2, FOR1)(__VA_ARGS__)
#define FOR_R(...) overload3(__VA_ARGS__, FOR3_R, FOR2_R, FOR1_R)(__VA_ARGS__)
#define TEST INT(__T);FOR(__T)

#define F first
#define S second
#define MP make_pair
#define PB push_back
#define EB emplace_back
#define MIN(A) *min_element(ALL(A))
#define MAX(A) *max_element(ALL(A))
#define LB(c,x) distance((c).begin(), lower_bound(ALL(c),(x)))
#define UB(c,x) distance((c).begin(), upper_bound(ALL(c),(x)))

int popcnt(int x) { return __builtin_popcount(x); }
int popcnt(LL x) { return __builtin_popcountll(x); }
int popcnt(ULL x) { return __builtin_popcountll(x); }


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
T POP(VI<T> &a) {
    T x = a.back();
    a.pop_back();
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
VI<Q> PSUM(const VI<G> &A,int off = 1) {
    VI<Q> p(SZ(A) + 1);
    FOR(i, SZ(A)) p[i + 1] = p[i] + A[i];
    if(off == 0) p.erase(p.begin());
    return p;
}