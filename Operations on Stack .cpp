Output Status:

Problem Solved Successfully 
Total Points Scored:
1/1
Total Time Taken:
0.0/1.0
Your Accuracy:
50%
Attempts No.:
2
  
  
  //Function to push an element into the stack.
void insert(stack<int> &s,int x)
{
    s.push(x);
}

//Function to remove top element from stack.
void remove(stack<int> &s)
{
    
    s.pop();
}

//Function to print the top element of stack.
void headOf_Stack(stack<int> &s)
{
    int x= s.top();
    cout<<x<<" "<<endl; 
}

//Function to search an element in the stack.
bool find(stack<int> s, int val)
{
    bool exists=false;
    
     while (!s.empty()) {
        if (s.top() == val) return true;
        s.pop();
    }
    
    return false;
}

// Another Solution 

//Function to push an element into the stack.
void insert(stack<int> &s,int x)
{
    s.push(x);
}

//Function to remove top element from stack.
void remove(stack<int> &s)
{
    s.pop();
}

//Function to print the top element of stack.
void headOf_Stack(stack<int> &s)
{
    int x=s.top();
    cout<<x<<" "<<endl; 
}

//Function to search an element in the stack.
bool find(stack<int> s, int val)
{
    bool exists=false;
    
    //traversing while the stack is not empty.
    while(!s.empty())       
    {
        //comparing the top element of stack with given number 
        //to be searched and popping it from stack. 
        int top=s.top();
        s.pop();
        if(top==val)        
        exists=true;
    }
    
    //if element is found, we return true else false.
    if(exists==true){
        return true;
    }
    else{
        return false;
    }
}
