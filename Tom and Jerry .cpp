Output Status:
Problem Solved Successfully 
Total Points Scored:
2/2
Total Time Taken:
0.0/1.6
Your Accuracy:
100%
Attempts No.:
1

class Solution{
public:
    int numsGame(int N) {
        
        if(N%2==0){
            return 1;
        }else{
            return 0;
        }
        
    }
};

// Another Solution

return N%2==1?0:1;
