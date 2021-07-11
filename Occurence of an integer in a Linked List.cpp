/* Node is defined as 
struct node
{
    int data;
    struct node* next;
    
    node(int x){
        data = x;
        next = NULL;
    }
}*head;
*/
class Solution
{
    public:
    int count(struct node* head, int x)
    {
           node *curr = head;
           
           int res=0;
           
           while(curr!=NULL){
               
               if(curr->data==x)
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
    int count(struct node* head, int search_for)
    {
        struct node* current = head;
        int count = 0;
        while (current != NULL)
        {
            if (current->data == search_for)
               count++;
            current = current->next;
        }
        return count;
    }

};
