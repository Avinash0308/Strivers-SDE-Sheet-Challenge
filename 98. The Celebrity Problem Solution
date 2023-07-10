#include <bits/stdc++.h> 
/*
	This is signature of helper function 'knows'.
	You should not implement it, or speculate about its implementation.

	bool knows(int A, int B); 
	Function 'knows(A, B)' will returns "true" if the person having
	id 'A' know the person having id 'B' in the party, "false" otherwise.
*/

int findCelebrity(int n) {
 	stack<int> s;
	for(int i= 0; i<n; i++) s.push(i);
	while(s.size()>1){
		int val1 = s.top();
		s.pop();
		int val2 = s.top();
		s.pop();
		if(knows(val1,val2)) s.push(val2);
		else s.push(val1);
	}
	int pos_ans = s.top();
	s.pop();
	for(int i= 0; i<n; i++){
		if(i == pos_ans) continue;
		if(!knows(i,pos_ans)) return -1;
		if(knows(pos_ans,i)) return -1;
	}
	return pos_ans;
}
