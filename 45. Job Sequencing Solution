#include <bits/stdc++.h> 
int jobScheduling(vector<vector<int>> &jobs)
{
    int n = jobs.size();
    int maxy = 0;
    for(int i = 0; i<n; i++){
        swap(jobs[i][0],jobs[i][1]);
        maxy = max(maxy,jobs[i][1]);
    }
    sort(jobs.begin(),jobs.end());
    vector<int> m(maxy+1);
    int total_profit = 0;
    for(int i = n-1; i>=0; i--){
        int t = jobs[i][1];
        while(t>=1 && m[t]){
            t--;
        }
        if(t){
            m[t] = 1;
            total_profit += jobs[i][0];
        }
    }
    return total_profit;
}
