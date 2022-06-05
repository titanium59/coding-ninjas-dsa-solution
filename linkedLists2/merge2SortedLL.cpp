Node *mergeTwoSortedLinkedLists(Node *head1, Node *head2) {
    if (head1 == NULL){
        return head2;
    }
    else if (head2 == NULL){
        return head1;
    }
    Node *p=NULL,*q=NULL;
    if(head1->data<head2->data)
    {
        p=head1;
        q=head1;
        head1=head1->next;
        
        
    }
    else if(head1->data>=head2->data)
    {
        p=head2;
        q=head2;
        head2=head2->next;
       
        
    }
    while(head1&&head2)
    {
       if(head1->data<head2->data)
       {
           q->next=head1;
           q=head1;
           head1=head1->next;
           q->next=NULL;
       }
    else if(head1->data>=head2->data)
       {
           q->next=head2;
           q=head2;
           head2=head2->next;
           q->next=NULL;
       }
    }
    if(head1)
        q->next=head1;
    if(head2)
        q->next=head2;
    
    
    return p;
}