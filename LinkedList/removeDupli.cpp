ListNode *deleteDupli(ListNode * head){
  ListNode * temp = head;
  while(temp!=NULL){
    if(temp->next && temp->val== temp->next->val){
      temp->next = temp->next->next;
    }else{
      temp=temp->next;
    }
  }
  return head;
}