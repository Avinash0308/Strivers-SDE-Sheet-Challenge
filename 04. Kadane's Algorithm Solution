class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxy = INT_MIN;
        int n = nums.size();
        for(int i = 0; i<n ; i++){
            maxy = max(maxy,nums[i]);
        }
        if(maxy <= 0){
            return maxy;
        }
        maxy = 0;
        int mas = 0;
        for(int i = 0; i<n ; i++){
            maxy += nums[i];
            mas = max(mas,maxy);
            if(maxy < 0){
                maxy = 0;
            }
        }
        return mas;
    }
};
