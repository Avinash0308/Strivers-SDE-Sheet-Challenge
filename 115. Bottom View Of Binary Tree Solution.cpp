#include <bits/stdc++.h> 
/*************************************************************
 
    Following is the Binary Tree node structure.

    class BinaryTreeNode 
    {
    public : 
        T data;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;

        BinaryTreeNode(T data) {
            this -> data = data;
            left = NULL;
            right = NULL;
        }
    };

*************************************************************/
void solve(BinaryTreeNode<int> *root, int wid, map<int,pair<int,int>> &m, int lvl){
    if(!root) return;
    if(m.find(wid) == m.end() || (m[wid].first) <= lvl){
        m[wid] = {lvl,root->data};
    }
    solve(root->left,wid-1,m,lvl+1);
    solve(root->right,wid+1,m,lvl+1);
}
vector<int> bottomView(BinaryTreeNode<int> * root){

    // Write your code here.
    map<int,pair<int,int>> m;
    solve(root,0,m,0);
    vector<int> ans;
    for(auto it:m){
        ans.push_back(it.second.second);
    }
    return ans;
}

