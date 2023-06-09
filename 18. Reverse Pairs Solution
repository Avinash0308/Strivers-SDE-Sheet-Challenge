#include <bits/stdc++.h>
void merge_sort(vector<int> &nums, int low, int mid, int high, int &ans){
	int i , j;
        vector<int> a;
        i = low , j = mid+1;
        while(i<=mid && j<=high){
            if(nums[i] < nums[j]){
                a.push_back(nums[i]);
                i++;
            }
            else{
                a.push_back(nums[j]);
                j++;
            }
        }
        while(i<=mid){
            a.push_back(nums[i]);
            i++;
        }
        while(j<=high){
            a.push_back(nums[j]);
            j++;
        }
        i = mid , j = high;
        while(i>=low && j>mid){
            if((nums[i])/2 > nums[j]){
                ans += j-mid;
                i--;
            }
            else if(nums[i]/2 == nums[j] && nums[i]%2 == 1){
                ans += j-mid;
                i--;
            }
            else{
                j--;
            }
        }
        for(int i = 0; i<a.size(); i++){
            nums[low+i] = a[i];
        }
}
void merge(vector<int> &arr, int low, int high, int &count){
	if(low<high){
		int mid = (low+high)/2;
		merge(arr,low,mid,count);
		merge(arr,mid+1,high,count);
		merge_sort(arr,low,mid,high,count);
	}
} 
int reversePairs(vector<int> &arr, int n){
	// Write your code here.
	int count = 0;
	merge(arr,0,n-1,count);	
	return count;
}
