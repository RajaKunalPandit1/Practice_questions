Output Status:

Problem Solved Successfully 
Total Points Scored:
1/1
Total Time Taken:
0.1/1.1
Your Accuracy:
100%
Attempts No.:
1


/* Tree node structure  used in the program
 struct Node
 {
     int data;
     Node* left;
     Node* right;
}; */

/* Computes the number of nodes in a tree. */
int getSize(Node* node)
{
       if(node == NULL){
           return 0;
       }
       return 1+getSize(node->left) + getSize(node->right);
       
}

// Another Solution 

/* Computes the number of nodes in a tree. */
int getSize(Node* node)
{
        if(node==NULL)return 0;
        int left =getSize(node->left);
        int right =getSize(node->right);
        return left+right+1;
       
}


