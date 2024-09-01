#define PROBLEM "https://judge.yosupo.jp/problem/aplusb"

#include "template.hpp"
#include "other/fastio.hpp"
#include "random/base.hpp"
#include "ds/fenwick/rangefenwick.hpp"
#include "monoid/xor.hpp"

struct Naive {
    vi arr;
    Naive(int n) : arr(n + 1, 0) {}

    void add(int l, int r, ll x) {
        for (int i = l; i <= r; ++i) {
            arr[i] ^= x;  // XOR update
        }
    }

    ll get(int l, int r) {
        ll res = 0;
        for (int i = l; i <= r; ++i) {
            res ^= arr[i];  // XOR query
        }
        return res;
    }
};
void test(){
    const int N = RNG(1,100);
    const int Q = RNG(1,100);
    vi arr(N);
    FOR(i,N) arr[i] = RNG(-100,100);
    Fenwick<Monoid_Xor<ll>> fenwick(arr);
    Naive naive(N);
    for (int i = 0; i < N; ++i) {
        naive.add(i + 1, i + 1, arr[i]);
    }
    FOR(Q) {
        int type = RNG(1, 3);  
        int l = RNG(1, N + 1);
        int r = RNG(l, N + 1);
        if (type == 1) {
            ll x = RNG(-50, 50);
            fenwick.update(l, r, x);
            naive.add(l, r, x);
        } else {
            ll fenwick_result = fenwick.get(l, r);
            ll naive_result = naive.get(l, r);
            assert(fenwick_result == naive_result);
        }
    }

}
signed main(){
    test();
    LL(A,B);
    W(A + B);
}