#include <bits/stdc++.h>

int findMajorityElement(int arr[], int n) {
	// Write your code here.
	int ind ;
	int count = 0;
	for(int i = 0;i<n; i++){
		if(count == 0){
			ind = arr[i];
		}
		if(ind == arr[i]) count++;
		else count--;
	}
	if(count){
		int c = 0;
		for(int i = 0; i<n; i++){
			if(arr[i] == ind) c++;
		}
		if(c > n/2) return ind;
		else return -1;
	}
	else return -1;
}
