#include <bits/stdc++.h> 
using namespace std;
class TreeNode{
    public:
    int data;
    TreeNode *left, *right;
};
/*
    Following is Binary Tree Node structure:
    class TreeNode
    {
    public:
        int data;
        TreeNode *left, *right;
        TreeNode() : data(0), left(NULL), right(NULL) {}
        TreeNode(int x) : data(x), left(NULL), right(NULL) {}
        TreeNode(int x, TreeNode *left, TreeNode *right) : data(x), left(left), right(right) {}
    };
*/
void traverse(vector<int> &v , TreeNode* root){
    if(root){
        traverse(v,root->left);
        v.push_back(root->data);
        traverse(v,root->right);
    }
}
vector<int> getInOrderTraversal(TreeNode *root)
{
    // Write your code here.
    vector<int> v;
    traverse(v,root);
    return v;
}