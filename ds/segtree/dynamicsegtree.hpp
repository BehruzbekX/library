#pragma once

struct node{
    node* left;
    node* right;
    int cnt = 0;
    node(node* left = nullptr,node* right = nullptr,int cnt = 0):cnt(cnt),left(left),right(right){};
};
typedef node* Node;

int get(Node& root, int l,int r,int L,int R){
    if(root == nullptr) return 0;
    if(l == L && r == R) return root->cnt;
    int m = (l + r) >> 1;
    if(R <= m) return get(root->left,l,m,L,R);
    if(m < L) return get(root->right,m + 1,r,L,R);
    return get(root->left,l,m,L,m) + get(root->right,m + 1,r,m+1,R);
}   
void update(Node& root,int l,int r,int idx,int delta){
    if(root == nullptr) root = new node();
    root->cnt += delta;
    if(l != r){
        int m = (l + r) >> 1;
        if(idx > m) update(root->right,m + 1,r,idx,delta);
        else update(root->left,l,m,idx,delta);
    }
}