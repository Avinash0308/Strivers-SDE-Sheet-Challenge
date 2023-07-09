#include <bits/stdc++.h> 
vector<int> slidingWindowMaximum(vector<int> &nums, int &k)
{
    //    Write your code here.
    priority_queue<pair<int,int>> p;
        vector<int> ans;
        int n = nums.size();
        if(n < k) return ans;
        for(int i = 0; i<k; i++){
            p.push({nums[i],i});
        }
        ans.push_back(p.top().first);
        for(int i= k; i<n; i++){
            p.push({nums[i],i});
            while(!p.empty() && p.top().second <= i-k){
                p.pop();
            }
            ans.push_back(p.top().first);
        }
        return ans;
}
