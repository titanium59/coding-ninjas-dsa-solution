class Queue {
	Node *head;
    Node *tail;
    int size;
    
    
   public:
    
    Queue() {
		head = NULL;
        tail = NULL;
        size = 0;
	}
	
	

	int getSize() {
		return size;
	}

    bool isEmpty() {
		if (size == 0){
            return true;
        }
        else {
            return false;
            }
	}

    void enqueue(int data) {
        Node *newNode = new Node(data);
		if(size == 0){
            head = newNode;
            tail = newNode;
        }
        else{
            tail -> next = newNode;
            tail = newNode;
        }
        size++;
	}

    int dequeue() {
        if(size==0){
            return -1;
        }
        int temp = head -> data;
        delete head;
        head = head -> next;
        size--;
        return temp;
        
        
    }

    int front() {
        if (size == 0){
            return -1;
        }
        return head -> data;
    }
};