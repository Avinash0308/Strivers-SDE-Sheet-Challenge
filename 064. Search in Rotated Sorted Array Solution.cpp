int find(int *nums, int low , int high, int n){
    while(low<=high){
        int mid = (low+high)/2;
        if(mid <n -1 && nums[mid] > nums[mid+1]){
            return mid+1;
        }
        else if(nums[mid] >= nums[0]){
            low = mid+1;
        }
        else{
            high = mid-1;
        }
    }
    return 0;
}
int secondfind(int* nums, int low , int high , int start, int tar, int n){
    while(low<=high){
        int mid = (low+high)/2;
        int cur = (mid+start)%n;
        if(nums[cur] == tar){
            return cur;
        }
        else if(nums[cur] > tar){
            high  = mid-1;
        }
        else{
            low = mid+1;
        }
    }
    return -1;
}
int search(int* nums, int n, int key) {
    int ind = find(nums,0,n-1,n);
    return secondfind(nums,0,n-1,ind,key,n);
}
