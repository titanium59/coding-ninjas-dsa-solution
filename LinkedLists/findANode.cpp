
int findNode(Node *head, int n){
    Node *temp = head;
    int count = 0;
    while(temp != NULL){
        if (temp -> data == n){
            return count;
        }
        count++;
        temp = temp -> next;
    }
    return -1;
}