#include <bits/stdc++.h> 
int uniquePaths(int m, int n) {
	// Write your code her
	vector<vector<int>> ways_at_each_ind(m,vector<int> (n));
	ways_at_each_ind[0][0] = 1;
	for(int i = 0; i<m; i++){
		for(int j = 0; j<n; j++){
			if(j<n-1){
				ways_at_each_ind[i][j+1] += ways_at_each_ind[i][j];
			}
			if(i<m-1){
				ways_at_each_ind[i+1][j] += ways_at_each_ind[i][j];
			}
		}
	}
	return ways_at_each_ind[m-1][n-1];
}
