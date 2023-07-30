#include <bits/stdc++.h> 
/************************************************************

    Following is the Tree node structure
	
	template <typename T>
    class TreeNode 
    {
        public : 
        T val;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T val) 
        {
            this -> val = val;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/
long long int solve(TreeNode<int> *root, long long int& ans){
    if(!root) return -1;
    long long int a = solve(root->left,ans);
    long long int b = solve(root->right,ans);
    if(a != -1 && b != -1){
        ans = max(ans,a+b+root->val);
    }
    return max((long long int)0,max(a,b)) + root->val;
}
long long int findMaxSumPath(TreeNode<int> *root)
{
    // Write your code here.
    long long int ans = -1;
    solve(root,ans);
    return ans;
}