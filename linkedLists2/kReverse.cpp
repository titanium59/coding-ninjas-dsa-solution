Node *kReverse(Node *head, int k){
    if(k==0) return head;
    
    int count = 0;
    Node* currentptr=head;
    Node* prevptr = NULL;
    Node* next2 = NULL;
    while(currentptr != NULL && count < k){
        next2 = currentptr->next;
       
        currentptr->next=prevptr;
        prevptr=currentptr;
        currentptr=next2;
        count++;
    }
    if(next2 != NULL) head->next = kReverse(next2,k);
    return prevptr;

}