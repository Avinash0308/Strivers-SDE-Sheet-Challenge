#include <bits/stdc++.h> 
/*************************************************************

    Following is the Binary Tree node structure

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

vector<int> zigZagTraversal(BinaryTreeNode<int> *root)
{
    if(!root) return {};
    vector<int> ans;
    vector<BinaryTreeNode<int>*> v;
    v.push_back(root);
    int lvl = 1;
    while(!v.empty()){
        int n = v.size();
        vector<BinaryTreeNode<int>*> cur;
        if(lvl%2){
            for(int i = 0; i<n; i++){
                ans.push_back(v[i]->data);
                if(v[i]->left) cur.push_back(v[i]->left);
                if(v[i]->right) cur.push_back(v[i]->right);
            }
        }
        else{
            for(int i = n-1; i>=0; i--){
                ans.push_back(v[i]->data);
                if(v[i]->right) cur.push_back(v[i]->right);
                if(v[i]->left) cur.push_back(v[i]->left);
            }
            reverse(cur.begin(),cur.end());
        }   
        v = cur;
        lvl++;
    }
    return ans;
}
