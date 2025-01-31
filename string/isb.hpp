#pragma once

#include "string/zf.hpp"
//check if T is substring of S
template<typename X>
bool is_substring(X& S,X& T){
    int n = int(S.size()),m = int(T.size());
    string s;
    for(auto&& x : S) s.emplace_back(x);
    for(auto&& x : T) s.emplace_back(x);
    auto p = zf(s);
    for(int i=n;i<n + m;i++){
        if(p[i] >= n) return true;
    }
    return false;
}