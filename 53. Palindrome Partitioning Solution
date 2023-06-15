#include<bits/stdc++.h>
void solve(string &s, int ind, vector<vector<string>> &ans, vector<string> cur, int n, unordered_map<int,vector<int>> &v){
    if(ind == n){
        ans.push_back(cur);
        return;
    }
    for(auto it : v[ind]){
        string x = s.substr(ind,it-ind+1);
        cur.push_back(x);
        solve(s,it+1,ans,cur,n,v);
        cur.pop_back();
    }
    return;
}
#include <bits/stdc++.h> 
vector<vector<string>> partition(string &s) 
{
    unordered_map<int,vector<int>> v;
    int n= s.size();
    for(int i = 0; i<n; i++){
        int low = i-1, high = i;
        while(low>=0 && high<n && s[low] == s[high]){
          v[low].push_back(high);
          low--;
          high++;
        }
        low = i, high = i;
        while (low >= 0 && high < n && s[low] == s[high]){
            v[low].push_back(high);
            low--;
            high++;
        }
    }
    vector<vector<string>> ans;
    vector<string> cur;
    solve(s,0,ans,cur,n,v);
    return ans;
}
