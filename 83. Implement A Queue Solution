#include <bits/stdc++.h> 
class Node{
public:
    int val;
    Node* next;
    Node(int value){
        val = value;
        next = NULL;
    }
};
class Queue {
    Node* head;
    Node* cur;
public:
    Queue() {
        head = NULL;
        cur = NULL;
    }

    /*----------------- Public Functions of Queue -----------------*/

    bool isEmpty() {
        // Implement the isEmpty() function
        if(head == NULL) return true;
        else return false;
    }

    void enqueue(int data) {
        // Implement the enqueue() function
        if(head){
            cur->next = new Node(data);
            cur = cur->next;
        }
        else{
            head = new Node(data);
            cur = head;
        }
    }

    int dequeue() {
        // Implement the dequeue() function
        if(head == NULL) return -1;
        else{
            int val = head->val;
            head = head->next;
            return val;
        }
    }

    int front() {
        // Implement the front() function
        if(head == NULL) return -1;
        else return head->val;
    }
};
