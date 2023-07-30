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
int floorInBST(TreeNode<int> * root, int x)
{
    int a = INT_MIN;
    traverse(root,x,a);
    return a;
}