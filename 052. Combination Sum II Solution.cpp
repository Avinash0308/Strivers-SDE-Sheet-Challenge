#include<bits/stdc++.h>
void solve(vector<int> &arr, int n, int target, vector<vector<int>> &res, vector<int> cur, int sum, int ind){
	if(ind == n){
		if(sum == target){
			res.push_back(cur);
		}
		return;
	}
	cur.push_back(arr[ind]);
	solve(arr,n,target,res,cur,sum+arr[ind],ind+1);
	cur.pop_back();
	while(ind+1<n && arr[ind] == arr[ind+1])ind++;
	solve(arr,n,target,res,cur,sum,ind+1);
}
vector<vector<int>> combinationSum2(vector<int> &arr, int n, int target)
{
	sort(arr.begin(),arr.end());
	vector<int> cur;
	int sum = 0;
	vector<vector<int>> res;
	solve(arr,n,target,res,cur,sum,0);
	return res;
}
