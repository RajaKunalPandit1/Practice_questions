#include <iostream>
#include <cstddef>
using namespace std;	
class Node
{
    public:
        int data;
        Node *next;
        Node(int d){
            data=d;
            next=NULL;
        }
};
class Solution{
    public:

      Node* insert(Node *head,int data)
      {
         // Complete this method here
    if(head == NULL)
        return new Node( data);
    else if(head->next == NULL){
            head->next = new Node(data);
        }
    else{
        insert(head->next,data);
    }


        return head;
      }

      void display(Node *head)
