Output Status:
Problem Solved Successfully 
Total Points Scored:
1/1
Total Time Taken:
0.0/2.2
Your Accuracy:
100%
Attempts No.:
1

/* _push function to insert elements of array to
   stack
*/
stack<int>_push(int arr[],int n)
{
   stack<int> s;
   
   for(int i=0;i<n;i++){
       s.push(arr[i]);
   }
   return s;
   
}

/* _pop function to print elements of the stack
   remove as well
*/
void _pop(stack<int> s)
{
    while(!s.empty()){
        cout<< s.top() << " ";
        s.pop();
    }
}
