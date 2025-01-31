#pragma once

template<typename E>
vector<int> kmp(E& S){
    int n = int(S.size()),k;
    vector<int> p(n);
    for(int i=1;i<n;i++){
        k = p[i - 1];
        while(S[i] != S[k] && k > 0) k = p[k - 1];
        if(S[i] == S[k]) ++k;
        p[i] = k;
    }
    return p;
}