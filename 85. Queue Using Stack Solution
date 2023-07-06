#include<bits/stdc++.h>
class Queue {
    // Define the data members(if any) here.
    stack<int> first;
    stack<int> second;
    public:
    Queue() {
        // Initialize your data structure here.
    }

    void enQueue(int val) {
        // Implement the enqueue() function.
        first.push(val);
    }

    int deQueue() {
        // Implement the dequeue() function.
        if(first.empty()) return -1;
        int n = first.size();
        for(int i = 0; i<n-1; i++){
            second.push(first.top());
            first.pop();
        }
        int val = first.top();
        first.pop();
        while(!second.empty()){
            first.push(second.top());
            second.pop();
        }
        return val;
    }

    int peek() {
        // Implement the peek() function here.
        if(first.empty()) return -1;
        int n = first.size();
        for(int i = 0; i<n; i++){
            second.push(first.top());
            first.pop();
        }
        int val = second.top();
        while(!second.empty()){
            first.push(second.top());
            second.pop();
        }
        return val;
    }

    bool isEmpty() {
        // Implement the isEmpty() function here.
        if(first.empty()) return true;
        else return false;
    }
};
