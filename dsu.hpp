#pragma once

#define io(x) iota(x.begin(),x.end(),0)
#define res(x,n,v) x.resize(n,v)
#define cmax(a,b) a=max((a),(b))
#define cmin(a,b) a=min((a),(b))
struct dsu{
    vector<int>p,sz,s,mn,mx;
    void init(int n){
        n++;
        res(p,n,0);
        res(s,n,1);
        res(sz,n,1);
        res(mn,n,0);
        res(mx,n,0);
        io(p);
        io(mn);
        io(mx);
    }
    int find(int x){return p[x]==x?x:p[x]=find(p[x]);}
    bool con(int x,int y){return find(x)==find(y);}
    bool merge(int u,int v){
        u=find(u),v=find(v);
        if(u==v)return 0;
        if(sz[u]<sz[v])swap(u,v);
        p[v]=u;
        // ans+=sz[u]*sz[v];
        sz[u]+=sz[v];
        s[u]+=sz[v];
        cmax(mx[u],mx[v]);
        cmin(mn[u],mn[v]);
        return 1;
    }
    int gets(int x){return sz[find(x)];}
    int getm(int x){return mn[find(x)];}
    int getmx(int x){return mx[find(x)];}
};