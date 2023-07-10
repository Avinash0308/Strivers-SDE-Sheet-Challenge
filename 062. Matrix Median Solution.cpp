#include<bits/stdc++.h>
int getMedian(vector<vector<int>> &matrix)
{
    int n = matrix.size(), m = matrix[0].size();
    vector<int> brute;
    for(int i = 0; i<n; i++){
        for(int j = 0; j<m; j++){
            brute.push_back(matrix[i][j]);
        }
    }
    sort(brute.begin(),brute.end());
    return brute[(brute.size()-1)/2];
}
