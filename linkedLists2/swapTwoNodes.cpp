Node *swapNodes(Node *head, int i, int j)

{
    if(i==j){
        return head;
    }
    if(i>j){
        int a=i;
        i=j;
        j=a;
    }
    Node* p1=NULL;
    Node* p2=NULL;
    Node* temp1=head;
    Node* temp2=head;
    if(i==0){
        for(int a=1;a<=j;a++){
            p2=temp2;
            temp2=temp2->next;
        }
        if(j==1){
            Node *a=temp2->next;
            temp2->next=temp1;
            temp1->next=a;
            return temp2;
        }
        Node *a=temp1->next;
        temp1->next=temp2->next;
        p2->next=temp1;
        temp2->next=a;
        return temp2;
    }   
    for(int a=1;a<=i;a++){
        p1=temp1;
        temp1=temp1->next;
    }
    for(int a=1;a<=j;a++){
        p2=temp2;
        temp2=temp2->next;
    }
    p1->next=temp2;
    p2->next=temp1;
    Node *a=temp1->next;
    temp1->next=temp2->next;
    temp2->next=a;
    return head;
}