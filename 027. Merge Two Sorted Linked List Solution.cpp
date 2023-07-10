Node<int>* sortTwoLists(Node<int>* list1, Node<int>* list2)
{
    Node<int> * ans = NULL;
        Node<int> * head = NULL;
        while(list1 && list2){
            int val ;
            if(list1->data < list2->data){
                val = list1->data;
                list1 = list1->next;
            }
            else{
                val = list2->data;
                list2 = list2->next;
            }
            if(head){
                ans->next = new Node<int>(val);
                ans = ans->next;
            }
            else{
                ans = new Node<int>(val);
                head = ans;
            }

        }
        if(list1){
            if(head){
                ans->next = list1;
                ans = ans->next;
            }
            else{
                ans = list1;
                head = ans;
            }
        }
        if(list2){
            if(head){
                ans->next = list2;
                ans = ans->next;
            }
            else{
                ans = list2;
                head = ans;
            }
        }
        return head;
}
