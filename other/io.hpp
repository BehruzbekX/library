istream &operator>>(istream &in, i128 &a) {
        string s;
        in >> s;
        a = 0;
        for (auto &it: s) if (isdigit(it)) a = a * 10 + it - '0';
        if (s[0] == '-') a *= -1;
        return in;
    }

    ostream &operator<<(ostream &os, const i128 &v) {
        if (v == 0) return (os << "0");
        i128 num = v;
        if (v < 0) os << '-', num = -num;
        string s;
        for (; num > 0; num /= 10) s.PB((char) (num % 10) + '0');
        reverse(all(s));
        return (os << s);
    }

    template<class t>
    istream &operator>>(istream &in, vector<t> &a) {
        for (auto &nx: a) {
            in >> nx;
        }
        return in;
    }
    template<class t>
    istream &operator>>(istream &in, vector<vector<t>> &a) {
        for (auto &nx: a) for(auto &ny : nx) in >> ny;
        return in;
    }
    template<class t, class u>
    istream &operator>>(istream &in, pair<t, u> &p) {
        in >> p.first >> p.second;
        return in;
    }
    template<class t, class u>
    istream &operator>>(istream &in, vector<pair<t, u> > &p) {
        for (auto &nx: p) in >> nx;
        return in;
    }

    template<class t>
    istream &operator>>(istream &in, vector<pair<t, t>> &p) {
        for (auto &nx: p) in >> nx;
        return in;
    }

    template<class T>
    void _read(T &x) { cin >> x; }

    void read() {
    }

    template<class T, class... U>
    void read(T &head, U &... tail) {
        _read(head);
        read(tail...);
    }

    template<class T>
    void _print(const T &x) {
        cout << (x);
    }

    template<class T, class U>
    void _print(const pair<T, U> &x) {
        _print(x.F);
        cout << ' ';
        _print(x.S);
    }

    template<class T>
    void _print(const vector<T> &x) {
        for (auto nx = x.begin(); nx != x.end(); _print(*nx++)) if (nx != x.cbegin()) cout << " ";
    }

    template<class T>
    void _print(const set<T> &x) {
        for (auto nx = x.begin(); nx != x.end(); _print(*nx++)) if (nx != x.cbegin()) cout << " ";
    }

    template<class T>
    void _print(const multiset<T> &x) {
        for (auto nx = x.begin(); nx != x.end(); _print(*nx++)) if (nx != x.cbegin()) cout << " ";
    }

    void print() {
    }

    template<class T, class... U>
    void print(const T &head, const U &... tail) {
        _print(head);
        cout << (sizeof...(tail) ? ' ' : '\n');
        print(tail...);
    }

#if defined(LOCAL)
#define SHOW(...) SHOW_IMPL(__VA_ARGS__, SHOW6, SHOW5, SHOW4, SHOW3, SHOW2, SHOW1)(__VA_ARGS__)
#define SHOW_IMPL(_1, _2, _3, _4, _5, _6, NAME, ...) NAME
#define SHOW1(x) print(#x, "=", (x))
#define SHOW2(x, y) print(#x, "=", (x), #y, "=", (y))
#define SHOW3(x, y, z) print(#x, "=", (x), #y, "=", (y), #z, "=", (z))
#define SHOW4(x, y, z, w) print(#x, "=", (x), #y, "=", (y), #z, "=", (z), #w, "=", (w))
#define SHOW5(x, y, z, w, v) print(#x, "=", (x), #y, "=", (y), #z, "=", (z), #w, "=", (w), #v, "=", (v))
#define SHOW6(x, y, z, w, v, u) print(#x, "=", (x), #y, "=", (y), #z, "=", (z), #w, "=", (w), #v, "=", (v), #u, "=", (u))
#else
#define SHOW(...)
#endif

#define INT(...) \
    int __VA_ARGS__; \
    read(__VA_ARGS__);
#define LL(...) \
    ll __VA_ARGS__; \
    read(__VA_ARGS__);
#define U64(...) \
    u64 __VA_ARGS__; \
    read(__VA_ARGS__);
#define STR(...) \
    string __VA_ARGS__; \
    read(__VA_ARGS__);
#define CHAR(...) \
    char __VA_ARGS__; \
    read(__VA_ARGS__);
#define DB(...) \
    long double __VA_ARGS__; \
    read(__VA_ARGS__);
#define VEC(type, name, size) \
  vector<type> name(size);    \
  read(name)
#define VECC(type, name, h, w) \
    vector<vector<type>> name(h,vector<type>(w));\
    read(name)

void YES(bool x = 1) {print(x ? "YES" : "NO");}
void NO(bool x = 1) {YES(!x);}
void Yes(bool x = 1) {print(x ? "Yes" : "No");}
void No(bool x = 1) {YES(!x);}
void yes(bool x = 1) {print(x ? "yes" : "no");}
void no(bool x = 1) {YES(!x);}
