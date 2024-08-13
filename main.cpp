#include "bits/extc++.h"

using namespace std;

template<typename T>
using VI = vector<T>;
#define SZ(A) ((int)(A).size())
#define ALL(A) (A).begin(),(A).end()
typedef long long LL;
typedef unsigned long long ULL;
#define MP make_pair
#define EB emplace_back
#define FOR(I,N) for(int I = 0;I < (N);++(I))
#define TEST int __T;R(__T);FOR(I,__T)
namespace io {
    template<class t>
    istream& operator>>(istream &in,vector<t> &a) {
        for(auto & nx : a) {
            in >> nx;
        }
        return in;
    }

    template<class t,class u>
    istream& operator>>(istream &in,vector<pair<t,u>> &p) {
        for(auto &nx : p) in >> nx.first >> nx.second;
        return in;
    }
    template<class t,class u>
   istream& operator>>(istream &in,pair<t,u> &p) {
        in >> p.first >> p.second;
        return in;
    }
    template<class T> void _R(T &x) { cin >> x; }
    void R() {}
    template<class T, class... U> void R(T &head, U &... tail) { _R(head); R(tail...); }
    template<class T>
    void _W(const T &x) {
        cout << x;
    }
    template<class T,class U>
    void _W(pair<T,U> &x) {
        _W(x.first,x.second);
    }
    template<class T>
    void _W(const vector<T> &x) {
        for(auto nx = x.begin();nx != x.end();_W(*nx++)) if (nx != x.cbegin()) cout << " ";
    }
    void W(){}
    template<class T,class... U> void W(const T &head,const U &... tail) {
        _W(head);
        cout << (sizeof...(tail) ? ' ' : '\n');
        W(tail...);
    }
}
using namespace io;

void solve(){
    int a,b;
    R(a,b);
    W(a + b);
}
signed main() {
    // freopen("input.txt", "r",stdin);
    ios::sync_with_stdio(false), cin.tie(nullptr);
    
}
