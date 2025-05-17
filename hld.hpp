struct lsg{
    int n, mod;
    vector<int> t, lz, a;
    inline int ls(int x) {return x << 1;}
    inline int rs(int x) {return x << 1 | 1;}
    #define m ((l + r) >> 1)
    lsg(vector<int> a, int mod) :a(a), n(a.size()), mod(mod), t(n << 2), lz(n << 2) {dfs(1, 0, n - 1);}
    lsg(int n, int mod) : n(n), a(n, 0), lz(n << 2), t(n<<2), mod(mod) {}
    inline void dfs(int i, int l, int r) {
        if (l == r) {
            t[i] = a[l] % mod;
            return;
        }
        dfs(ls(i), l, m);
        dfs(rs(i), m + 1, r);
        t[i] = (t[ls(i)] + t[rs(i)]) % mod;
    }
    inline void apl(int i, int l, int r, int x) {
        t[i] = (t[i] + ((r - l + 1) % mod * x % mod) % mod) % mod;
        lz[i] = (lz[i] + x) % mod;
    }
    inline void psh(int i, int l, int r) {
        if(!lz[i])return;
        apl(ls(i), l, m, lz[i] % mod);
        apl(rs(i), m+1, r, lz[i] % mod);
        lz[i] = 0;
    }
    inline void u(int i, int l, int r, int L, int R, int x) {
        if (l > R || r < L) return;
        if (L <= l && r <= R) {
            apl(i, l, r, x);return;
        }
        psh(i, l, r);
        u(ls(i), l, m, L, R, x);
        u(rs(i), m + 1, r, L, R, x);
        t[i] = ((t[ls(i)]) + t[rs(i)]) % mod;
    }
    inline int q(int i, int l, int r, int L, int R) {
        if ( l > R || r < L) return 0;
        if (L <= l && r <= R) {
            return t[i] % mod;
        }
        psh(i, l, r);
        return (q(ls(i), l, m, L,R) + q(rs(i), m + 1, r, L, R)) % mod;
    }
    inline int q(int l, int r){
        return q(1, 0, n - 1, l, r);
    }
    inline void u(int l, int r, int x){
        u(1, 0, n - 1, l, r, x);
    }
};  
struct HLD{
    int n, timer, mod;
    vector<vector<int>> a, s;
    vector<int> dep, p, sz, h, id;
    lsg f;
    HLD(vector<vector<int>> a, int root, int mod): a(a), mod(mod), n(a.size()), s(n), dep(n), p(n), sz(n), h(n), id(n), f(n, mod), timer(0) {
        p[root] = -1;
        dfs1(root);
        h[root] = root;
        dfs2(root);
    }   
    inline void dfs1(int v) {
        sz[v] = 1;
        for (int u : a[v]) {
            if (u == p[v]) continue;
            p[u] = v;
            dep[u] = dep[v] + 1;
            s[v].emplace_back(u);
            dfs1(u);
            sz[v] += sz[u];
        }
        if(s[v].size()){
            for (int i = 1; i < s[v].size(); i++) {
                if (sz[s[v][i]] > sz[s[v][0]]) swap(s[v][i], s[v][0]);
            }
        }
    }
    inline void dfs2(int v){
        id[v] = timer++;
        if(s[v].empty())return;
        h[s[v][0]] = h[v];
        dfs2(s[v][0]);
        for (int i = 1; i < s[v].size(); i++) {
            h[s[v][i]] = s[v][i];
            dfs2(s[v][i]);
        }
    }   
    inline int q(int u, int v) {
        int ans = 0;
        while (h[u] != h[v]) {
            if (dep[h[u]] > dep[h[v]]) {
                ans = (ans + f.q(id[h[u]], id[u])) % mod;
                u = p[h[u]];
            }
            else {
                ans = (ans + f.q(id[h[v]], id[v])) % mod;
                v = p[h[v]];
            }
        }
        if (dep[u] > dep[v]) swap(u, v);
        ans = (ans + f.q(id[u], id[v])) % mod;
        return ans;
    }
    inline void u(int x, int y, int z) {
        while (h[x] != h[y]) {
            if (dep[h[x]] > dep[h[y]]) {
                f.u(id[h[x]], id[x], z % mod);
                x = p[h[x]];
            }
            else {
                f.u(id[h[y]], id[y], z % mod);
                y = p[h[y]];
            }
        }
        if (dep[x] > dep[y]) swap(x, y);
        f.u(id[x], id[y], z);
    }
    inline void u(int x, int z) {
        f.u(id[x], id[x] + sz[x] - 1, z);
    }
    inline int q(int x){
        return f.q(id[x], id[x] + sz[x] - 1);
    }
};
