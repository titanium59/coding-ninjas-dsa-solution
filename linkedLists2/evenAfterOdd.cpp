Node* evenAfterOdd(Node* head){
    Node* evenNodeHead = NULL;
    Node* otail = NULL;
    Node* etail=NULL;
    Node* oddNodeHead =NULL;
    Node* temp = head;
    while(temp){
        if(temp->data % 2 ==0){
            if(evenNodeHead == NULL) {
                evenNodeHead=temp;
                etail=temp;
            }
            else{
            	etail->next = temp;
            	etail = etail->next;
            }
        }
        else{
            if(oddNodeHead == NULL) {
                oddNodeHead=temp;
                otail=temp;
            }
            else{
            	otail->next = temp;
            	otail = otail->next;
            }
        }
        temp = temp->next;
    }
    if(oddNodeHead == NULL) return evenNodeHead;
    else otail->next = evenNodeHead;
    if(evenNodeHead != NULL) etail->next = NULL;
    return oddNodeHead;
}