#include <bits/stdc++.h> 
using namespace std;
int compareVersions(string a, string b) 
{
    // Write your code here
    if(a == b) return 0;
    long long int x = 0, y = 0, n = a.size(), m = b.size();
    while(x<n && y<m){
        long long int cur1 = 0;
        while(x<n && a[x] != '.'){
            cur1 = cur1*10 + int(a[x]) - 48;
            x++;
        }
        long long int cur2 = 0;
        while(y<m && b[y] != '.'){
            cur2 = cur2*10 + int(b[y]) - 48;
            y++;
        }
        if(cur1 == cur2){
            x++;
            y++;
        }
        else if(cur1>cur2) return 1;
        else return -1;
    }
    while(x<n){
        long long int cur1 = 0;
        while(x<n && a[x] != '.'){
            cur1 = cur1*10 + int(a[x]) - 48;
            x++;
        }
        if(cur1) return 1;
        x++;
    }
    while(y<m){
        long long int cur2 = 0;
        while(y<m && b[y] != '.'){
            cur2 = cur2*10 + int(b[y]) - 48;
            y++;
        }
        if(cur2) return -1;
        y++;
    }
    return 0;
}