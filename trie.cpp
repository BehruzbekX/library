constexpr int LOG = 31;
struct trie {
    trie *a[2];
    int cnt;
    trie() {
        a[0] = a[1] = nullptr;
        cnt = 0;
    }
    void insert(int x) {
        trie *node = this;
        for (int i = LOG; i >= 0; --i) {
            int bit = (x >> i) & 1;
            if (!node->a[bit])
                node->a[bit] = new trie();
            node = node->a[bit];
            node->cnt++;
        }
    }
    void erase(int x) {
        trie *node = this;
        for (int i = LOG; i >= 0; --i) {
            int bit = (x >> i) & 1;
            if (!node->a[bit])
                return;
            node = node->a[bit];
            node->cnt--;
        }
    }
    // max XOR 
    int query(int x) {
        trie *node = this;
        int mx = 0;
        for (int i = LOG; i >= 0; --i) {
            int bit = (x >> i) & 1;
            int ops = bit ^ 1;
            if (node->a[ops] && node->a[ops]->cnt > 0)
                mx |= (1 << i), node = node->a[ops];
            else
                node = node->a[bit];
        }
        return mx;
    }
};