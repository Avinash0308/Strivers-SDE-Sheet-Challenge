#include <bits/stdc++.h> 
vector<int> mergeKSortedArrays(vector<vector<int>>&kArrays, int k)
{
    while(kArrays.size()>1){
        vector<int> cur;
        int i = 0 , j = 0;
        int n = kArrays[0].size(), m = kArrays[1].size();
        while(i<n && j<m){
            if(kArrays[0][i] < kArrays[1][j]){
                cur.push_back(kArrays[0][i]);
                i++;
            }
            else{
                cur.push_back(kArrays[1][j]);
                j++;
            }
        }
        while(i<n){
            cur.push_back(kArrays[0][i]);
            i++;
        }
        while(j<m){
            cur.push_back(kArrays[1][j]);
            j++;
        }
        kArrays.push_back(cur);
        kArrays.erase(kArrays.begin());
        kArrays.erase(kArrays.begin());
    }
    return kArrays[0];
}
