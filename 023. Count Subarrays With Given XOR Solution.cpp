#include <bits/stdc++.h> 
#include <bits/stdc++.h> 
int subarraysXor(vector<int> &arr, int x)
{
    long long int count = 0;
    long long int val = 0;
    map<long long int,long long int> m;
    m[0]++;
    for(long long int i = 0; i<arr.size(); i++){
        val ^= arr[i];
        long long int r = val ^ x;
        count += m[r];
        m[val]++;
    }
    return count;
}
