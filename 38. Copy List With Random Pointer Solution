#include <bits/stdc++.h>

/*************************************************************

    Following is the LinkedListNode class structure

    template <typename T>   
    class LinkedListNode
    {
        public:
        T data;
        LinkedListNode<T> *next;
        LinkedListNode<T> *random;
        LinkedListNode(T data)
        {
            this->data = data;
            this->next = NULL;
        }
    };

*************************************************************/

LinkedListNode<int> *cloneRandomList(LinkedListNode<int> *head)
{
    if(!head) return NULL;
    LinkedListNode<int> *h = head;
    LinkedListNode<int> *ans = NULL;
    LinkedListNode<int> *cur = NULL;
    while(h){
        LinkedListNode<int> *temp;
        temp = new LinkedListNode<int>(h->data);
        temp->random = h->random;
        if(ans){
            cur->next = temp;
            cur = cur->next;
        } else {
          cur = temp;
          ans = temp;
        }
        h = h->next;
    }
    return ans;
}
