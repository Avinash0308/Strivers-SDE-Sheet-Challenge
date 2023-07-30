#include <bits/stdc++.h> 
/************************************************************

    Following is the TreeNode class structure

    template <typename T>
    class TreeNode {
       public:
        T val;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T val) {
            this->val = val;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/
void traverse(TreeNode<int> *root, int x, int &a){
    if(!root) return;
    if(root->val <= x) a = max(a,root->val);
    traverse(root->left,x,a);
    traverse(root->right,x,a);
}
int floorInBST(TreeNode<int> * root, int X)
{
    int a = INT_MIN;
    traverse(root,x,a);
    return a;
}#include <bits/stdc++.h> 
/*************************************************************

    Following is the Binary Tree node structure

    template <typename T>

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

        ~BinaryTreeNode() {
            if (left)
            {
                delete left;
            }
            if (right)
            {
                delete right;
            }
        }
    };

*************************************************************/
int a = INT_MIN, b = INT_MAX;
void traverse(BinaryTreeNode<int>*root, int key){
    if(!root) return;
        if(root->data > key && root->data < b){
            b = root->data;
        }
        if(root->data < key && root->data > a){
            a = root->data;
        }
        traverse(root->left,key);
        traverse(root->right,key);
}
pair<int,int> predecessorSuccessor(BinaryTreeNode<int>* root, int key)
{
    // Write your code here.
    a = INT_MIN, b = INT_MAX;
    traverse(root,key);
    if(a == INT_MIN) a = -1;
    if(b == INT_MAX) b = -1;
    return {a,b};
}
