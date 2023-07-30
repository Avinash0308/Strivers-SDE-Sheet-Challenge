#include <bits/stdc++.h> 
vector<int> countDistinctElements(vector<int> &arr, int k) 
{
    // Write your code here
	unordered_map<int,int> m;
    for(int i = 0; i<k; i++){
        m[arr[i]]++;
    }
    int n = arr.size();
    vector<int> ans;
    ans.push_back(m.size());
    for(int i = k; i<n; i++){
        m[arr[i]]++;
        m[arr[i-k]]--;
        if(m[arr[i-k]] == 0){
            m.erase(arr[i-k]);
        }
        ans.push_back(m.size());
    }
    return ans;
}
