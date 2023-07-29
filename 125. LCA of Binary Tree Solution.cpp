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
int ans = -1;
pair<int,int> solve(TreeNode<int> *root, int x, int y){
    if(!root) return{0,0};
    if(ans != -1) return{0,0};
    pair<int,int> a = solve(root->left,x,y);
    if(ans != -1) return{0,0};
    pair<int,int> b = solve(root->right,x,y);
    if(ans != -1) return{0,0};
    int one = (a.first || b.first || root->data == x)?1:0;
    int sec = (a.second || b.second || root->data == y)?1:0;
    if(one && sec) ans = root->data;
    return {one,sec};
}
int lowestCommonAncestor(TreeNode<int> *root, int x, int y)
{
    ans = -1;
    solve(root,x,y);
    return ans;
}