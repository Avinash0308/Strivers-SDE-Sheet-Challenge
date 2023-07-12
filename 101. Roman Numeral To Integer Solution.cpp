#include<bits/stdc++.h>
using namespace std;
int romanToInt(string s) {
 int val = 0;
        map<char,int> m;
        m['I'] = 1;
        m['V'] = 5;
        m['X'] = 10;
        m['L'] = 50;
        m['C'] = 100;
        m['D'] = 500;
        m['M'] = 1000;
        stack<int> st;
        for(int i = 0; i<s.length() ; i++){
            if(st.empty() || st.top() >= m[s[i]]){
                st.push(m[s[i]]);
            }
            else{
                int x = m[s[i]];
                while(!st.empty() && st.top() < x){
                    x-=st.top();
                    st.pop();
                }
                st.push(x);
            }
        }
        int ans = 0;
        while(!st.empty()){
            ans+=st.top();
            st.pop();
        }
        return ans;
}