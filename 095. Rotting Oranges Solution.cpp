#include<bits/stdc++.h>

int minTimeToRot(vector<vector<int>>& grid, int n, int m)
{
    // Write your code here. 
    int fresh = 0;
        queue<pair<int,int>> q;
        for(int i = 0; i<n ;i++){
            for(int j = 0; j<m ;j++){
                if(grid[i][j] == 2){
                    q.push({i,j});
                    grid[i][j] = 0;
                }
                fresh += (grid[i][j] == 1);
            }
        }
        if(fresh == 0) return 0;
        int time = -1, size;
        while(!q.empty()){
            time++;
            size = q.size();
            while(size--){
                pair<int,int> p = q.front();
                q.pop();
                int i = p.first, j = p.second;
                if(i+1<n && grid[i+1][j] == 1){
                    q.push({i+1,j});
                    grid[i+1][j] = 0;
                    fresh--;
                }
                if(j+1<m && grid[i][j+1] == 1){
                    q.push({i,j+1});
                    grid[i][j+1] = 0;
                    fresh--;
                }
                if(i-1>=0 && grid[i-1][j] == 1){
                    q.push({i-1,j});
                    grid[i-1][j] = 0;
                    fresh--;
                }
                if(j-1>=0 && grid[i][j-1] == 1){
                    q.push({i,j-1});
                    grid[i][j-1] = 0;
                    fresh--;
                }
            }
        }
        return (fresh == 0)?time:-1;
}
