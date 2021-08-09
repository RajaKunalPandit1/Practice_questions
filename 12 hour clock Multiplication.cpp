Output Status:
Problem Solved Successfully 
You get marks only for the first correct submission if you solve the problem without viewing the full solution.
Total Time Taken:
0.0/3.4
Correct Submission Count:
2
Attempts No.:
4

class Solution {
  public:
    int mulClock(int num1, int num2) {
        
    return ((num1*num2)%12);
       
        
        
    }
};

// Another Solution 

class Solution {
  public:
    int mulClock(int num1, int num2) {
        
        int pdt = num1*num2;    // Product of the Numbers
        int ans = pdt%12;      // Remainder of the Product when divided by 12.
        
        return ans;
    }
};
