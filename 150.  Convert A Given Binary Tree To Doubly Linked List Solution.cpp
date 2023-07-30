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
void traverse(BinaryTreeNode<int> *root, vector<int> &ans){
    if(!root) return;
    traverse(root->left,ans);
    ans.push_back(root->data);
    traverse(root->right,ans);
}
BinaryTreeNode<int>* BTtoDLL(BinaryTreeNode<int>* root) {
    // Write your code here
    if(!root) return root;
    vector<int> ans;
    traverse(root,ans);
    BinaryTreeNode<int> *head, *cur;
    head = new BinaryTreeNode<int>(ans[0]);
    head->left = NULL;
    BinaryTreeNode<int> *prev = head;
    cur = head;
    for(int i = 1; i<ans.size(); i++){
        prev->right = new BinaryTreeNode<int>(ans[i]);
        prev->right->left = prev;
        prev = prev->right;
    }
    return head;
}