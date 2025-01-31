#pragma once

template<typename Monoid>
struct Fenwick2D {
    using G = Monoid;
    using X = typename Monoid::value_type;
    vector<vector<X>> bit;
    int rows, cols;

    Fenwick2D(int rows, int cols) : rows(rows), cols(cols) {
        bit.assign(rows + 1, vector<X>(cols + 1, G::unit()));
    }

    template <typename F>
    Fenwick2D(int rows, int cols, F f) : Fenwick2D(rows, cols) {
        for (int r = 1; r <= rows; ++r) {
            for (int c = 1; c <= cols; ++c) {
                update(r, c, f(r - 1, c - 1));
            }
        }
    }

    void update(int r, int c, X delta) {
        for (int i = r; i <= rows; i += i & -i) {
            for (int j = c; j <= cols; j += j & -j) {
                bit[i][j] = G::op(bit[i][j], delta);
            }
        }
    }

    X get(int r, int c) const {
        X res = G::unit();
        for (int i = r; i > 0; i -= i & -i) {
            for (int j = c; j > 0; j -= j & -j) {
                res = G::op(res, bit[i][j]);
            }
        }
        return res;
    }

    X get(int r1, int c1, int r2, int c2) const {
        return G::op(
            G::op(get(r2, c2), G::inverse(get(r1 - 1, c2))),
            G::inverse(get(r2, c1 - 1)),
            G::op(get(r1 - 1, c1 - 1))
        );
    }
};
