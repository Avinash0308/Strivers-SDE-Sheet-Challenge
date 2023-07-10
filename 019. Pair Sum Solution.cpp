#include <bits/stdc++.h>

vector<vector<int>> pairSum(vector<int> &arr, int s){
   unordered_map<int,int> m;
   vector<vector<int>> ans;
   int n = arr.size();
   for(int i = 0; i<n; i++){
      if(m.find(s-arr[i]) != m.end()){
         int val = m[s-arr[i]];
         int a = min(arr[i],s-arr[i]);
         int b = s-a;
         for(int j = 0; j<val; j++){
            ans.push_back({a,b});
         } 
      }
      m[arr[i]]++;
   }
   sort(ans.begin(),ans.end());
   return ans;
}
