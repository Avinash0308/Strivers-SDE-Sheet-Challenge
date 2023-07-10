#include<queue>
int longestSubSeg(vector<int> &arr , int n, int k){
    int maxy = 0;
    queue<int> q;
    int cur = 0;
    for(int i = 0; i<n; i++){
        if(arr[i]) cur++;
        else{
            if(q.size() < k){
                cur++;
                q.push(i);
            }
            else if(k == 0){
                cur = 1;
            }
            else{
                int ind = q.front();
                q.pop();
                cur = i-ind;
                q.push(i);
            }
        }
        maxy = max(cur,maxy);
    }
    return maxy;
}
