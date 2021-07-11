/*structure of a node of the linked list is as
struct Node
{
	int data;
	struct Node* next;
	
	Node(int x){
	    data = x;
	    next = NULL;
	}
	
};
*/
// Function should return 0 is length is even else return 1
int isLengthEvenOrOdd(struct Node* head)
{
    int res=0;
    
    Node *curr = head;
    
    while(curr!=NULL){
        res++;
        curr = curr->next;
    }
    
   return res%2;
    
    
}

// Another Solution

int isLengthEvenOrOdd(Node* head) {
    int index = 0;
    
    while(head != NULL) {
        index++;
        head = head->next;
    }
    
    return index%2;
}
