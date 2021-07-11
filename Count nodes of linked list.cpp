struct Node
{
    int data;
    Node* next;
    Node(int x) {  data = x;  next = NULL; }
}; */

class Solution
{
    public:
    //Function to count nodes of a linked list.
    int getCount(struct Node* head){
    
      int res=0;
      Node *curr = head;
      
      while(curr!=NULL){
          res++;
          curr= curr->next;
      }
      
      return res;
    
    }
};

// Another Solution

class Solution
{
    public:
    //Function to count nodes of a linked list.
    int getCount(struct Node* head)
    {
        int count = 0;  
        
        //using a pointer for the linked list.
        struct Node* current = head; 
        
        //using a loop to count nodes until we get null in link part of node.
        while (current != NULL)
        {
            //updating counter.
            count++;
            
            //updating pointer to the next node.
            current = current->next;
        }
        
        //returning the number of nodes.
        return count;
    }
};
