#pragma once

template<typename Monoid>
struct Fenwick{
	using G = Monoid;
	using X = typename Monoid::value_type;

	VI<X> bit0,bit1;
	int n;
	Fenwick(int n){
		this->n = n;
		bit0.assign(n + 1,G::unit());		
		bit1.assign(n + 1,G::unit());	
	}
	Fenwick(VI<X>& A):Fenwick(SZ(A)){
		FOR(i,SZ(A)){
			update(i + 1,i + 1,A[i]);
		}
	}
	X get(int r) {
        X sum0 = G::unit(), sum1 = G::unit();
        int tr = r;
        for (; r > 0; r -= r & -r) {
            sum0 = G::op(sum0, bit0[r]);
            sum1 = G::op(sum1, bit1[r]);
        }
        return G::op(G::power(sum0, tr), sum1);
    }
	X get(int l, int r) {
        return G::op(get(r), G::inverse(get(l - 1)));
    }
	void update(VI<X>& bit,int idx,X del){ //1-indexed q
		FOR(i,idx,n + 1,i & -i) bit[i] = G::op(bit[i],del);
	}
	void update(int l,int r,X x){
	update(bit0, l, G::power(x, 1));
        update(bit0, r + 1, G::inverse(G::power(x, 1)));
        update(bit1, l, G::inverse(G::power(x, l - 1)));
        update(bit1, r + 1, G::power(x, r));
	}
};
