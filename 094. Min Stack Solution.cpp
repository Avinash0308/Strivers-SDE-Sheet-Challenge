#include <bits/stdc++.h> 
// Implement class for minStack.
class minStack
{
	// Write your code here.
	stack<pair<int,int>> s;
	set<pair<int,int>> m;
	int cur = 0;
	public:
		
		// Constructor
		minStack() 
		{ 
			// Write your code here.
		}
		
		// Function to add another element equal to num at the top of stack.
		void push(int num)
		{
			// Write your code here.
			s.push({num,cur});
			m.insert({num,cur});
			cur++;
		}
		
		// Function to remove the top element of the stack.
		int pop()
		{
			// Write your code here.
			if(s.empty()) return -1;
			pair<int,int> val = s.top();
			s.pop();
			m.erase(val);
			return val.first;
		}
		
		// Function to return the top element of stack if it is present. Otherwise return -1.
		int top()
		{
			// Write your code here.
			if(s.empty()) return -1;
			return s.top().first;
		}
		
		// Function to return minimum element of stack if it is present. Otherwise return -1.
		int getMin()
		{
			// Write your code here.
			if(s.empty()) return -1;
			return (*(m.begin())).first;
		}
};
