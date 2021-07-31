Output Status:
Problem Solved Successfully 
Total Points Scored:
2/2
Total Time Taken:
0.0/1.0
Your Accuracy:
100%
Attempts No.:
1

class Solution{
public:	
		
	string removeDups(string s)
	{
	    string str;
	    int n = s.length();
	    const int CHAR = 256;
	    
	    bool visited[CHAR];
	    fill(visited,visited+CHAR,false);
	    
	    for(int i=0;i<n;i++){
	        if(visited[s[i]] == false){
	            str+= s[i];
	            visited[s[i]] = true;
	        }else{
	            continue;
	        }
	    }
	    return str;
	    
	    
	}
};

// Another Solution


class Solution{
public:	
		
	string removeDups(string S) 
	{
	    
	    int res=0;

	    int count[256];
	    fill(count,count+256,0);
	    
	    for(int i=0;i<S.size();i++){
	        if(count[S[i]]==0)
	            S[res++] = S[i];
	           
	       count[S[i]] = 1;
	        
	    }
	    
	    return S.substr(0,res);
	}
};

// Another Solution 


class Solution{
public:
	string removeDups(string s) 
	{ 
	    int j = 0;
	  
	    int fre[26] = {0};

	    for(int i = 0; i < s.size(); i++)
	    {
	    	if(fre[s[i] - 'a'] == 0)
	    		s[j++] = s[i];

	    	fre[s[i] - 'a'] = 1;
	    }
	    
	    return s.substr(0, j); 
	} 
   
};
