#include <bits/stdc++.h> 
/************************************************************

    Following is the TreeNode class structure:

    class BinaryTreeNode {
    public:
        T data;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;
        
        BinaryTreeNode(T data) {
            this->data = data;
            left = NULL;
            right = NULL;
        }
        
        ~BinaryTreeNode() {
            if (left) {
              delete left;
            }
            if (right) {
              delete right;
            }
        }
    };

************************************************************/
void traverse(BinaryTreeNode<int> *root, int x, int &a){
    if(!root) return;
    if(root->data >= x) a = min(a,root->data);
    traverse(root->left,x,a);
    traverse(root->right,x,a);
}
int findCeil(BinaryTreeNode<int> *root, int x){
    // Write your code here.
    int a = INT_MAX;
    traverse(root,x,a);
    if(a == INT_MAX) return -1;
    return a;
}