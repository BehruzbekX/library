#define PROBLEM "https://judge.yosupo.jp/problem/aplusb"

#pragma once

#include "template.hpp"
#include "other/fastio.hpp"
#include "string/is_substring.hpp"
#include "random/base.hpp"
template<typename X>
bool naive_is_substring(X& S, X& T) {
    if (S.size() > T.size()) return false;
    for (size_t i = 0; i <= T.size() - S.size(); ++i) {
        bool match = true;
        for (size_t j = 0; j < S.size(); ++j) {
            if (T[i + j] != S[j]) {
                match = false;
                break;
            }
        }
        if (match) return true;
    }
    return false;
}
string gen(int n,char a ='a',char b = 'b'){
    string res;
    FOR(i,n){
        res += char(RNG(a,b + 1));
    }
    return res;
}
void test(){
    int n = RNG(1,100);
    int m = RNG(n,200);

    string s = gen(n),t = gen(m);
    if(RNG(2) == 1) {
        int pos = RNG(0,m - n + 1);
        t.replace(pos,n,s);
    }
    bool z = is_substring(s,t),ni = naive_is_substring(s,t);
    assert(z == ni);
}

signed main(){
    test();
    LL(A,B);
    W(A + B);
}