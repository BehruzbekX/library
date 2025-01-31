#pragma once

template<typename T = int>
vector<T> sieve(int LIM) {
    vector<bool> isp(LIM+1,true);
    isp[0]=isp[1]=0;
    for(T i=2;i*i<=LIM;i++){
        if(isp[i]){
            for(int j=i*i;j<=LIM;j+=i)isp[j]=false;
        }
    }
    vector<T> p;
    for (T i = 2; i<= LIM;i++)if(isp[i])p.emplace_back(i);
    return p;
}