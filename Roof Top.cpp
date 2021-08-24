Output Status:
Problem Solved Successfully 
Total Points Scored:
2/2
Total Time Taken:
0.2/1.3
Your Accuracy:
100%
Attempts No.:
1

class Solution
{
    public:
    //Function to find maximum number of consecutive steps 
    //to gain an increase in altitude with each step.
    int maxStep(int arr[], int n)
    {
        int res=0,cnt=0;
       for(int i=1;i<n;i++){
           if(arr[i]>arr[i-1]){
               cnt++;
               res = max(res,cnt);
           }else{
               cnt=0;
           }
       }
       return res;
    }
};

// Another Solution 


class Solution
{
    public:
    //Function to find maximum number of consecutive steps 
    //to gain an increase in altitude with each step.
    int maxStep(int a[], int n)
    {
        int c=0;
        int m=0;
        
        //iterating over the array elements from index 1(2nd element).
        for(int i=1;i<n;i++)
        {
            //if current element is greater than previous element, we gain an
            //increase in altitude so we increment the counter.
            if(a[i]>a[i-1])
                c++;
            
            //else we have to compare the counter with max value stored.
            else
            {
                //updating the max value and making the counter 0 again.
                m = max(c,m);
                c = 0;
            }
        }
        m=max(c,m);
        
        //returning the maximum value.
        return m;
    }
};
