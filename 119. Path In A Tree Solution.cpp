#include <bits/stdc++.h> 
/*   
    template <typename T = int>
	class TreeNode
	{
		public:
		T data;
		TreeNode<T> *left;
		TreeNode<T> *right;

		TreeNode(T data)
		{
			this->data = data;
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
*/

void solve(TreeNode<int>* root, int x, vector<int> &ans){
	if(!root) return;
	ans.push_back(root->data);
	if(root->data == x) return;
	int n = ans.size();
	solve(root->left,x,ans);
	if(ans.size() > n) return;
	solve(root->right,x,ans);
	if(ans.size() > n) return;
	ans.pop_back();
}
vector<int> pathInATree(TreeNode<int> *root, int x)
{
    // Write your code here.
	vector<int> ans;
	solve(root,x,ans);
	return ans;
}
