#include <bits/stdc++.h> 
using namespace std;
string writeAsYouSpeak(int n) 
{
	// Write your code here.	
	string cur = "1";
	n--;
	while(n--){
		string th;
		int z = cur.size();
		for(int i = 0; i<z; i++){
			int ind = i;
			while(ind<z-1 && cur[ind+1] == cur[i]){
				ind++;
			}
			int len = ind-i+1;
			th+=(to_string(len));
			th.push_back(cur[i]);
			i = ind;
		}
		cur = th;
	}
	return cur;
}