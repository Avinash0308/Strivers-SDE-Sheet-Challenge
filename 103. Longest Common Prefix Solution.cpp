#include<bits/stdc++.h>
using namespace std;
string longestCommonPrefix(vector<string> &arr, int n)
{
    // Write your code here
    if(arr.size() == 1) return arr[0];
    int len = 0;
    int firn = arr[0].length();
    int pos = 1;
    for(int i = 0; i<firn && pos; i++){
        char ele = arr[0][i];
        for(int j = 1; j<n && pos; j++){
            if(len >= arr[j].length()){
                pos = 0;
            }
            else if(ele != arr[j][len]){
                pos = 0;
            }
        }
        if(pos){
            len++;
        }
    }
    return arr[0].substr(0,len);
}