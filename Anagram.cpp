class Solution
{
    public:
    //Function is to check whether two strings are anagram of each other or not.
    const int CHAR = 256;
    bool isAnagram(string &a, string &b){
        
        int n= a.length();
        int m = b.length();
        
        if(n!=m){
            return false;
        }
        
        if(n==1 && m==1){
            if(a[0]==b[0]){
                return true;
            }
            return false;
        }
        
        
        int arr[CHAR] = {0};
        
        for(int i=0;i<n;i++){
            arr[a[i]]++;
            arr[b[i]]--;
        }
        for(int i=0;i<CHAR;i++){
            if(arr[i]!=0){
                return false;
            }
        }
        
        return true;
        
    }

};

// Another Solution

bool isAnagram(char c[], char d[])
{
    //an array of size 26, to store count of characters.
    int a[26] = {0};
    
    //storing count of each character in first string.
    for(int i = 0; i < strlen(d); i++){
        a[c[i]-'a']++;
    }

    //decrementing the count of characters encountered in the second string.
    for(int i = 0; i < strlen(d); i++){
        a[d[i]-'a']--;
    }

    bool flag = true;
    
    //iterating over the array in which we stored the count initially 
    //to check if count at every index is equal to 0 or not.
    //count 0 indicates that number of characters in both strings are same.
    for(int i = 0;i<26;i++)
    {
        if(a[i] != 0){
            flag = false;
            break;
        }
    }
    //returning the result.
    return flag;
}

// Another Solution

bool isAnagram(string a, string b){

// Your code here
sort(a.begin(),a.end());
sort(b.begin(),b.end());
return (a==b);
}
