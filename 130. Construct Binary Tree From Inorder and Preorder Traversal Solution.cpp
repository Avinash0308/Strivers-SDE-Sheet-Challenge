#include<bits/stdc++.h>
using namespace std;
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
TreeNode<int>* binary(unordered_map<int,int> &map, vector<int> &preorder, int start, int end, int& ind){
    TreeNode<int> *cur = new TreeNode<int>(preorder[ind]);
    if(ind+1>=preorder.size()) return cur;
    int k = map[preorder[ind]];
    int i = map[preorder[ind+1]];
    if(i<k && i>=start){
        ind++;
        cur->left = binary(map,preorder,start,k-1,ind);
    }
    if(ind+1>=preorder.size()) return cur;
    i = map[preorder[ind+1]];
    if(i>k && i<=end){
        ind++;
        cur->right = binary(map,preorder,k+1,end,ind);
    }
    return cur;
}
TreeNode<int> *buildBinaryTree(vector<int> &inorder, vector<int> &preorder)
{
	//    Write your code here
    unordered_map<int,int> m;
    int n = inorder.size();
    for(int i = 0; i<n; i++){
        m[inorder[i]] = i;
    }
    int ind = 0;
    return binary(m,preorder,0,n-1,ind);
}
int main(){
    return 0;
}