int code(char c) { return c - 'a'; }
struct trie {
    trie *a[26];
    int cnt, end_cnt;
    trie() {
        cnt = 0, end_cnt = 0;
        for (int i = 0; i < 26; i++)
            a[i] = nullptr;
    }
    void insert(string s) {
        trie *node = this;
        for (char i : s) {
            if (!node->a[code(i)])
                node->a[code(i)] = new trie();
            node = node->a[code(i)];
            node->cnt++;
        }
        node->end_cnt++;
    }
    void erase(string s) {
        trie *node = this;
        for (char i : s) {
            int idx = code(i);
            if (!node->a[idx])
                return;
            node = node->a[idx];
            node->cnt--;
        }
        node->end_cnt--;
    }
    int search(string s) {
        trie *node = this;
        for (char i : s) {
            if (!node->a[code(i)])
                return 0;
            node = node->a[code(i)];
        }
        return node->end_cnt;
    }
    vector<int> search_id(string s, int x) {
        trie *node = this;
        vector<int> e;
        for (int id = x; id < s.size(); id++) {
            char i = s[id];
            if (!node->a[code(i)])
                break;
            node = node->a[code(i)];
            if (node->end_cnt > 0)
                e.emplace_back(id - x + 1);
        }
        return e;
    }
    int search_start(string s) {
        trie *node = this;
        for (char i : s) {
            if (!node->a[code(i)])
                return 0;
            node = node->a[code(i)];
        }
        return node->cnt;
    }
    int search(string s, int x) { return search(s.substr(x)); }
};