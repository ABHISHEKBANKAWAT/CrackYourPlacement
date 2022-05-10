ListNode * binarylltoInt(ListNode * head){
  ListNode * temp = head;
  int ans = 0;
  while(temp!=NULL){
    ans *= 2;
    ans += (temp->val);
    temp = temp->next;
  }
  return ans;
}