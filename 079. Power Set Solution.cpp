#include <bits/stdc++.h> 
void solve(vector<vector<int>> &ans, vector<int> &v, int ind, int n, vector<int> &cur){
    if(ind == n){
        ans.push_back(cur);
        return;
    }
    solve(ans,v,ind+1,n,cur);
    cur.push_back(v[ind]);
    solve(ans,v,ind+1,n,cur);
    cur.pop_back();
}
vector<vector<int>> pwset(vector<int>v)
{
    //Write your code here
    vector<vector<int>> ans;
    vector<int> cur;
    int n = v.size();
    solve(ans,v,0,n,cur);
    return ans;
}
