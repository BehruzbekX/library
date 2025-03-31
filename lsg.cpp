#define mid ((l + r) >> 1)
struct lsg {
    int n; vector<int> t, lz, a;
    lsg(vector<int> a) : a(a), n(a.size()), t(n << 2), lz(n << 2) { dfs(1, 0, n - 1); }
    void dfs(int i, int l, int r) { l == r ? t[i] = a[l] : (dfs(i << 1, l, mid), dfs(i << 1 | 1, mid + 1, r), t[i] = t[i << 1] + t[i << 1 | 1]); }
    void apl(int i, int len, int x) { t[i] += len * x, lz[i] += x; }
    void psh(int i, int l, int r) { lz[i] && (apl(i << 1, mid - l + 1, lz[i]), apl(i << 1 | 1, r - mid, lz[i]), lz[i] = 0); }
    int q(int i, int l, int r, int L, int R) { return l > R || r < L ? 0 : (L <= l && r <= R ? t[i] : (psh(i, l, r), q(i << 1, l, mid, L, R) + q(i << 1 | 1, mid + 1, r, L, R))); }
    void u(int i, int l, int r, int L, int R, int x) { 
        if (l > R || r < L) return;
        if (L <= l && r <= R) return apl(i, r - l + 1, x);
        psh(i, l, r), u(i << 1, l, mid, L, R, x), u(i << 1 | 1, mid + 1, r, L, R, x), t[i] = t[i << 1] + t[i << 1 | 1];
    }
};