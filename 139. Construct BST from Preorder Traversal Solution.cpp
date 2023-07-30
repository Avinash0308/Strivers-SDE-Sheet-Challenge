#include <bits/stdc++.h> 
/*************************************************************

    Following is the Binary Tree node structure

    template <typename T>

    class TreeNode{
    public:
        T data;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T data) {
            this->data = data;
            left = NULL;
            right = NULL;
        }
        ~TreeNode() {
            if (left){
                delete left;
            }
            if (right){
                delete right;
            }
        }
    };

*************************************************************/
TreeNode<int>* solve(vector<int> &preorder, int n, int &i, int prev){
    if(i == n) return NULL;
    TreeNode<int>* cur = new TreeNode<int>(preorder[i]);
    if(i+1 == n) return cur;
    i++;
    if(preorder[i] < cur->data){
        cur->left = solve(preorder,n,i,cur->data);
    }
    if(i == n) return cur;
    if(preorder[i] > cur->data && preorder[i] < prev){
        cur->right = solve(preorder,n,i,prev);
    }
    return cur;
}
TreeNode<int>* preOrderTree(vector<int> &preorder){
    // Write your code here.
    int n = preorder.size();
    int ind = 0;
    return solve(preorder,preorder.size(),ind,INT_MAX);
}