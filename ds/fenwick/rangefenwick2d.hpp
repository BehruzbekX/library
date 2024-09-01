template<typename Monoid>
struct Fenwick2D {
    using G = Monoid;
    using X = typename Monoid::value_type;

    vector<vector<X>> bit0, bit1, bit2, bit3;
    int n, m;

    Fenwick2D(int n, int m) {
        this->n = n;
        this->m = m;
        bit0.assign(n + 1, vector<X>(m + 1, G::unit()));
        bit1.assign(n + 1, vector<X>(m + 1, G::unit()));
        bit2.assign(n + 1, vector<X>(m + 1, G::unit()));
        bit3.assign(n + 1, vector<X>(m + 1, G::unit()));
    }

    void update(vector<vector<X>>& bit, int x, int y, X delta) {
        for (int i = x; i <= n; i += i & -i) {
            for (int j = y; j <= m; j += j & -j) {
                bit[i][j] = G::op(bit[i][j], delta);
            }
        }
    }

    void update(int x1, int y1, int x2, int y2, X val) {
        // Range update using 4-point inclusion-exclusion principle
        update(bit0, x1, y1, val);
        update(bit0, x2 + 1, y1, G::inverse(val));
        update(bit0, x1, y2 + 1, G::inverse(val));
        update(bit0, x2 + 1, y2 + 1, val);

        update(bit1, x1, y1, G::inverse(val * (y1 - 1)));
        update(bit1, x2 + 1, y1, val * (y1 - 1));
        update(bit1, x1, y2 + 1, val * (y1 - 1));
        update(bit1, x2 + 1, y2 + 1, G::inverse(val * (y1 - 1)));

        update(bit2, x1, y1, G::inverse(val * (x1 - 1)));
        update(bit2, x2 + 1, y1, val * (x1 - 1));
        update(bit2, x1, y2 + 1, val * (x1 - 1));
        update(bit2, x2 + 1, y2 + 1, G::inverse(val * (x1 - 1)));

        update(bit3, x1, y1, val * (x1 - 1) * (y1 - 1));
        update(bit3, x2 + 1, y1, G::inverse(val * (x1 - 1) * (y1 - 1)));
        update(bit3, x1, y2 + 1, G::inverse(val * (x1 - 1) * (y1 - 1)));
        update(bit3, x2 + 1, y2 + 1, val * (x1 - 1) * (y1 - 1));
    }

    X get(int x, int y) {
        if (x <= 0 || y <= 0) return G::unit();  // Out of bounds check
        X res0 = G::unit(), res1 = G::unit(), res2 = G::unit(), res3 = G::unit();
        for (int i = x; i > 0; i -= i & -i) {
            for (int j = y; j > 0; j -= j & -j) {
                res0 = G::op(res0, bit0[i][j]);
                res1 = G::op(res1, bit1[i][j]);
                res2 = G::op(res2, bit2[i][j]);
                res3 = G::op(res3, bit3[i][j]);
            }
        }
        return res0 * x * y + res1 * x + res2 * y + res3;
    }

    X get(int x1, int y1, int x2, int y2) {
        return get(x2, y2) - get(x1 - 1, y2) - get(x2, y1 - 1) + get(x1 - 1, y1 - 1);
    }
};