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

bool validateBST(BinaryTreeNode<int> *root, int prev = INT_MAX) {
    // Write your code here
    if(!root) return true;
    if(validateBST(root->left,root->data) && validateBST(root->right,prev))
        return (!root->left || root->left->data <= root->data) && (!root->right || (root->right->data >= root->data && root->right->data <= prev));
    else return false;
}