#include <bits/stdc++.h> 
vector<int> minHeap(int n, vector<vector<int>>& q) {
    multiset<int> m;
    vector<int> ans;
    for(int i = 0; i<n; i++){
        if(q[i][0] == 0){
            m.insert(q[i][1]);
        }
        else{
            auto it = m.begin();
            ans.push_back(*it);
            m.erase(it);
        }
    }
    return ans;
}
