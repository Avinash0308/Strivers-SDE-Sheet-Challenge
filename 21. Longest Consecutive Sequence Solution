#include <bits/stdc++.h>

int lengthOfLongestConsecutiveSequence(vector<int> &arr, int n) {
    sort(arr.begin(),arr.end());
    int maxy = 0;
    for(int i = 0; i<n; i++){
        int cur = 1;
        while(i+1<n && (arr[i+1]-1 == arr[i]) || arr[i+1] == arr[i]){
            if(arr[i+1]-1 == arr[i]){
                cur++;
            }
            i++;
        }
        maxy = max(maxy,cur);
    }
    return maxy;
}
