#include<bits/stdc++.h>
using namespace std;
int minCharsforPalindrome(string str) {
	// Write your code here.
	int cur = 0;
	int n = str.size();
	int low = 0, high = n-1;
	int start = n-1;
	while(low<high){
		if(str[low] == str[high]){
			low++;
			high--;
		}
		else{
			low = 0;
			start--;
			high = start;
		}
	}
	return n-start-1;
}
