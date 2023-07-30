#include <bits/stdc++.h> 
/************************************************************
    Following is the Binary Search Tree node structure
    
    template <typename T>
    class TreeNode {
        public :
        T data;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T data) {
            this -> data = data;
            left = NULL;
            right = NULL;
        }

        ~TreeNode() {
            if(left)
                delete left;
            if(right)
                delete right;
        }
    };

************************************************************/
void solve(TreeNode<int> *root, vector<int> &ans){
    if(!root)return;
    solve(root->left,ans);
    ans.push_back(root->data);
    solve(root->right,ans);
}
int KthLargestNumber(TreeNode<int>* root, int k) 
{
    // Write your code here.
    vector<int> ans;
    solve(root,ans);
    if(k > ans.size()) return -1;
    return ans[ans.size()-k];
}
