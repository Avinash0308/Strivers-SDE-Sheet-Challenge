#include <bits/stdc++.h> 
using namespace std;
int atoi(string str) {
    // Write your code here.
    bool app = false;
    int ans = 0;
    int n = str.size();
    for(int i = 0; i<n; i++){
        if(str[i]>='0' && str[i]<='9'){
            ans = ans*10 + str[i]-'0';
        }
        if(str[i] == '-') app = true;
    }
    if(app){
        ans = 0-ans;
    }
    return ans;
}