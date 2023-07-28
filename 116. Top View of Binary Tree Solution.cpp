#include <bits/stdc++.h> 
/************************************************************

    Following is the TreeNode class structure:

    template <typename T>
    class TreeNode {
       public:
        T val;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T val) {
            this->val = val;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/

vector<int> getTopView(TreeNode<int> *root) {
    // Write your code here.
    map<int,int> m;
    queue<pair<TreeNode<int>*,int>> q;
    vector<int> ans;
    if(!root) return ans;
    q.push({root,0});
    while(!q.empty()){
        int n = q.size();
        while(n--){

            pair<TreeNode<int>*,int> p = q.front();
            q.pop();
            if(m.find(p.second) == m.end()){
                m[p.second] = p.first->val;
            }
            if(p.first->left){
                q.push({p.first->left,p.second-1});
            }
            if(p.first->right){
                q.push({p.first->right,p.second+1});
            }
        }
    }
    for(auto it:m){
        ans.push_back(it.second);
    }
    return ans;
}