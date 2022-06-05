int length(Node *head) {
   
    int count=0;
    while(head)
    {
        count++;
        head=head->next;
    }
    return count;
}

Node *deleteNodeRec(Node *head, int pos) {
    if(pos>=length(head)) return head;
	if(head == NULL){
        return NULL;
    }
    
    if(pos<1) return head-> next;
 
    if(pos==1){
        Node *next1 = head->next;
        head->next=next1->next;
        delete next1;
        return head;
    }
    deleteNodeRec(head->next,pos-1);
    return head;
}