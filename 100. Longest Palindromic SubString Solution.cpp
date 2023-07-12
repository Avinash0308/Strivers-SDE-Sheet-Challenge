#include<bits/stdc++.h>
using namespace std;
string longestPalinSubstring(string str)
{
    // Write your code here.
    if(!str.size()) return "";
    int n = str.size();
    int cur = 1;
    string ans;
    ans += str[0];
    vector<vector<int>> v(n,vector<int> (n,0));
    for(int i = 0; i<n; i++) v[i][i] = 1;
    for(int i = n-2; i>=0; i--){
        for(int j = i+1; j<n; j++){
            if(str[i] == str[j] && (i+1 == j || v[i+1][j-1] == 1)){
                v[i][j] = 1;
                if(j-i+1 >= cur){
                    cur = j-i+1;
                    ans = str.substr(i,j-i+1);
                }
            }
        }
    }
    return ans;
}