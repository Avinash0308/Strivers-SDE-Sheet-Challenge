#include<bits/stdc++.h>
void solve(bool &ans, vector<vector<int>> &col, vector<vector<int>> &row, vector<vector<int>> &sub, int matrix[9][9], int ind){
    if(ind == 81){
        ans = true;
        return;
    }
    int i = ind/9 , j = ind%9;
    if(matrix[i][j]){
        solve(ans,col,row,sub,matrix,ind+1);
    }
    else{
        for(int k = 1; k<=9 && !ans; k++){
            if(!(row[i][k-1]) && !(col[j][k-1]) && !(sub[(i/3)*3 + j/3][k-1])){
                col[j][k-1] = 1;
                row[i][k-1] = 1;
                sub[(i/3)*3 + j/3][k-1] = 1;
                solve(ans,col,row,sub,matrix,ind+1);
                col[j][k-1] = 0;
                row[i][k-1] = 0;
                sub[(i/3)*3 + j/3][k-1] = 0;
            }
        }
    }
}
bool isItSudoku(int matrix[9][9]) {
    // Write your code here.
    vector<vector<int>> col(9,vector<int> (9,0)), row(9,vector<int> (9,0)), sub(9,vector<int> (9,0));
    for(int i = 0; i<9; i++){
        for(int j = 0; j<9; j++){
            if(matrix[i][j] == 0) continue;
            col[j][matrix[i][j]-1] = 1;
            row[i][matrix[i][j]-1] = 1;
            sub[(i/3)*3 + j/3][matrix[i][j]-1] = 1;
        }
    }
    bool ans = false;
    int ind = 0;
    solve(ans,col,row,sub,matrix,ind);
    return ans;
}
