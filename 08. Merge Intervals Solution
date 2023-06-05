vector<vector<int>> mergeIntervals(vector<vector<int>> &intervals)
{
    sort(intervals.begin(),intervals.end());
        vector<vector<int>> v;
        int z = 0;
        for(int i = 0; i<intervals.size(); i++,z++){
            v.push_back(intervals[i]);
            while(i < intervals.size()-1 && v[z][1] >= intervals[i+1][0]){
                v[z][1] = max(intervals[i+1][1],v[z][1]);
                i++;
            }
        }
        return v;
}
