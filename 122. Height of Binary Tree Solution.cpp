#include <bits/stdc++.h> 
class Node{
	public:
	int hig;
	int left;
	int right;
	Node(int a, int b, int c){
		hig = a;
		left = b;
		right = c;
	}
};
int heightOfTheTree(vector<int>& inorder, vector<int>& levelOrder, int N){
	// Write your code here.
	int ans = 0;
	unordered_map<int,int> m;
	for(int i = 0; i<N; i++){
		m[inorder[i]] = i;
	}
	queue<Node*> q;
	q.push(new Node(0,0,N-1));
	for(int i = 0; i<N; i++){
		Node* cur = q.front();
		q.pop();
		ans = max(ans,cur->hig);
		int ind = m[levelOrder[i]];
		if(ind > cur->left){
			q.push(new Node(cur->hig+1,cur->left,ind-1));
		}
		if(ind < cur->right){
			q.push(new Node(cur->hig+1,ind+1,cur->right));
		}
	}
	return ans;
}