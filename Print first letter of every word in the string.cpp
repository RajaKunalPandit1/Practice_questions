Total Time Taken:
0.0/1.3
Your Accuracy:
100%
Attempts No.:
1

class Solution{
public:	
	
	string firstAlphabet(string S)
	{
	    string str;
	    str+=S[0];
	    int start = 0;
	    for(int i=0;i<S.length();i++){
	        if(S[i]== ' '){
	            str += S[i+1];
	        }
	    }
	    return str;
	}
};

// Another Solution

class Solution{
public:

	string firstAlphabet(string S)
	{
	    // Your code goes here
	    string res ="";
	    if(S[0]!=' ')
	        res+=S[0];
	    for(int i = 0;i<S.size();i++)
	        {
	            if(i!=S.length() - 1 && S[i]==' ' && S[i + 1]!=' ')
	                res+=S[i + 1];
	        }
	   return res; 
	}
	  
	 
   
