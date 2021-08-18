Output Status:
Problem Solved Successfully 
Total Points Scored:
2/2
Total Time Taken:
0.4/1.5
Your Accuracy:
50%
Attempts No.:
2
  
  


class Solution{
public:
    int pairCount(int N, int A[], int B[], int C[])
    {
        unordered_set<int> s;
        
        for(int i=0;i<N;i++){
            s.insert(C[i]);
        }
        
        int res=0;
        
        for(int i=0;i<N;i++){
            if(s.find(A[i]-B[i])!=s.end()){
                res++;
            }
        }
        return res;
        
    }
};

// Another  Solution 

class Solution{
public:
    int pairCount(int N, int A[], int B[], int C[])
    {
        int count = 0;
        int hash[101][2] = {{0}};
        for(int i = 0; i < N;i++){
            if(C[i] < 0){
                int temp = -C[i];
                hash[temp][1] = 1;
            }
            else{
                hash[C[i]][0] = 1;
            }
        }
        for(int i = 0; i < N;i++){
            if(A[i] < B[i]){
                if(hash[B[i]-A[i]][1])
                    count++;
            }
            else{
                if(hash[A[i]-B[i]][0])
                    count++;
            }
        }
        return count;
    }
};




