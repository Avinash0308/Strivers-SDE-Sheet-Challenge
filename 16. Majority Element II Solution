#include <bits/stdc++.h>

vector<int> majorityElementII(vector<int> &arr)
{
    int n= arr.size();
    int cnt1 = 0, cnt2 = 0, val1 = -1, val2 = -1;
    for(int i = 0; i<n; i++){
        if(arr[i] == val1){
            cnt1++;
        }
        else if(arr[i] == val2){
            cnt2++;
        }
        else if(cnt1 == 0){
            val1 = arr[i];
            cnt1 = 1;
        }
        else if(cnt2 == 0){
            val2 = arr[i];
            cnt2 = 1;
        }
        else{
            cnt2--;
            cnt1--;
        }
    }
    cnt1 = 0, cnt2 = 0;
    for(int i = 0; i<n; i++){
        if(arr[i] == val1) cnt1++;
        if(arr[i] == val2) cnt2++;
    }
    vector<int> res;
    if(cnt1 > n/3) res.push_back(val1);
    if(cnt2 > n/3) res.push_back(val2);
    return res;
}
