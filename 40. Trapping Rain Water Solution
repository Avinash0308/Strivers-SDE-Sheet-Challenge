#include <bits/stdc++.h> 
long getTrappedWater(long *arr, int n){
        long max1 = 0 , max2 = 0;
        long low = 0 , high = n-1;
        long ans = 0;
        while(low <= high){
            if(arr[low] <= arr[high] ){
                max1 = max(max1,arr[low]);
                ans += max1-arr[low];
                low++;
            }
            else{
                max2 = max(max2,arr[high]);
                ans += max2-arr[high];
                high--;
            }
        }
        return ans;
}
