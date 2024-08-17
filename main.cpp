#include "bits/extc++.h"

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


#define FOR(I,N) for(auto (I) = 0;I < (N);++(I))
#define FORI(I,A,B,N) for(auto (I) = (A); (I) < (B);(I) += (N))
#define TEST int __T;R(__T);FOR(I,__T)

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
#define VEC(T,N,S) \
    VI<T> N(S); \
    R(N);
void CR(){}
template<class T,class... U>
void CR(const T &head, const U &... tail) {

}
void solve() {

}

signed main() {
    ios::sync_with_stdio(false), cin.tie(nullptr);
    solve();
}
