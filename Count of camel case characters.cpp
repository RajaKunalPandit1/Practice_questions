Output Status:

Problem Solved Successfully 
Total Points Scored:
0/0
Total Time Taken:
0.2/1.3
Your Accuracy:
100%
Attempts No.:
1
  
  class Solution
{
  public:   
    int countCamelCase (string s)
    {
    	int n = s.length();
    	int res=0;
    	for(int i=0;i<n;i++){
    	    if(s[i]>='A' && s[i] <='Z'){
    	        res++;
    	    }
    	}
    	return res;
    }
};

// Another Solution 

class Solution
{
  public:   
    int countCamelCase (string s)
    {
    	int res = 0;
    	for (int i = 0; i < s.length (); ++i)
    		if (s[i] >= 'A' and s[i] <= 'Z')
    			res++;
    
    	return res;
    }
};
