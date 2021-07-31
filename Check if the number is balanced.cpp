Output Status:

Problem Solved Successfully 
Total Points Scored:
2/2
Total Time Taken:
0.0/1.1
Your Accuracy:
50%
Attempts No.:
2

class Solution{
public:	
	bool balancedNumber(string N)
	{
	    int n = N.length();
	    
	    int sum1=0;
	    int sum2=0;
	    
	    for(int i = 0; i < n/2; i++)
        sum1 += N[i] - '0';
        
        for(int i = n/2+1; i < n; i++)
        sum2 += N[i] - '0';
	    
	    
	    if(sum1 == sum2)
	        return true;
	    
	    return false;
	}
};

// Another Solution

class Solution{
public:
	bool balancedNumber(string N)
	{
	    int LHS_sum = 0;
	    int RHS_sum = 0;
	    int middle = N[ N.length()/2 ] - '0';

	    if(middle >= 0 && middle <= 9)
	    {
	        for(int i=0; i<N.length()/2; i++)
	            LHS_sum += (N[i]-'0');

	        for(int i=(N.length()/2)+1; i<N.length(); i++)
	            RHS_sum += (N[i]-'0');

	        if(LHS_sum == RHS_sum)
	            return true;
	        
	        else
	            return false;
	    }
	    else
	        return false;
	}
};
