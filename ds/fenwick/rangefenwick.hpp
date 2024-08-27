#pragma once

template<typename Monoid>
struct Fenwick{
	using G = Monoid;
	using X = typename Monoid::value_type;
	VI<X> bit;
	int n;
	Fenwick(int n){
		this->n = n;
		bit.assign(n + 1,G::unit());		
	}
	Fenwick(VI<X>& A):Fenwick(SZ(A)){
		FOR(i,SZ(A)){
			update(i + 1,i + 1,A[i]);
		}
	}
	X get(int r){ //A[1] op ... a[r]
		X res = G::unit();
		for(;r > 0;r -= r & -r){
			res = G::op(res,bit[r]);
		}
		return res;
	}
	X get(int l,int r){
		return G::op(get(r),G::inverse(get(l - 1)));
	}
	void update(int idx,X del){ //1-indexed q
		FOR(i,idx,n + 1,i & -i) bit[i] = G::op(bit[i],del);
	}
	void update(int l,int r,X x){
		update(l,x),update(r + 1,G::inverse(x));
	}
};