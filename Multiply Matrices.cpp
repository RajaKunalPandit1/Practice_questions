Output Status:
Problem Solved Successfully 
Total Points Scored:
0/0
Total Time Taken:
0.0/1.0
Your Accuracy:
100%
Attempts No.:
1


void multiply(int A[][100], int B[][100], int C[][100], int N)
{
      for(int i=0;i<N;i++){
          for(int j=0;j<N;j++){
              int res =0;
              for(int k=0;k<N;k++){
                  res+= A[i][k] * B[k][j];
              }
              C[i][j] = res;
          }
      }
}
