void solve(int v, vector<vector<int>> &adj, vector<int> &ans, int ind,vector<int> &visit){
        if(ind == v) return;
        if(visit[ind]) return;
        visit[ind] = 1;
        ans.push_back(ind);
        int n = adj[ind].size();
        for(int i = 0; i<n; i++){
            solve(v,adj,ans,adj[ind][i],visit);
        }
    }
vector<vector<int>> depthFirstSearch(int V, int E, vector<vector<int>> &edges)
{
    // Write your code here
    vector<vector<int>> cur;
    vector<vector<int>> adj(V);
    for(int i = 0; i<E; i++){
        adj[edges[i][0]].push_back(edges[i][1]);
        adj[edges[i][1]].push_back(edges[i][0]);

    }
    vector<int> visit(V);
    for(int i = 0; i<V; i++){
    vector<int> ans;
     solve(V,adj,ans,i,visit);
        if(ans.size())cur.push_back(ans);
    }
    return cur;
}