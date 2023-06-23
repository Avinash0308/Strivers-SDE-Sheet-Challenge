double median(vector<int>& a, vector<int>& b) {
	int n= a.size(), m = b.size();
	if(n == 0 && m == 0) return 0;
	if(n == 0) return ((double)b[(m-1)/2] + b[m/2])/2;
	if(m == 0) return ((double)a[(n-1)/2] + a[n/2])/2;
	int siz = n + m;
	int low = 0, high = m-1;
    int l = 0, h = n-1;
	while(l<=h){
        int mi = (l+h)/2;
		high = m-1;
        low = 0;
		while(low<=high){
			int mid = (low+high)/2;
			if(b[mid] > a[mi]){
				high = mid-1;
			}
			else{
				low = mid+1;
			}
		}
		int left = low + mi;
		int right = m-low + n-mi-1;
		if(siz%2 && left == right) return a[mi];
		else if(siz%2 == 0 && right-left == 1){
			int x = (mi == n-1)?INT_MAX:a[mi+1];
			int y = (low == m)?INT_MAX:b[low];
			return ((double)a[mi] + min(x,y))/2;
		}
		else if(siz%2 == 0 && left-right == 1){
			int x = (mi == 0)?INT_MIN:a[mi-1];
			int y = (low == 0)?INT_MIN:b[low-1];
			return ((double)a[mi] + max(x,y))/2;
		}
        if(left>right){
            h = mi-1;
        }
        else{
            l = mi+1;
        }
	}
	return median(b,a);
}
