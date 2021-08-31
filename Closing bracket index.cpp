Output Status:
Problem Solved Successfully 
Total Points Scored:
2/2
Total Time Taken:
0.4/1.8
Your Accuracy:
100%
Attempts No.:
1


class Solution   
  {
    public:
        int closing (string s, int pos)
        {
        	int n = s.length();
        	int res=0;
        	for(int i=pos+1;i<n;i++){
        	    if(s[i] == '['){
        	        res++;
        	    }else if(s[i] == ']'){
        	       if(res == 0){
        	       return i;
        	    }
        	        res--;
        	    }
        	    
        	}
        }
};

// Another Solution 


class Solution
{
    public:
        int closing (string s, int pos)
        {
        	int n = s.length ();
        
        	int cnt = 0;
        	for (int i = pos; i < n; ++i)
        	{
        		if (s[i] == '[') cnt++;
        		else if (s[i] == ']') cnt--;
        		if (cnt == 0)
        			return i;
        	}
        	return -1;
        }
};
