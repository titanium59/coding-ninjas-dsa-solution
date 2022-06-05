Node* appendLastNToFirst(Node* head,int k)
{
    if(head==NULL) return head;
    Node* temp = head;
    int count = 0,l=0;
    while(temp->next != NULL){
        temp=temp->next;
        l++;
    }
    temp->next = head;
    Node* newHead ;
    Node* temp2=head;
    while (count < l-k){
        temp2=temp2->next;
        count++;
    }
    newHead = temp2->next;
    temp2->next=NULL;
    return newHead;   
}