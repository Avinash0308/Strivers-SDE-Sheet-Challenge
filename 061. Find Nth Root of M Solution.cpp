int NthRoot(int n, int m) {
    int low = 1 ,high = m;
    while(low<=high){
        int mid = (low+high)/2;
        int val = pow(mid,n);
        if(val == m) {return mid;}
        else if(val > m) {high = mid-1;}
        else {low = mid+1;}
    }
    return -1;
}
