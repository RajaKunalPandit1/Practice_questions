Output Status:
Problem Solved Successfully 
Total Points Scored:
1/1
Total Time Taken:
0.0/1.8
Your Accuracy:
100%
Attempts No.:
1
  
  class Solution
{
public:
    
    bool isunique(int n){
        
        int hash[10] = {0};
        while(n>0){
            if(hash[n%10] == 0){
                hash[n%10] = 1;
            }else{
                return false;
            }
            n = n/10;
        }
        return true;
    }
    
    vector<int> uniqueNumbers(int L,int R)
    {
        vector<int> res;
           
        for(int i=L;i<=R;i++){
            if(isunique(i)){
                res.push_back(i);
            }
        }
    
        return res;
    }
};



