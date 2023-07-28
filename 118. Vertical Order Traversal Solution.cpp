#include <bits/stdc++.h> 
/************************************************************

Following is the Binary Tree node class
    
template <typename T = int>
class TreeNode
{
public:
    T data;
    TreeNode<T> *left;
    TreeNode<T> *right;

    TreeNode(T val)
    {
        this->data = val;
        left = NULL;
        right = NULL;
    }

    ~TreeNode()
    {
        if (left != NULL)
        {
            delete left;
        }
        if (right != NULL)
        {
            delete right;
        }
    }
};

************************************************************/

vector<int> verticalOrderTraversal(TreeNode<int> *root)
{
    //    Write your code here.
    map<int,vector<int>> m;
    queue<pair<TreeNode<int>*,int>> q;
    vector<int> ans;
    if(!root) return ans;
    q.push({root,0});
    while(!q.empty()){
        pair<TreeNode<int>*,int> p = q.front();
        q.pop();
        m[p.second].push_back(p.first->data);
        if(p.first->left) q.push({p.first->left,p.second-1});
        if(p.first->right) q.push({p.first->right,p.second+1});
    }
    for(auto it: m){
        for(auto i:it.second){
            ans.push_back(i);
        }
    }
    return ans;
}