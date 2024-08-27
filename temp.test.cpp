#line 1 "main.test.cpp"
#define PROBLEM "https://judge.yosupo.jp/problem/many_aplusb"

#line 1 "template.hpp"
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
#line 1 "other\\fastio.hpp"
istream &operator>>(istream &in, i128 &a) {
        string s;
        in >> s;
        a = 0;
        for (auto &it: s) if (isdigit(it)) a = a * 10 + it - '0';
        if (s[0] == '-') a *= -1;
        return in;
    }

    ostream &operator<<(ostream &os, const i128 &v) {
        if (v == 0) return (os << "0");
        i128 num = v;
        if (v < 0) os << '-', num = -num;
        string s;
        for (; num > 0; num /= 10) s.PB((char) (num % 10) + '0');
        reverse(ALL(s));
        return (os << s);
    }

    template<class t>
    istream &operator>>(istream &in, VI<t> &a) {
        for (auto &nx: a) {
            in >> nx;
        }
        return in;
    }
    template<class t>
    istream &operator>>(istream &in, VI<VI<t>> &a) {
        for (auto &nx: a) for(auto &ny : nx) in >> ny;
        return in;
    }
    template<class t, class u>
    istream &operator>>(istream &in, pair<t, u> &p) {
        in >> p.first >> p.second;
        return in;
    }
    template<class t, class u>
    istream &operator>>(istream &in, VI<pair<t, u> > &p) {
        for (auto &nx: p) in >> nx;
        return in;
    }



    template<class T>
    void _R(T &x) { cin >> x; }

    void R() {
    }

    template<class T, class... U>
    void R(T &head, U &... tail) {
        _R(head);
        R(tail...);
    }

    template<class T>
    void _W(const T &x) {
        cout << (x);
    }

    template<class T, class U>
    void _W(const pair<T, U> &x) {
        _W(x.F);
        cout << ' ';
        _W(x.S);
    }

    template<class T>
    void _W(const VI<T> &x) {
        for (auto nx = x.begin(); nx != x.end(); _W(*nx++)) if (nx != x.cbegin()) cout << " ";
    }

    template<class T>
    void _W(const set<T> &x) {
        for (auto nx = x.begin(); nx != x.end(); _W(*nx++)) if (nx != x.cbegin()) cout << " ";
    }

    template<class T>
    void _W(const multiset<T> &x) {
        for (auto nx = x.begin(); nx != x.end(); _W(*nx++)) if (nx != x.cbegin()) cout << " ";
    }

    void W() {
    }

    template<class T, class... U>
    void W(const T &head, const U &... tail) {
        _W(head);
        cout << (sizeof...(tail) ? ' ' : '\n');
        W(tail...);
    }
#define INT(...) \
    int __VA_ARGS__; \
    R(__VA_ARGS__);
#define LL(...) \
    LL __VA_ARGS__; \
    R(__VA_ARGS__);
#define STR(...) \
    string __VA_ARGS__; \
    R(__VA_ARGS__);
#define CHAR(...) \
    char __VA_ARGS__; \
    R(__VA_ARGS__);
#define DB(...) \
    double __VA_ARGS__; \
    R(__VA_ARGS__);
#define VEC(type,name,size) \
    VI<type> name(size); \
    R(name)
#define VECC(type,name, h,w) \
    VI<VI<type>> name(h,VI<type>(w));\
    R(name)

void YES(bool x = 1) {W(x ? "YES" : "NO");}
void NO(bool x = 1) {YES(!x);}
void Yes(bool x = 1) {W(x ? "Yes" : "No");}
void No(bool x = 1) {YES(!x);}
void yes(bool x = 1) {W(x ? "yes" : "no");}
void no(bool x = 1) {YES(!x);}
#line 2 "ds\\fenwick\\fenwick.hpp"

template<typename Monoid>
struct Fenwick{
	using G = Monoid;
	using X = typename Monoid::value_type;
	VI<X> bit;
	int n;
	Fenwick(int n){
		this->n = n;
		bit.assign(n + 1,G::unit());		
	}
	Fenwick(VI<X>& A):Fenwick(SZ(A)){
		FOR(i,SZ(A)){
			update(i + 1,i + 1,A[i]);
		}
	}
	X get(int r){ //A[1] op ... a[r]
		X res = G::unit();
		for(;r > 0;r -= r & -r){
			res = G::op(res,bit[r]);
		}
		return res;
	}
	X get(int l,int r){
		return G::op(get(r),G::inverse(get(l - 1)));
	}
	void update(int idx,X del){ //1-indexed q
		FOR(i,idx,n + 1,i & -i) bit[i] = G::op(bit[i],del);
	}
	void update(int l,int r,X x){
		update(l,x),update(r + 1,G::inverse(x));
	}
};
#line 2 "monoid\\add.hpp"

template <typename E>
struct Monoid_Add {
  using X = E;
  using value_type = X;
  static constexpr X op(const X &x, const X &y) noexcept { return x + y; }
  static constexpr X inverse(const X &x) noexcept { return -x; }
  static constexpr X power(const X &x, LL n) noexcept { return X(n) * x; }
  static constexpr X unit() { return X(0); }
  static constexpr bool commute = true;
};
#line 2 "monoid\\gcd.hpp"

template <typename X>
struct Monoid_Gcd {
  using value_type = X;
  static X op(X x, X y) { return gcd(x, y); }
  static constexpr X unit() { return 0; }
  static constexpr bool commute = true;
};
#line 2 "monoid\\xor.hpp"

template <typename E>
struct Monoid_Xor {
  using X = E;
  using value_type = X;
  static constexpr X op(const X &x, const X &y) noexcept { return x ^ y; }
  static constexpr X inverse(const X &x) noexcept { return x; }
  static constexpr X unit() { return X(0); }
  static constexpr bool commute = true;
};
#line 2 "monoid\\min.hpp"

template <typename E>
struct Monoid_Min {
    using X = E;
    using value_type = X;
    static constexpr X op(const X& x, const X& y) noexcept { return std::min(x, y); }
    static constexpr X unit() { return inf<E>; }
    static constexpr bool commute = true;
};
#line 2 "monoid\\max.hpp"

template <typename E>
struct Monoid_Max {
  using X = E;
  using value_type = X;
  static constexpr X op(const X &x, const X &y) noexcept { return max(x, y); }
  static constexpr X unit() { return -inf<E>; }
  static constexpr bool commute = true;
};
#line 2 "random\\base.hpp"

ULL RNG_64() {
    static uint64_t x_
        = uint64_t(chrono::duration_cast<chrono::nanoseconds>(
                       chrono::high_resolution_clock::now().time_since_epoch())
                       .count())
          * 10150724397891781847ULL;
    x_ ^= x_ << 7;
    return x_ ^= x_ >> 9;
}

ULL RNG(ULL lim) { return RNG_64() % lim; }

LL RNG(LL l, LL r) { return l + RNG_64() % (r - l); }
#line 2 "random\\shuffle.hpp"

#line 4 "random\\shuffle.hpp"

template<class T>
void shuffle(VI<T>& A){
    FOR(i,SZ(A)){
        int j = RNG(0,i + 1);
        if(i != j) swap(A[i],A[j]);
    }
}
#line 13 "main.test.cpp"

using namespace std;
void solve(){
    i128 A,B;
    R(A,B);
    W(A + B);
}
signed main(){
    TEST
    solve();
}
