Output Status:
Problem Solved Successfully 
Total Points Scored:
2/2
Total Time Taken:
0.1/2.2
Your Accuracy:
100%
Attempts No.:
1

  
  class Solution{
public:
    int isPossible(int n, int arr[], int k){
        
        unordered_map<int,int> m;
        
        for(int i=0;i<n;i++){
            m[arr[i]]++;
        }
        
        for(auto x:m){
            if(x.second>2*k){
                return 0;
            }
        }
        
        return 1;
        
    }
};




