#include <bits/stdc++.h> 
vector<vector<int>> findTriplets(vector<int>nums, int n, int K) {
	if(n < 3) return {};
        sort(nums.begin(),nums.end());
        vector<vector<int>> ans;
        for(int i = 0; i<n-2; i++){
            if(i == 0 || (i>0 && nums[i] != nums[i-1])){
                int val = K-nums[i];
                int low = i+1, high = n-1;
                while(low<high){
                    int cur = nums[low] + nums[high];
                    if (cur == val) {
                        ans.push_back({nums[i],nums[low],nums[high]});
                        while(low<high && nums[low] == nums[low+1]) low++;
                        low++;
                        while(high>low && nums[high] == nums[high-1]) high--;
                        high--;
                    }
                    else if(cur > val){
                        while(high>low && nums[high] == nums[high-1]) high--;
                        high--;
                    }
                    else{
                        while(low<high && nums[low] == nums[low+1]) low++;
                        low++;
                    }
                }
            }
        }
        return ans;
}
