Node *findMiddle(Node *head) {
    Node * h1 = head;
        Node * h2 = head;
        while(h2 && h2->next){
            h1 = h1->next;
            h2 = h2->next->next;
        }
        return h1;
}
