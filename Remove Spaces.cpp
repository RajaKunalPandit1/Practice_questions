Output Status:
Problem Solved Successfully 
Total Points Scored:
0/0
Total Time Taken:
0.0/3.4
Your Accuracy:
100%
Attempts No.:
2


class Solution
{
  public:
    string modify (string s)
    {
        int itr=0;
        int n = s.length();
        int i=0;
       while (i < n)
    {
        if (s[i] != ' ') s[itr++] = s[i];
        i++;
    }
    
    return s.substr (0, itr);
        
    }
};

// Another Solution 

class Solution
{
  public:
    string modify (string s)
    {
        int n = s.length();
        string str;
        
        for(int i=0;i<n;i++){
            if(s[i]!= ' '){
                str+= s[i];
            }
        }
        return str;
        
    }
};
