#include <bits/stdc++.h> 
/*
    ----------------- Binary Tree node class for reference -----------------

    template <typename T>
    class BinaryTreeNode {
        public : 
            T data;
            BinaryTreeNode<T> *left;
            BinaryTreeNode<T> *right;
            BinaryTreeNode<T> *next;

            BinaryTreeNode(T data) {
                this -> data = data;
                left = NULL;
                right = NULL;
                next = NULL;
            }
    };
*/

void connectNodes(BinaryTreeNode< int > *root) {
    // Write your code here.
    queue<BinaryTreeNode<int>*> q;
    if(!root) return;
    q.push(root);
    while(!q.empty()){
        int n = q.size();
        while(n--){
            BinaryTreeNode<int> *cur = q.front();
            q.pop();
            if(n == 0){
                cur->next = NULL;
            }
            else{
                cur->next = q.front();
            }
            if(cur->left) q.push(cur->left);
            if(cur->right) q.push(cur->right);
        }
    }
    return;
}