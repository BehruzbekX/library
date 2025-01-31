#define PROBLEM "https://judge.yosupo.jp/problem/point_add_range_sum"

#include "template.hpp"
#include "other/fastio.hpp"
#include "monoid/add.hpp"
#include "ds/fenwick/fenwick.hpp"

void solve(){
    LL(N,Q);
    VEC(ll,a,N);
    Fenwick<Monoid_Add<ll>> fenwick(a);
    FOR(Q){
        INT(type,l,r);
        if(type == 0) l++,fenwick.update(l,r);
        else ++l,W(fenwick.get(l,r));
    }
}
signed main(){
    ios::sync_with_stdio(false),cin.tie(nullptr);
    solve();
}