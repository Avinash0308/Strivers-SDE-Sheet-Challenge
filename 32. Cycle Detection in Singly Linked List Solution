bool detectCycle(Node *head)
{
	//	Write your code here
    if(head == NULL) return false;
        Node * slow = head;
        Node * fast = head->next;
        while(fast != NULL && fast->next != NULL){
            if(slow == fast) return true;
            else fast = fast->next->next; slow = slow->next;
        }
        return false;
}
