Output Status:
Problem Solved Successfully 
Total Points Scored:
2/2
Total Time Taken:
0.0/1.1
Your Accuracy:
100%
Attempts No.:
1

class Solution{
public:
	string printMinIndexChar(string S, string patt)
	{
	    int n = S.length();
	    for(int i=0;i<n;i++){
	        string str;
	        if(patt.find(S[i])!= string::npos){
	            str += S[i];
	            return str;
	        }
	    }
	    return "$";
	}
};

// Another Solution

class Solution{
      public:
	string printMinIndexChar(string str, string patt)
	{
	    vector<int>hash(26,0);
	    for(auto i: patt)hash[i-'a']++;
	    string ans = "";
	    for(auto i: str){
	        if(hash[i-'a']){
	            ans += i;
	            return ans;
	        }
	    }
	    return "$";
	}
};


// Another Solution 


string printMinIndexChar(string str, string pat)
{
	int hstr[256];
	fill(hstr, hstr+256, -1);
	
	for(int i = 0; i < str.size(); i++)
	{
	    if(hstr[str[i]] == -1)
	    {
	        hstr[str[i]] = i;
	    }
	}
	
	int res = INT_MAX;
	for(int i = 0; i < pat.size(); i++)
	{
	    if(hstr[pat[i]] != -1)
	    {
	        res = min(res, hstr[pat[i]]);
	    }
	}
	
	string resStr;
	if(res == INT_MAX)
	{
	    resStr = '$';
	}
	else
	{
	    resStr = str[res];
	}
	
	return resStr;
