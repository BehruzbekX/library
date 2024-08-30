#pragma once

#include "string/zalgorithm.hpp"
template<typename X>
bool is_substring(X& S,X& T){
    int n = int(S.size()),m = int(T.size());
    string s;
    for(auto&& x : S) s.PB(x);
    for(auto&& x : T) s.PB(x);
    auto p = zalgorithm(s);
    FOR(i,n,n + m){
        if(p[i] >= n) return true;
    }
    return false;
}