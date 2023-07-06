#include <bits/stdc++.h> 
// Stack class.
class Stack {
    vector<int> stack;
    int size;
    int topp;
public:
    
    Stack(int capacity) {
        // Write your code here.
        size = capacity;
        stack.resize(size);
        topp = 0;
    }

    void push(int num) {
        // Write your code here.
        if(topp<size){
            stack[topp] = num;
            topp++;
        }
    }

    int pop() {
        // Write your code here.
        if(topp == 0) return -1;
        else{
            topp--;
            return stack[topp];
        }
    }
    
    int top() {
        // Write your code here.
        if(topp == 0) return -1;
        else return stack[topp-1];
    }
    
    int isEmpty() {
        // Write your code here.
        if(topp == 0) return 1;
        else return 0;
    }
    
    int isFull() {
        // Write your code here.
        if(topp == size) return 1;
        else return 0;
    }
    
};
