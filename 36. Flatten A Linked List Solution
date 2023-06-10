/*
 * Definition for linked list.
 * class Node {
 *  public:
 *		int data;
 *		Node *next;
 * 		Node *child;
 *		Node() : data(0), next(nullptr), child(nullptr){};
 *		Node(int x) : data(x), next(nullptr), child(nullptr) {}
 *		Node(int x, Node *next, Node *child) : data(x), next(next), child(child) {}
 * };
 */

Node* flattenLinkedList(Node* root) 
{
	// Write your code here
	if(root == NULL || root->next == NULL){
       return root;
    }
    Node *cur = root;
    Node *tra = root->next;
    root->next = NULL;
    while(tra != NULL){
        Node* x = tra;
        Node* next = tra->next;
        tra->next = NULL;
        if(cur->data > x->data){
            cur = x;
            x = root;
            root = cur;
        }
        while(cur->child && x){
            if(cur->child->data > x->data){
                Node* c1 = cur->child;
                Node* c2 = x->child;
                cur->child = x;
                cur->child->child = c1;
                cur = cur->child;
                x = c2;
            }
            else{
                cur = cur->child;
            }
        }
        if(x){
            cur->child = x;
        }
        tra = next;
        cur = root;
    }
    root->next = NULL;
    return root;
}
