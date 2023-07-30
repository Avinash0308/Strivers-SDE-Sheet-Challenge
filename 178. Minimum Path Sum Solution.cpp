#include <bits/stdc++.h> 
int minSumPath(vector<vector<int>> &grid) {
    // Write your code here.
    int cur = 0;
    int m = grid.size();
    int n = grid[0].size();
    vector<vector<int>> visit(m,vector<int> (n,INT_MAX));
    visit[0][0] = grid[0][0];
    for(int i = 1; i<n ; i++){
        visit[0][i] = visit[0][i-1]+grid[0][i];
    }
    for(int i = 1; i<m; i++){
        visit[i][0] = visit[i-1][0]+grid[i][0];
    }
    for(int i = 1; i<m ; i++){
        for(int j = 1; j<n ; j++){
            visit[i][j] = min(visit[i-1][j],visit[i][j-1])+grid[i][j];
        }
    }
    return visit[m-1][n-1];
}