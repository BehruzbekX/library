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
    void _R(T &x) { cin >> x; }

    void R() {
    }

    template<class T, class... U>
    void R(T &head, U &... tail) {
        _R(head);
        R(tail...);
    }

    template<class T>
    void _W(const T &x) {
        cout << (x);
    }

    template<class T, class U>
    void _W(const pair<T, U> &x) {
        _W(x.F);
        cout << ' ';
        _W(x.S);
    }

    template<class T>
    void _W(const vector<T> &x) {
        for (auto nx = x.begin(); nx != x.end(); _W(*nx++)) if (nx != x.cbegin()) cout << " ";
    }

    template<class T>
    void _W(const set<T> &x) {
        for (auto nx = x.begin(); nx != x.end(); _W(*nx++)) if (nx != x.cbegin()) cout << " ";
    }

    template<class T>
    void _W(const multiset<T> &x) {
        for (auto nx = x.begin(); nx != x.end(); _W(*nx++)) if (nx != x.cbegin()) cout << " ";
    }

    void W() {
    }

    template<class T, class... U>
    void W(const T &head, const U &... tail) {
        _W(head);
        cout << (sizeof...(tail) ? ' ' : '\n');
        W(tail...);
    }

#if defined(LOCAL)
#define SHOW(...) SHOW_IMPL(__VA_ARGS__, SHOW6, SHOW5, SHOW4, SHOW3, SHOW2, SHOW1)(__VA_ARGS__)
#define SHOW_IMPL(_1, _2, _3, _4, _5, _6, NAME, ...) NAME
#define SHOW1(x) W(#x, "=", (x))
#define SHOW2(x, y) W(#x, "=", (x), #y, "=", (y))
#define SHOW3(x, y, z) W(#x, "=", (x), #y, "=", (y), #z, "=", (z))
#define SHOW4(x, y, z, w) W(#x, "=", (x), #y, "=", (y), #z, "=", (z), #w, "=", (w))
#define SHOW5(x, y, z, w, v) W(#x, "=", (x), #y, "=", (y), #z, "=", (z), #w, "=", (w), #v, "=", (v))
#define SHOW6(x, y, z, w, v, u) W(#x, "=", (x), #y, "=", (y), #z, "=", (z), #w, "=", (w), #v, "=", (v), #u, "=", (u))
#else
#define SHOW(...)
#endif

#define INT(...) \
    int __VA_ARGS__; \
    R(__VA_ARGS__);
#define LL(...) \
    ll __VA_ARGS__; \
    R(__VA_ARGS__);
#define U64(...) \
    u64 __VA_ARGS__; \
    R(__VA_ARGS__);
#define STR(...) \
    string __VA_ARGS__; \
    R(__VA_ARGS__);
#define CHAR(...) \
    char __VA_ARGS__; \
    R(__VA_ARGS__);
#define DB(...) \
    long double __VA_ARGS__; \
    R(__VA_ARGS__);
#define VEC(type, name, size) \
  vector<type> name(size);    \
  R(name)
#define VECC(type, name, h, w) \
    vector<vector<type>> name(h,vector<type>(w));\
    R(name)

void YES(bool x = 1) {W(x ? "YES" : "NO");}
void NO(bool x = 1) {YES(!x);}
void Yes(bool x = 1) {W(x ? "Yes" : "No");}
void No(bool x = 1) {YES(!x);}
void yes(bool x = 1) {W(x ? "yes" : "no");}
void no(bool x = 1) {YES(!x);}