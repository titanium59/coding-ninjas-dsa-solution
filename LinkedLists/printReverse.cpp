void printReverse(Node *head)
{
    //write your code here
    if(head==NULL)
        return;
    printReverse(head->next);
    cout<<head->data<<" ";
}