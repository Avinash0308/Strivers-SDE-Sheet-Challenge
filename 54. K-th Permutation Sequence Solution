#include<bits/stdc++.h>
string kthPermutation(int n, int k) {
    vector<int> v(n);
        v[0] = 1;
        for(int i = 1; i<n ; i++){
            v[i] = i*v[i-1];
        }
        vector<int> visit(n);
        string ans;
        for(int i = n-1; i>=0 ; i--){
            int ind = (k+v[i]-1)/v[i];
            k -= (v[i]*(ind-1));
            int j = 0;
            while(ind){
                if(visit[j] == 0){
                    ind--;
                }
                j++;
            }
            visit[j-1] = 1;
            ans.push_back(char(j+48));
        }
        return ans;
}
