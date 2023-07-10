if(head == NULL || head->next == NULL) return true;
    ListNode * slow = head;
    ListNode * fast = head->next;
    ListNode * prev = NULL;
    ListNode * next = NULL;
    while(fast && fast->next){
        next = slow->next;
        slow->next = prev;
        prev = slow;
        slow = next;
        fast = fast->next->next;
    }
    if(fast){
        next = slow->next;
        slow->next = prev;
    }
    else{
        next = slow->next;
        slow = prev;
    }
    while(slow && next){
        if(slow->val != next->val) return false;
        slow = slow->next;
        next = next->next;
    }
    if(slow || next) return false;
    return true;
    }
