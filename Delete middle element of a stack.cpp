Output Status:

Problem Solved Successfully 
Total Points Scored:
2/2
Total Time Taken:
0.0/1.0
Your Accuracy:
12%
Attempts No.:
8
  
  
//   Solution Without Using Recursion
  
  class Solution
{
    public:
    //Function to delete middle element of a stack.
    void deleteMid(stack<int>&s, int sizeOfStack)
    {
        vector<int> res;
        int n = s.size();
        int idx;
        if(n%2==0){
            idx = ceil((n/2));
        }else{
            idx = (n/2);
        }
        
        int count = 0;
        for(int i=0;i<n;i++){
            res.push_back(s.top());
            s.pop();
        }
        
        res.erase(res.begin()+idx);
        
        reverse(res.begin(),res.end());
        for(int i=0;i<res.size();i++){
            s.push(res[i]);
        }
    }
};


// Solution Using Recursion

class Solution 
{
    public:
    //Function to delete middle element of a stack.
    void deleteMid_util(stack<int>&s, int sizeOfStack, int current)
    {
        //if current pointer is half of the size of stack then we 
        //are accessing the middle element of stack.
        if(current==sizeOfStack/2)
        {
            s.pop();
            return;
        }
        
        //storing the top element in a variable and popping it.
        int x = s.top();
        s.pop();
        current+=1;

        //calling the function recursively.
        deleteMid_util(s,sizeOfStack,current);
        
        //pushing the elements (except middle element) back 
        //into stack after recursion calls.
        s.push(x);
    }
    void deleteMid(stack<int>&s, int sizeOfStack)
    {
        deleteMid_util(s,sizeOfStack,0);
    }
};
