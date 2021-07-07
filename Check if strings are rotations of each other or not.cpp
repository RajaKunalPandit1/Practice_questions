class Solution
{
    public:
    //Function to check if two strings are rotations of each other or not.
    bool areRotations(string s1,string s2)
    {
        if(s1.length()!= s2.length()){
            return false;
        }
        
        return ((s1+s1).find(s2)!=string::npos);
    }
};

// Another Solution

class Solution
{
    public:
    //Function to check if two strings are rotations of each other or not.
    bool areRotations(string s1,string s2)
    {
        if(s1.length()!=s2.length())
            return false;
        else
        {
            //we concatenate first string to itself and check if other 
            //string occurs in it as substring. If yes, then it 
            //is rotated version and we return true else false.
            string concated=s1+s1;
            if(concated.find(s2)!=string::npos)
                return true;
            else
                return false;
        }
    }

};
