Output Status:
Problem Solved Successfully 
Total Points Scored:
1/1
Total Time Taken:
0.0/1.6
Your Accuracy:
100%
Attempts No.:
1
  
  class Solution
{
    public:
    //Function to check if a string is Isogram or not.
    bool isIsogram(string s)
    {
        int visited[256];
        fill(visited,visited+256,false);
        
        for(int i=0;i<s.length();i++){
            if(visited[s[i]]){
                return false;
                break;
            }else{
                visited[s[i]] = true;
            }
        }
        return true;
        
    }
};

// Another Solution

class Solution
{
    public:
    //Function to check if a string is Isogram or not.
    bool isIsogram(string s)
    {
        int hash[26]={0};
        
        //iterating over the string.
        for(int i=0;i<s.length();i++)
        {
            //incrementing the count of characters in hash table.
            hash[s[i]-'a']++;
            
            //if count of any character is greater than 1 then 
            //string is not isogram so we return false.
            if(hash[s[i]-'a']>1)
            return false;
        }
        //returning true if no character occurs more than once.
        return true;
    }

};
