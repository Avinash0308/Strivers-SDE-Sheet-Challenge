#include <bits/stdc++.h> 
vector<int> maximumMeetings(vector<int> &start, vector<int> &end) {
    // Write your code here.
    int n = start.size();
    vector<pair<int,pair<int,int>>> v;
    for(int i = 0; i<n; i++){
      v.push_back({end[i], {start[i], i + 1}});
    }
    sort(v.begin(),v.end());
    vector<int> vv;
    int cur_end = -1;
    for(int i = 0; i<n; i++){
        if(cur_end < v[i].second.first){
            cur_end = v[i].first;
            vv.push_back(v[i].second.second);
        }
        if(v[i].first == cur_end){
            int siz = vv.size()-1;
            vv[siz] = min(v[i].second.second,vv[siz]);
        }
    }
    return vv;
}
