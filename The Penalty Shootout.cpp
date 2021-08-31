Output Status:

Problem Solved Successfully 
Total Points Scored:
1/1
Total Time Taken:
0.0/2.2
Your Accuracy:
100%
Attempts No.:
1
  
  
  class Solution{
public:	
	
	int penaltyScore(string S)
	{
	    int res=0;
	    int n = S.length();
	    
	    for(int i=0;i<n-1;i++){
	        if(S[i] == '2' && S[i+1] == '1'){
	            res++;
	        }
	    }
	    return res;
	    
	}
};

// Another Solution 


class Solution{
public:
	int penaltyScore(string S)
	{
		int ans = 0;
	    for(int i = 1; i < S.size(); i++)
	        if(S[i]=='1' and S[i-1]=='2')
	            ans++;
		
		return ans;                
	}
   
};
