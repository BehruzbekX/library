template<typename T> struct sparse_table {
    vector<vector<T>> rmq;
    T calc(T a, T b) {
        return std::min(a, b);
    }
    void build(vector<T> &a) {
        int n = a.size();
        int ln = 31 - __builtin_clz(n);
        if ((1 << ln) < n) {
            ln++;
        }
        rmq.assign(ln + 1, vector<T>(n));
        for (int j = 0; j <= ln; j++) {
            for (int i = 0; i <= n - (1 << j); i++) {
                if (j > 0) {
                    rmq[j][i] = calc(rmq[j - 1][i], rmq[j - 1][i + (1 << (j - 1))]);
                } else {
                    rmq[j][i] = a[i];
                }
            }
        }
    }
    T get(int l, int r) {
        assert(l <= r);
        int x = 31 - __builtin_clz(r - l + 1);
        return calc(rmq[x][l], rmq[x][r - (1 << x) + 1]);
    }
};