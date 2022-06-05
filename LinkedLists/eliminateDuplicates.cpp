/****************************************************************
 
    Following is the class structure of the Node class:

        class Node
        {
        public:
	        int data;
	        Node *next;
	        Node(int data)
	        {
		        this->data = data;
		        this->next = NULL;
	        }
        };

*****************************************************************/

Node* removeDuplicates(Node* head)
{
    if(head == NULL){
        return head;
    }
    Node *p=head->next,*q=head;
    while(p)
    {
       if(p->data==q->data)
       {
           q->next=p->next;
           Node *t=p;
           p=p->next;
          delete t;
       }
      else{
        q=q->next;
        p=p->next;
        }
    }
    return head;
}