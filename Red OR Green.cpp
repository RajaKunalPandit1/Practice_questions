Output Status:
Problem Solved Successfully 
Total Points Scored:
1/1
Total Time Taken:
0.3/1.5
Your Accuracy:
100%
Attempts No.:
1
  
  class Solution {
  public:
       int RedOrGreen(int n,string S) {
          
          int countr= 0,countg =0;
          for(int i=0;i<n;i++){
              if(S[i] == 'R'){
                  countr++;
              }else{
                  countg++;
              }
          }
          
          return min(countg,countr);
    }
};


// Another Solution 

class Solution {
  public:
       int RedOrGreen(int N,string S) {
           int Red=0,Green=0;
           for(int i=0;i<N;i++){
               if(S[i]=='R')
                Red++;
               else
                Green++;
           }
           return min(Red,Green);
    }
};
