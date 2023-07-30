#include <bits/stdc++.h> 
/**********************************************************

    Following is the Binary Tree Node structure:

    template <typename T>
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
            if (left)
                delete left;
            if (right)
                delete right;
        }
    };
***********************************************************/
bool solve(unordered_map<int,int> &m , BinaryTreeNode<int> * root, int k){
        if(!root) return false;
        if(solve(m,root->left,k) || solve(m,root->right,k)) return true;
        int val = k-root->data;
        if(m.find(val) != m.end()){
            return true;
        }
        m[root->data]++;
        return false;
    }
bool pairSumBst(BinaryTreeNode<int> *root, int k)
{
    // Write your code here
    unordered_map<int,int> m;
        return solve(m,root,k);
}