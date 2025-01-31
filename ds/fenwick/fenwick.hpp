#pragma once

template<typename Monoid>
struct Fenwick {
    using G = Monoid;
    using X = typename Monoid::value_type;
    vector<X> bit;
    int n;

    Fenwick(int n) {
        this->n = n;
        bit.assign(n + 1, G::unit());
    }

    template <typename F>
    Fenwick(int n, F f) : Fenwick(n) {
        for (int i = 1; i <= n; ++i) {
            update(i, f(i - 1));  
        }
    }

    void update(int idx, X delta) {
        for (int i = idx; i <= n; i += i & -i) {
            bit[i] = G::op(bit[i], delta);
        }
    }

    X get(int r) const {
        X res = G::unit();
        for (; r > 0; r -= r & -r) {
            res = G::op(res, bit[r]);
        }
        return res;
    }

    X get(int l, int r) const {
        return G::op(get(r), G::inverse(get(l - 1)));
    }
};