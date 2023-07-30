#include <bits/stdc++.h> 
/************************************************************

    Following is the Binary Tree node structure:
    
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
void traversel(TreeNode<int>* root, vector<int> &left){
    if(!root) return;
    left.push_back(root->data);
    while(root->left){
        root = root->left;
        left.push_back(root->data);
    }
    root = root->right;
    traversel(root,left);
}
void tra(vector<int> &r, TreeNode<int> *root){
    if(!root) return;
    r.push_back(root->data);
    while(root->right){
        root = root->right;
        r.push_back(root->data);
    }
    root = root->left;
    tra(r,root);
}
void traverse(TreeNode<int>* root, vector<int> &leaf){
    if(!root) return;
    if(!root->left && !root->right){
        leaf.push_back(root->data);
        return;
    }
    traverse(root->left,leaf);
    traverse(root->right,leaf);
}
vector<int> traverseBoundary(TreeNode<int>* root){
    // Write your code here.
    if(!root) return {};
    if(!root->left && !root->right) return {root->data};
    vector<int> ans;
    ans.push_back(root->data);
    traversel(root->left,ans);
    if(ans.size()>1)ans.pop_back();
    traverse(root,ans);
    vector<int> right;
    tra(right,root->right);
    if(right.size()) right.pop_back();
    reverse(right.begin(),right.end());
    for(int i= 0; i<right.size(); i++){
        ans.push_back(right[i]);
    }
    return ans;
}