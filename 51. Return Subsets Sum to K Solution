void solve(vector<vector<int>> &ans, vector<int> cur, int sum, int ind, int k, int n, vector<int> &arr){
    if(ind == n){
        if(sum == k){
            ans.push_back(cur);
        }
        return;
    }
    solve(ans,cur,sum,ind+1,k,n,arr);
    cur.push_back(arr[ind]);
    solve(ans,cur,sum+arr[ind],ind+1,k,n,arr);
}
vector<vector<int>> findSubsetsThatSumToK(vector<int> arr, int n, int k)
{
    vector<vector<int>> ans;
    vector<int> cur;
    int sum = 0;
    int ind = 0;
    solve(ans,cur,sum,ind,k,n,arr);
    return ans;
}
