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
int solve(BinaryTreeNode<int>* h){
    if(!h) return 0;
    int a = solve(h->left);
    int b = solve(h->right);
    if(a == -1 || b == -1) return -1;
    int val = abs(a-b);
    if(val > 1) return -1;
    return max(a,b)+1;
}
bool isBalancedBT(BinaryTreeNode<int>* root) {
    // Write your code here.
    int val = solve(root);
    return val!=-1;
}