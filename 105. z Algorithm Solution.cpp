#include<bits/stdc++.h>
using namespace std;
int zAlgorithm(string s, string p, int n, int m)
{
	// Write your code here
	int ans = 0;
	if(m>n) return ans;
	string cur = s.substr(0,m);
	if(cur == p) ans++;
	for(int i = m; i<n; i++){
		cur.erase(cur.begin());
		cur.push_back(s[i]);
		if(cur == p) ans++;
	}
	return ans;
}