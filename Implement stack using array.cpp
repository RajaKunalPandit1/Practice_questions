Output Status:
Problem Solved Successfully 
Total Points Scored:
1/1
Total Time Taken:
0.0/1.1
Your Accuracy:
100%
Attempts No.:
1
  
  
//Function to push an integer into the stack.
void MyStack :: push(int x)
{
    top++;
    arr[top] = x;
    
}

//Function to remove an item from top of the stack.
int MyStack :: pop()
{
    if(top == -1){
        return -1;
    }else{
        int res = arr[top];
    top--;
    return res;
    }
    
}

// Another Solution 


void MyStack :: push(int a)
{
    //increasing the top pointer and pushing the integer at that position.
    top++;
    arr[top]=a;
}

//Function to remove an item from top of the stack.
int MyStack :: pop()
{
    
    //if stack is empty, we return -1 else we return the top element.
    if(top==-1)
        return -1;
    int x=arr[top];
    top--;
    
    return x;
}
