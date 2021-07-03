class Solution
{
    public:
    //Function to find repeated character whose first appearance is leftmost.
    const int CHAR = 256;
    int repeatedCharacter (string s) 
    { 
        bool visited[CHAR];
        fill(visited,visited+CHAR,false);
        
        
        int n = s.length();
        int res=-1;
        for(int i=n;i>=0;i--){
            if(visited[s[i]]){
                res =i;
            }else{
                visited[s[i]] = true;
            }
        }
        return res;
        
        
    } 
};

// Another Solution

class Solution
{
    public:
    //Function to find repeated character whose first appearance is leftmost.
    int repeatedCharacter (string s) 
    { 
        //using hash table to store count of each character.
        int firstIndex[256]; 
        for (int i = 0; i <256; i++) 
            firstIndex[i] = -1; 
      
        int res = INT_MAX; 
        
        //iterating over the string.
        for (int i = 0; i < s.length(); i++) 
        { 
            //if current character is not present in hash table,
            //we store its position or first appearance in hash table.
            if (firstIndex[s[i]] == -1) 
               firstIndex[s[i]] = i;
               
            //else we compare the position stored in hash table with 
            //minimum value stored earlier and store their minimum.
            else
               res = min(res, firstIndex[s[i]]); 
        } 
        //returning the result.
        return (res == INT_MAX) ? -1 : res; 
    } 
};
