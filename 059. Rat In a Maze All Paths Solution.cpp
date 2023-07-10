#include <bits/stdc++.h> 
void solve(vector<vector<int>> &ans, vector<int> &cur, vector<vector<int>> &maze, int n, int i, int j){
  if(i<0 || i>=n || j<0 || j>=n || maze[i][j] == 0 || cur[i*n + j] == 1) return;
  if(i == n-1 && j == n-1){
     cur[i*n + j] = 1;
     ans.push_back(cur);
     cur[i*n + j] = 0;
     return;
  }
  cur[i*n + j] = 1;
  solve(ans,cur,maze,n,i,j-1);
  solve(ans,cur,maze,n,i,j+1);
  solve(ans,cur,maze,n,i+1,j);
  solve(ans,cur,maze,n,i-1,j);
  cur[i*n + j] = 0;
}
vector<vector<int> > ratInAMaze(vector<vector<int> > &maze, int n){
    vector<vector<int>> ans;
    vector<int> cur(n*n);
    solve(ans,cur,maze,n,0,0);
    return ans;
}
