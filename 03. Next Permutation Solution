class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        int k = 1;
        vector<vector<int>> v;
        for(int i = 0; i<numRows; i++ , k++){
            vector<int> x;
            for(int j = 0; j<k ; j++){
                if(i>0 && j>0 && j<k-1){
                    x.push_back(v[i-1][j-1]+v[i-1][j]);
                }
                else{
                    x.push_back(1);
                }
            }
            v.push_back(x);
        }
        return v;
    }
};
