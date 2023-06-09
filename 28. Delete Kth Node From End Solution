Node* removeKthNode(Node* head, int n)
{
    // Write your code here.
    Node * h2 = head;
        Node * h1 = head;
        Node * prev = NULL;
        while(n--){
            h1 = h1->next;
        }
        while(h1 != NULL){
            prev = h2;
            h1 = h1->next;
            h2 = h2->next;
        }
        if(prev == NULL) return head->next;
        prev->next = h2->next;
        h2->next = NULL;
        return head;
}
