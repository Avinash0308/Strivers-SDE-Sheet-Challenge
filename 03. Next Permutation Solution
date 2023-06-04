class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int ind = -1;
        int n= nums.size();
        for(int i = n-1; i>=1; i--){
            if(nums[i-1] < nums[i]){
                ind = i-1;
                break;
            }
        }
        if(ind == -1){
            sort(nums.begin(),nums.end());
        }
        else{
            int ind2 = -1;
            for(int i = n-1; i>=0 ; i--){
                if(nums[i] > nums[ind]){
                    ind2 = i;
                    break;
                }
            }
            swap(nums[ind],nums[ind2]);
            for(int i = ind+1; i<(ind+n+1)/2; i++){
                swap(nums[i],nums[ind+n-i]);
            }
        }
    }
};
