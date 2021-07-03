class Solution
{
    public:
    //Function to find the first non-repeating character in a string.
    const int CHAR = 256;
    char nonrepeatingCharacter(string s)
    {
       int visited[CHAR] ={0};
        
        for(int i=0;i<s.length();i++){
            visited[s[i]]++;
        }
        for(int i=0;i<s.length();i++){
            if(visited[s[i]]==1){
                return s[i];
            }
        }
       return '$';
       
    }

};

// Another Solution 

class Solution
{
    public:
    //Function to find the first non-repeating character in a string.
    char nonrepeatingCharacter(string S)
    {
        int h[26]={0};
    	    
        //using hash table to store count of each character.
        for(int i = 0;i<S.length();i++){
            h[S[i]-'a']++;
        }
        bool flag = false;
        
        //iterating over the string.
        for(int i = 0;i<S.length();i++)
        {
            //if count of current character is 1, we return it. 
            if(h[S[i]-'a'] == 1){
                flag=true;
                return S[i];
            }
        }
        //if there is no non-repeating character then we return '$'.
        if(!flag){
            return '$';
        }
    }
};
