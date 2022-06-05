Node *reverseLinkedListRec(Node *head)

{
    //write your recursive code here
  if(head==NULL || head ->next ==NULL)
      return head;
   
	Node* smallAns = reverseLinkedListRec(head->next);
    head->next->next = head;
    head->next=NULL;
    return smallAns;
                                         
}