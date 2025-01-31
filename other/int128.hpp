#pragma once
istream &operator>>(istream &in, __int128 &a) {
        string s;
        in >> s;
        a = 0;
        for (auto &it: s) if (isdigit(it)) a = a * 10 + it - '0';
        if (s[0] == '-') a *= -1;
        return in;
}

ostream &operator<<(ostream &os, const __int128 &v) {
       if (v == 0) return (os << "0");
       i128 num = v;
       if (v < 0) os << '-', num = -num;
       string s;
       for (; num > 0; num /= 10) s.PB((char) (num % 10) + '0');
       reverse(all(s));
       return (os << s);
}