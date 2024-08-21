
#define PROBLEM "https://onlinejudge.u-aizu.ac.jp/courses/lesson/1/ALDS1/4/ALDS1_4_B"
#include <my_template.hpp>

signed main() {
    INT(n);
    VEC(int,a,n);
    INT(q);
    int cnt = 0;
    while (q --) {
        INT(t_i);
        cnt += binary_search(ALL(s), t_i);
    }
    W(cnt);
    return 0;
}
