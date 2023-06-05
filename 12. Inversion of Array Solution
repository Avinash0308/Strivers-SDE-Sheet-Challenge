#include <bits/stdc++.h> 
long long val = 0;
void sor(long long *arr, int low ,int mid ,int high){
    int i = low , j= mid+1;
    vector<int> cur;
    while(i<=mid && j<=high){
        if(arr[i]>arr[j]){
            val+=(mid+1-i);
            cur.push_back(arr[j]);
            j++;
        }
        else{
            cur.push_back(arr[i]);
            i++;
        }
    }
    while(i<=mid){
        cur.push_back(arr[i]);
        i++;
    }
    while(j<=high){
        cur.push_back(arr[j]);
        j++;
    }
    for(int k = low; k<=high; k++){
        arr[k] = cur[k-low];
    }
}
void merge(long long *a, int low , int high){
    if(low<high){
        int mid = (low+high)/2;
        merge(a,low,mid);
        merge(a,mid+1,high);
        sor(a,low,mid,high);
    }
}
long long getInversions(long long *arr, int n){
    merge(arr,0,n-1);
    return val;
}
