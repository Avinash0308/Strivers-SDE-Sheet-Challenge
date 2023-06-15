#include <bits/stdc++.h> 
void solve(int n, vector<vector<int>> &ans, vector<int> cur, vector<int> &arr, int ind){
    if(ind == n){
        ans.push_back(cur);
        return;
    }
    cur.push_back(arr[ind]);
    solve(n,ans,cur,arr,ind+1);
    cur.pop_back();
    while(ind<n-1 && arr[ind]  == arr[ind+1])ind++;
    solve(n,ans,cur,arr,ind+1);
}
vector<vector<int>> uniqueSubsets(int n, vector<int> &arr)
{
    // Write your code here.
    
    sort(arr.begin(),arr.end());
    vector<int> cur;
    vector<vector<int>> ans;
    solve(n,ans,cur,arr,0);
    sort(ans.begin(),ans.end());
    return ans;
}
