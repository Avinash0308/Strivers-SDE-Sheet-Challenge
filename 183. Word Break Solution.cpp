#include <bits/stdc++.h> 
void solve(bool &ans , string &s , unordered_map<string,int> &m,int ind , vector<int> &v){
    if(ind == s.size()){
        ans = true;
        return;
    }
    if(!v[ind])return;
    string cur = s.substr(ind,s.size()-ind);
    while(cur.size() && !ans){
        if(m.find(cur) != m.end()){
            solve(ans,s,m,ind+cur.size(),v);
        }
        else{

        }
        cur.pop_back();
    }
    v[ind] = (ans == false)?0:1;
    }
bool wordBreak(vector < string > & wordDict, int n, string & s) {
    // Write your code here.
    bool ans = false;
    unordered_map<string,int> m;
    int len = s.size();
    vector<int> v(len,1);
    for(int i = 0; i<wordDict.size(); i++){
        m[wordDict[i]] = 1;
    }
    solve(ans,s,m,0,v);
    return ans;
}