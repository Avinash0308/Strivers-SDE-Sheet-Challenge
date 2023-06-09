LinkedListNode<int> *reverseLinkedList(LinkedListNode<int> *head) 
{
    LinkedListNode<int> * prev = NULL;
        LinkedListNode<int> * next = NULL;
        LinkedListNode<int> * h = head;
        while(h){
            next = h->next;
            h->next = prev;
            prev = h;
            h = next;
        }
        return prev;
}
