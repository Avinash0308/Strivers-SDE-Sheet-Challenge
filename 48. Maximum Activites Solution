#include<algorithm>
int maximumActivities(vector<int> &start, vector<int> &finish) {
    // Write your code here.
    int n = start.size();
    vector<pair<int,int>> v;
    for(int i = 0; i<n; i++){
        v.push_back({finish[i],start[i]});
    }
    sort(v.begin(),v.end());
    int count = 0;
    int j = 0;
    for(int i= 0; i<n; i++){
        if(v[i].second >= j){
            count++;
            j = v[i].first;
        }
    }
    return count;
}
