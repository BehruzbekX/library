#pragma once

#include "random/base.hpp"

template<class T>
void shuffle(VI<T>& A){
    FOR(i,SZ(A)){
        int j = RNG(0,i + 1);
        if(i != j) swap(A[i],A[j]);
    }
}