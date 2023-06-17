#include <bits/stdc++.h> 
vector<string> findPermutations(string &s) {
    vector<string> ans;
    if(s.empty()) return ans;
    int n = s.size();
    int fact = 1;
    for(int i = 2; i<=n; i++){
        fact *= i;
    }
    string a = s;
    while(fact--){
        int i = n-2;
        while(i>=0 && s[i] >= s[i+1])i--;
        if(i == -1){
            reverse(s.begin(),s.end());
        } 
        else {
          int j = n - 1;
          while (s[j] <= s[i])
            j--;
          swap(s[i], s[j]);
          reverse(s.begin() + i + 1, s.end());
        }
        ans.push_back(s);
    }   
    return ans;
}
