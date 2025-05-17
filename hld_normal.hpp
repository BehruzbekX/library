struct sg{
    int n;
    vector<int> t;
    inline int op(int a, int b) {return max(a, b);}
    inline void bud(vector<int> a) {
        n = (a.size());
        t.resize(n<<1);
        for (int i = 0; i < n; i++) t[n + i] = a[i];
        for (int i = n - 1; i >= 0; --i) t[i] = max(t[i << 1], t[i << 1 | 1]);
    }
    inline int q(int l, int r){
        int ans = 0;
        for(l += n, r += n + 1; l < r; l >>= 1, r >>= 1) {
            if (l & 1) ans = max(ans, t[l++]);
            if (r & 1) ans = max(ans, t[--r]);
        }
        return ans;
    }
    inline void u(int id, int x) {
        for (t[id += n] = x; id > 1; id >>= 1) t[id>>1]=max(t[id], t[id^1]);
    }    
};
struct HLD{ 
    int n, timer = 0;
    sg f;
    vector<vector<int>> a, child;
    vector<int> depth, subtree, pos, parent, head, e;
  
    HLD(vector<vector<int>> a, vector<int> e, int root = 0) : n(a.size()), a(a), depth(n), subtree(n), pos(n), parent(n), head(n), child(n), timer(0), e(n){
        parent[root] = -1;
        depth[root] = 0; 
        dfs1(root);
        head[root] = root;
        dfs2(root);
        for (int i = 0; i < n; i++) this->e[pos[i]] = e[i];
        f.bud(this->e);
    }
    inline void dfs1(int v) {
        subtree[v] = 1;
        for (int u : a[v]) {
            if(u == parent[v]) continue;
            parent[u] = v;
            depth[u] = depth[v] + 1;
            dfs1(u);
            subtree[v] += subtree[u];
            child[v].emplace_back(u);
        }
        if (child[v].size()) {
            for (int i = 1; i < child[v].size(); i++) {
                if (subtree[child[v][i]] > subtree[child[v][0]]) swap(child[v][i], child[v][0]);
            }
    }
    }
    inline void dfs2(int v) {
        pos[v] = timer++;
        if(child[v].empty())return;
        head[child[v][0]] = head[v];
        dfs2(child[v][0]);
        for (int i = 1; i < child[v].size(); i++) {
            head[child[v][i]] = child[v][i];
            dfs2(child[v][i]);
        }
    }
    inline void u(int i, int x) {
        f.u(pos[i], x);
    }
    inline int q(int u, int v) {
        int ans = 0;
        while (head[u] != head[v]) {
            if (depth[head[u]] > depth[head[v]]) {
                ans = max(ans, f.q(pos[head[u]], pos[u]));
                u = parent[head[u]];
            }
            else {
                ans = max(ans, f.q(pos[head[v]], pos[v]));
                v = parent[head[v]];
            }
        }
        if(depth[u] > depth[v]) swap(u, v);
        return max(ans, f.q(pos[u], pos[v]));
    }
};