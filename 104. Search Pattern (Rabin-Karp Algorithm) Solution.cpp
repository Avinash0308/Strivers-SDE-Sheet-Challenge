#include<bits/stdc++.h>
using namespace std;
vector<int> stringMatch(string text, string pattern) {
	// Write your code here.
	int n = text.size(), m = pattern.size();
	vector<int> ans;
	if(m>n) return ans;
	string cur = text.substr(0,m);
	if(cur == pattern){
		ans.push_back(1);
	}
	for(int i = m; i<n; i++){
		cur.erase(cur.begin());
		cur.push_back(text[i]);
		if(cur == pattern){
			ans.push_back(i-m+2);
		}
	}
	return ans;
}
