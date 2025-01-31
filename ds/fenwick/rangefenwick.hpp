#pragma once
#include "fenwick.hpp"

template<typename Monoid>
struct RFenwick {
    using G = Monoid;
    using X = typename Monoid::value_type;

    Fenwick<Monoid> bit0, bit1;
    int n;

    RFenwick(int n) : bit0(n), bit1(n), n(n) {}

    RFenwick(vector<X>& A) : RFenwick(A.size()) {
        for (int i = 0; i < A.size(); ++i) {
            update(i + 1, i + 1, A[i]);
        }
    }

	template <typename F>
	RFenwick(int n, F f) : bit0(n), bit1(n), n(n) {
    for(int i = 1; i <= n; ++i) {
        update(i, i, f(i - 1));
    }
	}

    void update(int l, int r, X x) {
        bit0.update(l, G::power(x, 1));        
        bit0.update(r + 1, G::inverse(G::power(x, 1))); 
        bit1.update(l, G::inverse(G::power(x, l - 1))); 
        bit1.update(r + 1, G::power(x, r));    
    }

    X get(int r) const {
        X sum0 = bit0.get(r);
        X sum1 = bit1.get(r);
        return G::op(G::power(sum0, r), sum1);
    }

    X get(int l, int r) const {
        return G::op(get(r), G::inverse(get(l - 1)));
    }
};