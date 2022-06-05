void printIthNode(Node *head, int i)
{
  
    Node* temp = head;
    int count =0;
    while(temp)
    {
        if(i==count)
        {
            cout<< temp->data<<endl;
            return;
        }
        
        count++;
        temp=temp->next;
    }
}