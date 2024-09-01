#pragma once

template<typename E>
//prefix function
vi prefixfunction(E& S){
    int n = int(S.size()),k;
    Vi<int> p(n);
    FOR(i,1,n){
        k = p[i - 1];
        while(S[i] != S[k] && k > 0) k = p[k - 1];
        if(s[i] == s[k]) ++k;
        p[i] = k;
    }
    return p;
}