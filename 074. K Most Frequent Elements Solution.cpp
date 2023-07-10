#include <bits/stdc++.h> 
vector<int> KMostFrequent(int n, int k, vector<int> &arr)
{
    unordered_map<int,int> m;
    for(int i = 0; i<n; i++){
        m[arr[i]]++;
    }
    priority_queue<pair<int,int>> p;
    for(auto it:m){
        p.push({it.second,it.first});
    }
    vector<int> ans;
    while(!p.empty() && k--){
        pair<int,int> q = p.top();
        p.pop();
        ans.push_back(q.second);
    }
    sort(ans.begin(),ans.end());
    return ans;
}
