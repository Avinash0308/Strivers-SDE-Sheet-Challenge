#include<bits/stdc++.h>
vector<int> maxMinWindow(vector<int> arr, int n) {
    stack<int> s;
    vector<int> left(n);
    vector<int> right(n);
    for(int i = 0; i<n; i++){
        while(!s.empty() && arr[s.top()] >= arr[i]){
            s.pop();
        }
        left[i] = (s.empty())?-1:s.top();
        s.push(i);
    }
    while(!s.empty()) s.pop();
    for(int i = n-1; i>=0; i--){
        while(!s.empty() && arr[s.top()] >= arr[i]){
            s.pop();
        }
        right[i] = (s.empty())?n:s.top();
        s.push(i);
    }
    vector<int> ans(n,INT_MIN);
    for(int i = 0; i<n; i++){
        int size = right[i]-left[i]-2;
        ans[size] = max(ans[size],arr[i]);
    }
    for(int i = n-2; i>=0; i--){
        ans[i] = max(ans[i],ans[i+1]);
    }
    return ans;
}
