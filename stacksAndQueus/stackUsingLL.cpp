class Stack {
	
   public:
    Stack() {
        Node head = NULL;
        int count = 0;
        
    }

	/*----------------- Public Functions of Stack -----------------*/

    int getSize() {
        return count;
    }

    bool isEmpty() {
        if (count == 0){
            return true;
        }
        else {
            return false;
    }

    void push(int element) {
        Node *newNode = new Node(element);
        
        newNode -> next = head;
        head = newNode;
        count++
    }

    int pop() {
        if(count == 0){
            return 0;
        }
    	Node *temp = new Node(0);
        temp = head;
        head = head -> next;
        count--;
        return temp -> data;
        
    }

    int top() {
        return head -> data;
    }
};