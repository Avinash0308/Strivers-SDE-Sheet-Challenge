#include<bits/stdc++.h>
int lcs(string text1, string text2)
{
	//Write your code here
	int n = text1.size() , m = text2.size();
        vector<vector<int>> v(n,vector<int> (m));
        for(int i = 0; i<n ; i++){
            for(int j = 0; j<m ; j++){
                if(text1[i] == text2[j]){
                    if(i>0 && j>0){
                        v[i][j] = v[i-1][j-1]+1;
                    }
                    else{
                        v[i][j] = 1;
                    }
                }
                else{
                    v[i][j] = 0;
                    if(i>0) v[i][j] = v[i-1][j];
                    if(j>0) v[i][j] = max(v[i][j],v[i][j-1]);
                }
            }
        }
        return v[n-1][m-1];
}