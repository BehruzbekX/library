#pragma once

//https://i.ibb.co/jkCpXcq/image.png
//https://codeforces.com/edu/course/2/lesson/3/2

template<typename E>
VI<LL> zalgorithm(const E& s){
    int n = SZ(s);
    VI<LL> z(n);
    LL l = 0,r = 0;
    FOR(i,1,n){
        if(i < r) z[i] = min(r - i,z[i - l]);
        while(i + z[i] < n && s[z[i]] == s[i + z[i]])z[i]++;
        if(i + z[i] > r) l = i,r = i + z[i];
    }
    return z;
}