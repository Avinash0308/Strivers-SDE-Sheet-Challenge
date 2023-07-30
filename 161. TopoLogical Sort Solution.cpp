#include <bits/stdc++.h> 
vector<int> topologicalSort(vector<vector<int>> &edges, int v, int e)  {
    // Write your code here
    vector<vector<int>> adj(v);
    vector<int> indegree(v,0);
    for(int i=0;i<edges.size();i++){
        adj[edges[i][0]].push_back(edges[i][1]);
        indegree[edges[i][1]]++;
    }
    vector<int> ans;
    queue<int> q;
    for(int i=0;i<v;i++){
        if(indegree[i]==0){
      q.push(i);
        }
}
    while(!q.empty()){
        int n=q.size();
        while(n--){
            auto f=q.front();
            q.pop();
            ans.push_back(f);
            for(auto child:adj[f]){
                if(--indegree[child]==0){
                    q.push(child);
                }
            }
        }
    }
    return ans;
}