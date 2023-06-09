Node *addTwoNumbers(Node *num1, Node *num2)
{
    if(!num1) return num2;
    if(!num2) return num1;
    Node* head = num1;
    int rem = 0;
    Node* prev = NULL;
    while(num1 && num2){
        int cur = rem + num1->data + num2->data;
        num1->data = cur%10;
        rem = cur/10;
        prev = num1;
        num1 = num1->next;
        num2 = num2->next;
    }
    if(num1){
        while(rem && num1){
            int cur = num1->data + rem;
            num1->data = cur%10;
            rem = cur/10;
            prev = num1;
            num1 = num1->next;  
        }
        if(rem){
            num1 = new Node(rem%10);
            prev->next = num1;
            prev = num1;
            rem/=10;
        }
        return head;
    }
    else{
        while(num2){
            int cur = num2->data + rem;
            num1 = new Node(cur%10);
            prev->next = num1;
            prev = num1;
            rem = cur/10;
            num2 = num2->next;
        }
        if(rem){
            num1 = new Node(rem%10);
            prev->next = num1;
            prev = num1;
            rem/=10;
        }
        return head;
    }
}
