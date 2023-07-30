#include <bits/stdc++.h> 
/*************************************************************

    Following is the Binary Tree node structure

    class BinaryTreeNode
    {
    public :
        T data;
        BinaryTreeNode < T > *left;
        BinaryTreeNode < T > *right;

        BinaryTreeNode(T data) {
            this -> data = data;
            left = NULL;
            right = NULL;
        }
    };

*******************************k******************************/
int solve(BinaryTreeNode<int>* root){
    if(!root) return 0;
    if(!root->left && !root->right){
        root->data = 1e6;
        return root->data;
    }
    root->data = solve(root->left) + solve(root->right);
    return root->data;
}
void changeTree(BinaryTreeNode < int > * root) {
    // Write your code here.
    if(!root) return;
    solve(root);
}  