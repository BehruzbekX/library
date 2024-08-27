#include "template.hpp"
#include "other/fastio.hpp"
#include "random/base.hpp"

signed main(){
    int N = RNG(100);
    W(N);
    VI<int> A(N);
    FOR(N) A[_] = RNG(100);
    W(A);
    int Q = RNG(10);
    while(Q == 0) Q = RNG(10);
    W(Q);
    char qq[] = {'u','g'};
    FOR(Q){
        char x = qq[RNG(2)];
        if(x == 'u'){
            int r = RNG(N),l = RNG(r),val = RNG(99);
            W(x,l,r,val);
        }
        else{
            int gg = RNG(N);
            W(x,gg);
        }
    }
}