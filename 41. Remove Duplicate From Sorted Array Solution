int removeDuplicates(vector<int> &nums, int n) {
	int val = 0;
        int j = 0;
        for(int i = 0; i<nums.size() ; i++){
            val++;
            int n = nums[i];
            nums[j] = nums[i];
            j++;
            while(i+1<nums.size() && nums[i+1] == n){
                i++;
            }
        }
        return val;
}
