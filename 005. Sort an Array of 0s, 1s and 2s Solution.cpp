class Solution {
public:
    void sortColors(vector<int>& nums) {
        int one = 0 , two = 0 , three = 0;
        int n = nums.size();
        for(int i = 0; i<n ; i++){
            if(nums[i] == 0) one++;
            else if(nums[i] == 1) two++;
            else three++;
        }
        int k = 0;
        for(int i = 0; i<one ; i++){
            nums[k] = 0;
            k++;
        }
        for(int i = 0; i<two ; i++){
            nums[k] = 1;
            k++;
        }
        for(int i = 0; i<three ; i++){
            nums[k] = 2;
            k++;
        }
    }
};
