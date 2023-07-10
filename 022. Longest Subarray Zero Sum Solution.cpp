int LongestSubsetWithZeroSum(vector < int > A) {
  int n = A.size();
  map<int,int> m;
        int max = 0;
        int z = 0;
        for(int i = 0; i<n; i++){
            z+=A[i];
            if(z == 0){
                max = i+1;
            }
            else{
                if(m.find(z) != m.end()){
                    if(max < i-m[z]){
                        max = i-m[z];
                    }
                }
                else{
                    m[z] = i;
                }
            }
        }
        return max;

}
