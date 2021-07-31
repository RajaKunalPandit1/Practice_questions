Output Status:
Problem Solved Successfully 
Total Points Scored:
1/1
Total Time Taken:
0.0/1.1
Your Accuracy:
50%
Attempts No.:
2

  
  class Solution
{
    public:
    //Function to calculate sum of all numbers present in a string.
   int findSum(string s)
{
	    int sum = 0;
        string str = "";
        s = s + " ";
        
        for(int i = 0; i < s.length(); i++)
        {
            char ch = s[i];
            if(isdigit(ch)) 
            str += ch;
            else if(str.length() > 0)
            {sum += stoi(str);
             str = "";}
        }
        return sum;

}
};


// Another Solution 
class Solution
{
    public:
    //Function to calculate sum of all numbers present in a string.
    int findSum(string str)
    {
    	string temp = "";
    	int sum = 0;
    
    	//iterating over the string.
    	for (char ch: str)
    	{
    		//if current character is digit, we store it in a temporary string.
    		if (isdigit(ch))
    			temp += ch;
    		else
    		{
    			//incrementing final sum by number stored in temporary string.
    			sum += atoi(temp.c_str());
                //making the temporary string empty again.
    			temp = "";
    		}
    	}
        //adding any number if it's present in temporary
    	//string to final sum and returning it.
    	return sum + atoi(temp.c_str());
    }

};
