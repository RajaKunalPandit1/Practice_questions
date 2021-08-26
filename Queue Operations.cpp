Output Status:

Problem Solved Successfully 
Total Points Scored:
2/2
Total Time Taken:
0.0/1.2
Your Accuracy:
100%
Attempts No.:
1
  
  // Helper class Solution to implement 
// insert() and findFrequency()
class Solution{
    public:
    // Function to insert element into the queue
    void insert(queue<int> &q, int k){
        q.push(k);
        
    }
    
    // Function to find frequency of an element
    // return the frequency of k
    int findFrequency(queue<int> &q, int k){
        int ans =0;
        int s = q.size();
        while(s--){
            if(q.front() == k) ans++;
            q.push(q.front());
            q.pop();
        }
        return ans;
    }
    
};

// Another Solution 

//Back-end complete function Template for C++
// Helper class Solution to implement 
// insert() and findFrequency()
class Solution{
    public:
    // Function to insert element into the queue
    void insert(queue<int> &q, int k){
        q.push(k);
    }
    
    // Function to find frequency of an element
    // return the frequency of k
    int findFrequency(queue<int> &q, int k){
        
        int frequency = 0;
        queue<int> nq;
        while(q.size())
        {
            if(q.front()==k)
            frequency+=1;
            nq.push(q.front());
            q.pop();
        }
        q = nq;
        return frequency;
    }
    
};
