Output Status:

Problem Solved Successfully 
Total Points Scored:
0/0
Total Time Taken:
0.0/1.1
Your Accuracy:
100%
Attempts No.:
1
  


class Solution{
    public:
    string chartostr(char arr[] , int n)
    {
        string res;
        for(int i=0;i<n;i++){
            res+=arr[i];
        }
        return res;
    }
};

// Another Solution 


class Solution{
    public:
    string chartostr(char arr[] , int n)
    {
        string res;
        for(int i = 0;i<n;i++)
            res+=arr[i];
        return res;    
    }
};


