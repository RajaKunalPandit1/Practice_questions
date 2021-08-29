Output Status:
Problem Solved Successfully 
Total Points Scored:
1/1
Total Time Taken:
0.3/6.1
Your Accuracy:
50%
Attempts No.:
2
  
  
  string reverseString(string s)
{
    string res;
    
    int n = s.length();
    int count[256] = {0};
    for(int i=n-1;i>=0;i--){
        if(s[i]!= ' ' && count[s[i]] != -1){
            res+= s[i];
            count[s[i]] = -1;
        }else{
            continue;
        }
    }
    return res;
    
}

// Another Solution 

string reverseString(string s)
{
    // creating bool array for hashing
    bool arr[26];
    // initialising bool array.
    for(int i = 0;i<26;i++)
        arr[i] = false;
        
    string res="";
    // traversing string from left to right
    // skipping spaces and repeated characters.
    for(int i = s.length() - 1 ; i>=0; i--)
        {
            if(s[i]!=' ' && arr[ s[i]- 'A' ]==false )
                {
                   res+=s[i];
                    arr[ s[i]- 'A' ] = true;
                }
                
        }
    return res;    
}


