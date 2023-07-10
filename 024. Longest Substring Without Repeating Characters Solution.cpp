int longest = 0;
        int cur = 0 , start = 0;
        vector<int> v(255,-1);
        for(int i = 0; i<s.size(); i++){
            if(v[(int)s[i]] < start){
                v[(int)s[i]] = i;
                cur++;
            }
            else{
                start = v[(int)s[i]] + 1;
                v[(int)s[i]] = i;
                cur = i-start+1;
            }
            longest = max(longest,cur);
        }
        return longest;
