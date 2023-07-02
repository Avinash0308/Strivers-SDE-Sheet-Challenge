#include <bits/stdc++.h> 
int maximumXor(vector<int> A)
{
    // Write your code here.   
    int ans = 0;
    int n = A.size();
    for (int i = 0; i < n; i++) {
      for (int j = i + 1; j < n; j++){
          ans = max(ans,A[i]^A[j]);
      }
    }
    return ans;
}
