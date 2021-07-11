/*
Structure of the node of the linked list is as
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
class Solution{
  public:
    // your task is to complete this function
    int countPairs(struct Node* head1, struct Node* head2, int x) {
        
        unordered_set<int> s;
       
        Node *curr = head1;
        Node *curr2 = head2;        
        while(curr2){
            s.insert(curr2->data);
            curr2 = curr2-> next;
        }
        
        int res=0; 
        while(curr){
                if(s.find( x-(curr->data))!=s.end()){
                    res++;
                }
            
            curr = curr-> next;
        }
        return res;
    }
};

// Another Solution


class Solution{
  public:
    int countPairs(struct Node* head1, struct Node* head2, int x) {
        int count = 0;
        unordered_set<int> us;
    
        while (head1 != NULL) {
            us.insert(head1->data);
            // adding all numbers in list1 to set
            head1 = head1->next;
        }
    
        while (head2 != NULL) {
            if (us.find(x - head2->data) != us.end())
                // checking whether corresponding number is there in set
                count++;
            head2 = head2->next;
        }
        return count;
    }

};
