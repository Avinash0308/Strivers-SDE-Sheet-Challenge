#include <bits/stdc++.h> 
vector<int> findSpans(vector<int> &price) {
    // Write your code here.
    int n = price.size();
    stack<pair<int,int>> s;
    vector<int> ans(n);
    for(int i = 0;i <n; i++){
        while(!s.empty() && s.top().first<=price[i]){
            s.pop();
        }
        int low = (s.empty())?-1:s.top().second;
        ans[i] = i-low;
        s.push({price[i],i});
    }
    return ans;
}
