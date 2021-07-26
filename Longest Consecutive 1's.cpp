Output Status:
Problem Solved Successfully 
Total Points Scored:
2/2
Total Time Taken:
0.2/1.2
Your Accuracy:
100%
Attempts No.:
1
  
  cout<< " ============================================================== " << endl;


class Solution
{
    public:
    int maxConsecutiveOnes(int n)
    {
        int count = 0;
        int res =0;
        while(n!=0){
            n=  n&(n<<1);
            res++;
        }
        return res;
    }
};

class Solution
{
    public:
    //Function to calculate the longest consecutive ones
    int maxConsecutiveOnes(int N)
    {
     
        int count = 0;
     
      //We use a loop to perform AND operation on N and N<<1 and everytime the 
      //trailing 1 from every sequence of consecutive 1s is removed.
      //Loop continues till N is reduced to 0.
       while (N!=0)
        {
           //Assigning result of AND operation to N
            N = (N & (N << 1));
           //increement of counter variable.
            count++;
        }
        //returning the answer.
        return count;
    }
};
