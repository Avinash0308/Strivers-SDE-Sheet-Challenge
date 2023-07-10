#include <bits/stdc++.h>

string fourSum(vector<int> arr, int target, int n) {
    // Write your code here.
    sort(arr.begin(),arr.end());
    for(int i = 0; i<n-3; i++){
        for(int j = i+1; j<n-2; j++){
            int tar = target - (arr[i] + arr[j]);
            int low = j+1, high = n-1;
            while(low<high){
                if(arr[low]+arr[high] > tar){
                    high--;
                }
                else if(arr[low]+arr[high] < tar){
                    low++;
                }
                else{
                    return "Yes";
                }
            }
        }
    }
    return "No";
}
