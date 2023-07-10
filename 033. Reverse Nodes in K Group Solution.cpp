#include <bits/stdc++.h>

/****************************************************************

    Following is the class structure of the Node class:

        class Node
        {
        public:
	        int data;
	        Node *next;
	        Node(int data)
	        {
		        this->data = data;
		        this->next = NULL;
	        }
        };

*****************************************************************/

  Node *getListAfterReverseOperation(Node *head, int n, int b[]){
	
	Node* h = head;
	Node* res = head;
	Node* next = NULL;
	Node* prev = NULL;
	for(int i = 0; i<n && h; i++){
		if(b[i] == 0)continue;
		Node* th_prev = NULL;
		Node* cur = h;
		for(int j = 0; j<b[i] && h; j++){
			Node* n = h->next;
			h->next = th_prev;
			th_prev = h;
			h = n;
		}
		if(prev){
			prev->next = th_prev;
			cur->next = h;
			prev = cur;
		}
		else{
			cur->next = h;
			res = th_prev;
			prev = cur;
		}
	}
	return res;
}
