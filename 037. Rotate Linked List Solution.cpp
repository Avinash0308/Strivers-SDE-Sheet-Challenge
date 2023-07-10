/**
 * Definition for singly-linked list.
 * class Node {
 * public:
 *     int data;
 *     Node *next;
 *     Node() : data(0), next(nullptr) {}
 *     Node(int x) : data(x), next(nullptr) {}
 *     Node(int x, Node *next) : data(x), next(next) {}
 * };
 */

Node *rotate(Node *head, int k) {
     if(!head || !(head->next)) return head;
        int size = 0;
        Node * h = head;
        Node * prev = NULL;
        while(h){
            size++;
            prev = h;
            h = h->next;
        }
        k %= size;
        if(k == 0) return head;
        Node * last = prev;
        prev = NULL;
        h = head;
        int t = size - k;
        while(t--){
            prev = h;
            h = h->next;
        }
        prev->next = NULL;
        last->next = head;
        return h;
}
