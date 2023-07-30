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

class BSTiterator
{
    TreeNode<int>* head;
    vector<int> v;
    int i;
public:
    void inorder(TreeNode<int>* h , vector<int> &v){
        if(!h) return;
        inorder(h->left,v);
        v.push_back(h->data);
        inorder(h->right,v);
        i = 0;
    }
    BSTiterator(TreeNode<int> *root)
    {
        // write your code here
        head = root;
        inorder(root,v);
    }

    int next()
    {
        // write your code here
        if(hasNext()){
            i++;
            return v[i-1];
        }
        else{
            return -1;
        }
    }

    bool hasNext()
    {
        // write your code here
        if(v.size() > i) return true;
        else return false;
    }
};


/*
    Your BSTIterator object will be instantiated and called as such:
    BSTIterator iterator(root);
    while(iterator.hasNext())
    {
       print(iterator.next());
    }
*/