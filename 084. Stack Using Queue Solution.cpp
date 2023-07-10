#include <bits/stdc++.h> 
class Stack {
	// Define the data members.
    queue<int> first;
    queue<int> second;
   public:
    Stack() {
        // Implement the Constructor.

    }

    /*----------------- Public Functions of Stack -----------------*/

    int getSize() {
        // Implement the getSize() function.
        return first.size();
    }

    bool isEmpty() {
        // Implement the isEmpty() function.
        if(first.size()) return false;
        else return true;
    }

    void push(int element) {
        // Implement the push() function.
        first.push(element);
    }

    int pop() {
        // Implement the pop() function.
        if(isEmpty()) return -1;
        int n = getSize();
        for(int i = 0; i<n-1; i++){
            second.push(first.front());
            first.pop();
        }
        int ele = first.front();
        first.pop();
        first = second;
        while(!second.empty()) second.pop();
        return ele;
    }

    int top() {
        // Implement the top() function.
        if(isEmpty()) return -1;
        int n = getSize();
        for(int i = 0; i<n-1; i++){
            second.push(first.front());
            first.pop();
        }
        int ele = first.front();
        second.push(first.front());
        first.pop();
        first = second;
        while(!second.empty()) second.pop();
        return ele;
    }
};
