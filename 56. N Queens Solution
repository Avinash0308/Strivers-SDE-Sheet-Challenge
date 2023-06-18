void solve(int i, int n, int rem_q, vector<vector<int>> &ans, vector<int> &col, vector<int> &dia1, vector<int> &dia2, vector<int> &cur){
    if(rem_q == 0){
        ans.push_back(cur);
        /*vector<int> temp(n*n);
        int ind = 0;
        for(int x = n*(n-1); x>=0 ; x-=n){
            for(int z = x; z<x+n; z++){
                temp[ind] = cur[z];
                ind++; 
            }
        }
        ans.push_back(temp);*/
        return;
    }
    for(int j = 0; j<n; j++){
        if(col[j] == 0 && dia1[i+j] == 0 && dia2[n-1-i+j] == 0){
            col[j] = 1;
            dia1[i+j] = 1;
            dia2[n-1-i+j] = 1;
            for(int k = 0; k<n; k++){
                if(k == j){
                    cur.push_back(1);
                }
                else cur.push_back(0);
            }
            solve(i+1,n,rem_q-1,ans,col,dia1,dia2,cur);
            col[j] = 0;
            dia1[i+j] = 0;
            dia2[n-1-i+j] = 0;
            for(int k = 0; k<n; k++){
                cur.pop_back();
            }
        }
    }
    
}
vector<vector<int>> solveNQueens(int n) {
    // Write your code here.
    int r = 0, c = 0;
    vector<vector<int>> ans;
    vector<int> cur;
    vector<int> col(n), dia1(2*n - 1), dia2(2*n - 1);
    solve(0,n,n,ans,col,dia1,dia2,cur);
    return ans;
}
