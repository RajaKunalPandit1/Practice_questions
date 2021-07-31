Output Status:
Problem Solved Successfully 
Total Points Scored:
1/1
Total Time Taken:
0.0/1.1
Your Accuracy:
16%
Attempts No.:
6


class Solution
{
  public:
    char firstRep (string s)
    {

        const int CHAR = 256;
        int visited[CHAR] = {0};
        for(int i=0;i<s.length();i++){
            visited[s[i]]++;
        }
        
        for(int i=0;i<s.length();i++){
            if(visited[s[i]]>1){
                return s[i];
                break;
            }
        }
        return '#';
        
    }
};

// Another Solution

class Solution
{
  public:
    char firstRep (string s)
    {
        // stores the frequency of all the characters
        int hash[26] = {0};
    
        for (int i = 0; i < s.length (); ++i)
            hash[s[i] - 'a']++;
    
        // we traverse the string from start and return the 
        // first character with frequency greater than 1.
        for (int i = 0; i < s.length (); ++i)
        {
            if (hash[s[i] - 'a'] > 1) return s[i];
        }
    
        // if we reach here, it means that no character repeats
        return '#';
    }
    
    // Contributed By: Pranay Bansal

};
