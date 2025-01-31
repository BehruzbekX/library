#pragma once

#include "random/base.hpp"

template<class T>
void shuffle(vector<T>& A){
    for(int i=0;i<int(A.size());i++){
        int j = rng(0,i);
        if(i != j) swap(A[i],A[j]);
    }
}
