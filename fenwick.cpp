//Fenwick<T> a(vector<T> arr);
//Fenwick<T> a(n);
//Supports MIN,MAX 0..R , with update
//Suports SUM [L,R] with point update
template<typename T> struct Fenwick {
    vector<T> bit;
    int n;
    const int INF = 1e9 + 1;
    int op(int x,int y){
        int z = (x + y);
        return z;
    }
    Fenwick(int n) {
        this->n = n;
        bit.assign(n + 1, 0);//may change, INF for min,-INF for max
    }
    Fenwick(vector<T> const &a) : Fenwick(a.size()) {
        for (size_t i = 0; i < a.size(); i++)
            add(i, a[i]);
    }
    T get(int r) {
        int res = 0;//may change, INF for min,-INF for max
        for (; r >= 0; r = (r & (r + 1)) - 1)
            res = op(res,bit[r]);
        return res;
    }
    T get(int l, int r) {
        return get(r) - get(l - 1);
    }
    void add(int idx, T delta) {
        for (; idx < n; idx = idx | (idx + 1))
            bit[idx] = op(bit[idx],delta);
    }
};
