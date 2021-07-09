class Solution
{
    public:
    //Function to count the number of substrings that start and end with 1.
    long binarySubstring(int n, string a){
        
        int count = 0;
        for(int i=0;i<a.length();i++){
            if(a[i]=='1'){
                count++;
            }
        }
        
        int res = ((count*(count-1))/2);
        
        return res;
        
    }

};

// Another Solution 

class Solution
{
    public:
    //Function to count the number of substrings that start and end with 1.
    long binarySubstring(int n, string a)
    {
        int count = 0;
        for(int i=0;i<n;i++)
        {
            //counting number of 1's in the string.
            if(a[i]=='1')
                count++;
        }
        //returning count of possible pairs among total number of 1's.
        return (count*(count-1))/2;
        
    }
};
