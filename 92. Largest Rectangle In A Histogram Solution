 #include<bits/stdc++.h>
 int largestRectangle(vector < int > & arr) {
   // Write your code here.
   int n = arr.size();
   long long ans = 0;
        stack<pair<int,long long>> s;
        for(int i = 0; i<n; i++){
            int start = i;
            while(!s.empty() &&  arr[i] < s.top().second){
                long long val = s.top().second;
                long long ind = s.top().first;
                s.pop();
                ans = max(ans,(i-ind)*val);
                start = ind;
            }
            s.push({start,arr[i]});
        }
        while(!s.empty()){
            long long val = s.top().second;
            long long ind = s.top().first;
            s.pop();
            ans = max(ans,(n-ind)*val);
        }
        return ans;
 }
