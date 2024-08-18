// #pragma GCC target("avx2,popcnt")

#include "bits/stdc++.h"

using namespace std;

template<typename T>
using VI = vector<T>;
template<typename T>
using pq = priority_queue<T>;
template<class T>
using pqg = priority_queue<T,VI<T>,greater<int>>;

#define SZ(A) ((int)(A).size())
#define ALL(A) (A).begin(),(A).end()

typedef long long LL;
typedef unsigned long long ULL;



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
#define TEST int __T;R(__T);FOR(cs,__T)

#define F first
#define S second
#define MP make_pair
#define PB emplace_back
#define MIN(A) *min_element(ALL(A))
#define MAX(A) *max_element(ALL(A))
#define LB(c,x) distance((c).begin(), lower_bound(ALL(c),(x)))
#define UB(c,x) distance((c).begin(), upper_bound(ALL(c),(x)))

int popcnt(int x) {return __builtin_popcount(x);}
int popcnt(LL x) {return __builtin_popcountll(x);}
int popcnt(ULL x) {return __builtin_popcountll(x);}

template<class T, class U>
bool GMIN(T &a, U &b) {
    return ((a) > (b) ? (a) = (b),1 : 0);
}
template<class T, class U>
bool GMAX(T &a,U &b) {
    return ((a) < (b) ? (a) = (b),1 : 0);
}
template<class T, class U>
T SUM(const vector<U> &A) {
    T sum = NULL;
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
template<class Q,class G>
VI<Q> PSUM(const VI<G> &A) {
    VI<Q> p(SZ(A) + 1);
    FOR(i,SZ(A)) p[i + 1] = p[i] + A[i];
    return p;
}
namespace io {
    template<class t>
    istream &operator>>(istream &in, vector<t> &a) {
        for (auto &nx: a) {
            in >> nx;
        }
        return in;
    }

    template<class t, class u>
    istream &operator>>(istream &in, vector<pair<t, u> > &p) {
        for (auto &nx: p) in >> nx.first >> nx.second;
        return in;
    }

    template<class t, class u>
    istream &operator>>(istream &in, pair<t, u> &p) {
        in >> p.first >> p.second;
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

    void W() {}
    template<class T, class... U>
    void W(const T &head, const U &... tail) {
        _W(head);
        cout << (sizeof...(tail) ? ' ' : '\n');
        W(tail...);
    }
}
using namespace io;
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
    R(name);

void solve() {

}

signed main() {
    ios::sync_with_stdio(false), cin.tie(nullptr);
    // TEST
    solve();
}
