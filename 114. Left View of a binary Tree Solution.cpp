#include <bits/stdc++.h> 
/************************************************************

    Following is the TreeNode class structure

    template <typename T>
    class TreeNode {
       public:
        T data;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T data) {
            this->data = data;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/
void solve(TreeNode<int>* root, int lvl, vector<int> &m){
    if(root == NULL) return;
    if(m.size() == lvl){
        m.push_back(root->data);
    }
    solve(root->left,lvl+1,m);
    solve(root->right,lvl+1,m);
}
vector<int> getLeftView(TreeNode<int> *root)
{
    //    Write your code here
    vector<int> ans;
    solve(root,0,ans);
    return ans;
}