Node *midPoint(Node *head)
{
    if(head == NULL|| head->next==NULL)return head;
    Node* slowptr=head;
    Node* fastptr=head->next;
    
    while(fastptr != NULL && fastptr->next != NULL ){
        slowptr=slowptr->next;
        fastptr=fastptr->next->next;
    }
    return slowptr;
}