#include<bits/stdc++.h>
using namespace std;
string reverseString(string &str){
	// Write your code here.	
	int n = str.size();
	string ans;
	int i = 0;
	vector<string> words;
	while(i<n){
		while(i<n && str[i] == ' ') i++;
		string cur;
		while(i<n && str[i] != ' '){
			cur += str[i];
			i++;
		}
		if(cur.size()){
			words.push_back(cur);
		}
	}
	int s = words.size();
	for(int x = s-1; x>=0; x--){
		ans += words[x] + " ";
	}
	return ans;
}