#include <bits/stdc++.h>
void solve(vector<int> &ans, vector<int> &num, int ind, int sum){
    if(ind == num.size()){
        ans.push_back(sum);
        return;
    }
    solve(ans,num,ind+1,sum);
    solve(ans,num,ind+1,sum+num[ind]);
}
vector<int> subsetSum(vector<int> &num)
{
    vector<int> ans;
    int sum = 0;
    solve(ans,num,0,sum);
    sort(ans.begin(),ans.end());
    return ans;
}
