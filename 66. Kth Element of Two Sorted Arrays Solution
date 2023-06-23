#include<bits/stdc++.h>
int ninjaAndLadoos(vector<int> &a, vector<int> &b, int n, int m, int k) {
	
        if(n == 0 && m == 0) return 0;
    	if(n == 0) return b[k-1];
    	if(m == 0) return a[k-1];
        long long int l = 0, h = n-1;
    	while(l<=h){
            long long int mi = (l+h)/2;
    	    long long int low = 0, high = m-1;
    		while(low<=high){
    			long long int mid = (low+high)/2;
    			if(b[mid] > a[mi]){
    				high = mid-1;
    			}
    			else{
    				low = mid+1;
    			}
    		}
    		long long int left = low + mi;
            if(left + 1 == k) return a[mi];
            else if(left + 2 == k){
                long long int val1 = mi<n-1?a[mi+1]:INT_MAX;
                long long int val2 = low<m?b[low]:INT_MAX;
                return min(val1,val2);
            }
            else if(left == k && (mi||low)){
                long long int val1 = mi>0?a[mi-1]:INT_MIN;
                long long int val2 = low>0?b[low-1]:INT_MIN;
                return max(val1,val2);
            }
            else if(left > k){
                h = mi-1;
            }
            else{
                l = mi+1;
            }
    	}
    	return ninjaAndLadoos(b,a,m,n,k);
}
