bool * detectcycle(ListNode *head )
[
  if(head==NULL){
    return false;
  }
  ListNode * slow = head,*fast = head;
  while(fast!=NULL && fast->next!=NULL){
    slow = slow->next;
    fast = fast->next->next;
    if(slow==fast){
      return true;
    }
  }
  return false;
]