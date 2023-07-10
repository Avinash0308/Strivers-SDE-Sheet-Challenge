#include <bits/stdc++.h> 
bool check(vector<int> &v, int mid, int c, int n){
	int count = 1, last = v[0];
	for(int i = 1; i<n; i++){
		if(v[i]-last>=mid){
			last = v[i];
			count++;
		}
	}
	if(count>=c) return true;
	else return false;
}
int chessTournament(vector<int> &positions , int n ,  int c){
	sort(positions.begin(),positions.end());
	int low = 1;
	int high = positions[n-1];
	while(low<=high){
		int mid = (low+high)/2;
		if(check(positions,mid,c,n)){
			low = mid+1;
		}
		else{
			high = mid-1;
		}
	}
	return low-1;
}
