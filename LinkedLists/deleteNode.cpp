int length(Node *head) {
   
    int count=0;
    while(head)
    {
        count++;
        head=head->next;
    }
    return count;
}
Node* deleteNode(Node *head, int i) {
    if(head == NULL){
        return head;
    }
    if(i == 0){
        return head->next;
    }
    
    if(length(head) <= i) return head;
    int count = 0;
    Node *temp = head;
    while(count < i-1){
        temp = temp->next;
        count++;
    }
    Node *next1=temp-> next;
    temp->next = next1->next;
	delete next1;
    return head;
    
    
}   