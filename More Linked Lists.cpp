#include <cstddef>
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
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

          Node* removeDuplicates(Node *head)
          {
            //Write your code here
            vector<int> s;
            if(head == NULL) return NULL;
            Node* n = head;
            Node* prev = head;
            while(n != NULL) {
             if(find(s.begin(),s.end(),n->data) != s.end()) 
                prev->next = n->next;
             else {
                s.push_back(n->data);
                prev = n;
             }
             n = n->next;
            }
            return head;
          }

          Node* insert(Node *head,int data)
