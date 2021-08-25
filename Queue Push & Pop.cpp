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
  
  queue<int>_push(int arr[],int n)
{
   queue<int>q;
   for(int i=0;i<n;i++){
       q.push(arr[i]);
   }
   return q;
}

void _pop(queue<int>s)
{
    queue<int> q1;
    q1 = s;
    
    while(q1.empty() == false){
        cout<< q1.front() << " ";
        q1.pop();
    }
    
} 


// Another Solution

//Back-end complete function Template for C++

//Back-end complete function Template for C++

queue<int>_push(int arr[],int n)
{
    queue <int>s;
    
    //adding elements in queue
    for(int i=0;i<n;i++)
    {
        s.push(arr[i]);
    }
    return s;
}

void _pop(queue<int>s)
{
    while(!s.empty())
    {
        cout<<s.front()<<" ";
        s.pop();
    }
}
