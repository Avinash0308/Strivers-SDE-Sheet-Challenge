Node* findIntersection(Node *headA, Node *headB)
{
    int a = 0 , b = 0;
    Node * h1 = headA;
    Node * h2 = headB;
    while(h1){
        a++;
        h1 = h1->next;
    }
    while(h2){
        b++;
        h2 = h2->next;
    }
    h1 = headA;
    h2 = headB;
    if(a > b){
        a-=b;
        while(a--){
            h1 = h1->next;
        }
    }
    else{
        b-=a;
        while(b--){
            h2 = h2->next;
        }        
    }
    while(h1){
        if(h1 == h2){
            return h1;
        }
        h1 = h1->next;
        h2 = h2->next;
    }
    return NULL;
}
