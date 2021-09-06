Output Status:

Problem Solved Successfully 
Total Points Scored:
0/0
Total Time Taken:
0.6/2.1
Your Accuracy:
100%
Attempts No.:
1

class Solution {
  public:
    int diagonalSumDifference(int N, vector<vector<int>> Grid) {
       
       int diff =0,sum1=0,sum2=0;
       for(int i=0;i<N;i++){
            sum1 += Grid[i][i];
            sum2 += Grid[i][N-i-1];
       }
       diff = abs(sum1-sum2);
       return diff;
       
    }
};

// Another Solution 


class Solution {
  public:
    int diagonalSumDifference(int N, vector<vector<int>> Grid) {
        int i, j, sum1 = 0, sum2 = 0;
        for (i = 0; i < N; i++) {
            // adding primary diagonal elements
            sum1 += Grid[i][i];
            // adding secondary diagonal elements
            sum2 += Grid[i][N - i - 1];
        }
        return abs(sum1 - sum2);
    }
};
