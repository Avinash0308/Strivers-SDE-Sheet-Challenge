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
int solve(TreeNode<int>* root , int &k , int &i){
        if(root->left){
            int val = solve(root->left,k,i);
            if(val != -1) return val;
            i++;
            if(k == i) return root->data;
            if(root->right){
                return solve(root->right,k,i);
            } 
            else{
                return -1;
            }
        }
        else{
            i++;
            if(k == i) return root->data;
            else{
                if(root->right){
                    return solve(root->right,k,i);
                } 
                else{
                    return -1;
                }
            }
        }
    }
int kthSmallest(TreeNode<int> *root, int k)
{
	//	Write the code here.
    if(!root) return -1;
        int i = 0;
        return solve(root,k,i);
}