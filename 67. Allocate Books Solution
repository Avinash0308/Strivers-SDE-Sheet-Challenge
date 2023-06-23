#include <bits/stdc++.h> 
bool check(vector<int> &time, long long &max_day, int tot_day){
	int n = time.size();
	int count = 0;
	long long cur = 0;
	for(int i = 0; i<n; i++){
		cur += time[i];
		if(cur>max_day){
			count++;
			cur = time[i];
			if(cur>max_day) return false;
		}
	}
	if(count<tot_day) return true;
	return false;
}
long long ayushGivesNinjatest(int m, int n, vector<int> &time) 
{	
	long long low = time[0];
	long long high = 0;
	for(int i = 0; i<n; i++){
		high += time[i];
		low = min(low,(long long )time[i]);
	}
	while(low<=high){
		long long mid = (low+high)/2;
		if(check(time,mid,m)){
			high = mid-1;
		}
		else{
			low = mid+1;
		}
	}
	return low;
}
