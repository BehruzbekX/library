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
        reverse(ALL(s));
        return (os << s);
    }

    template<class t>
    istream &operator>>(istream &in, VI<t> &a) {
        for (auto &nx: a) {
            in >> nx;
        }
        return in;
    }
    template<class t>
    istream &operator>>(istream &in, VI<VI<t>> &a) {
        for (auto &nx: a) for(auto &ny : nx) in >> ny;
        return in;
    }
    template<class t, class u>
    istream &operator>>(istream &in, pair<t, u> &p) {
        in >> p.first >> p.second;
        return in;
    }
    template<class t, class u>
    istream &operator>>(istream &in, VI<pair<t, u> > &p) {
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
    void _W(const VI<T> &x) {
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
#define INT(...) \
    int __VA_ARGS__; \
    R(__VA_ARGS__);
#define LL(...) \
    LL __VA_ARGS__; \
    R(__VA_ARGS__);
#define STR(...) \
    string __VA_ARGS__; \
    R(__VA_ARGS__);
#define CHAR(...) \
    char __VA_ARGS__; \
    R(__VA_ARGS__);
#define DB(...) \
    double __VA_ARGS__; \
    R(__VA_ARGS__);
#define VEC(type,name,size) \
    VI<type> name(size); \
    R(name)
#define VECC(type,name, h,w) \
    VI<VI<type>> name(h,VI<type>(w));\
    R(name)

void YES(bool x = 1) {W(x ? "YES" : "NO");}
void NO(bool x = 1) {YES(!x);}
void Yes(bool x = 1) {W(x ? "Yes" : "No");}
void No(bool x = 1) {YES(!x);}
void yes(bool x = 1) {W(x ? "yes" : "no");}
void no(bool x = 1) {YES(!x);}