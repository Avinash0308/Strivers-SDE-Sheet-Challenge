#include <bits/stdc++.h>

void rotateMatrix(vector<vector<int>> &matrix, int n, int m)
{
    int i  = 0;
        for(i = 0; i<n-i-1 && i<m-i-1; i++){
            int val = 0;
            for(int j = i; j<m-i; j++){
                swap(val,matrix[i][j]);
            }
            for(int j = i+1; j<n-i; j++){
                swap(val,matrix[j][m-i-1]);
            }
            for(int j = m-i-2; j>=i; j--){
                swap(val,matrix[n-i-1][j]);
            }
            for(int j = n-i-2; j>=i; j--){
                swap(val,matrix[j][i]);
            }
        }
}
