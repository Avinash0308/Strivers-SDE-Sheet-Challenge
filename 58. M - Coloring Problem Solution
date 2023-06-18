#include <bits/stdc++.h> 
void solve(bool &ans, int n, int m, vector<vector<int>> &mat, int ind, vector<int> &ver_color){
    if(ind == n){
        ans = true;
        return;
    }
    vector<int> avl_color(m,1);
    for(int i = 0; i<n; i++){
        if(mat[ind][i] && ver_color[i] != -1){
            avl_color[ver_color[i]] = 0;
        }
    }
    for(int i = 0; i<m && !ans; i++){
        if(avl_color[i]){
            ver_color[ind] = i;
            solve(ans,n,m,mat,ind+1,ver_color);
            ver_color[ind] = -1;
        }
    }
}
string graphColoring(vector<vector<int>> &mat, int m) {
    int n = mat.size();
    bool ans = false;
    vector<int> ver_color(n,-1);
    solve(ans,n,m,mat,0,ver_color);
    if(ans) return "YES";
    else return "NO";
}
