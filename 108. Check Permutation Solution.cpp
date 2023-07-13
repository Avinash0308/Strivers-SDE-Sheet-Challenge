#include <bits/stdc++.h> 
using namespace std;
bool areAnagram(string &ransomNote, string &magazine){
    // Write your code here.
    int n = ransomNote.size(), m = magazine.size();
    vector<int> a(26), b(26);
        for(int i = 0; i<n; i++){
            a[ransomNote[i] - 'a']++;
        }
        for(int i = 0; i<m; i++){
            b[magazine[i] - 'a']++;
        }
        return a==b;
}