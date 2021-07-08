class Solution
{
    public:
    //Function to perform case-specific sorting of strings.
    string caseSort(string str, int n)
    {
    
    
        
        string res;
        vector<char> strlower;
        vector<char> strupper;
        
        for(int i=0;i<n;i++){
            if(isupper(str[i])){
                strupper.push_back(str[i]);
            }else{
                strlower.push_back(str[i]);
            }
        }
        
        sort(strupper.begin(),strupper.end());
        sort(strlower.begin(),strlower.end());
        
        int re1=0,re2=0;
        
      
        for(int i=0;i<n;i++){
            if(isupper(str[i])){
                res.push_back(strupper[re1]);
                re1++;
            }else{
                 res.push_back(strlower[re2]);
                re2++;
            }
        }
        
        return res;
        
        
    }
};

// Another Solution

class Solution
{
    public:
    //Function to perform case-specific sorting of strings.
    string caseSort(string str, int n)
    {
        vector<char> vecA,veca;
        
        //storing uppercase and lowercase characters in two separate lists.
		for(int i=0;i<n;i++)
		{
			if(int(str[i])<97)
			vecA.push_back(str[i]);
			else
			veca.push_back(str[i]);
		}
		
		//sorting both the lists.
		sort(vecA.begin(),vecA.end());
		sort(veca.begin(),veca.end());
		
		int vcA=0,vca=0;
		string answer="";
		
		//iterating over the given string.
		for(int i=0;i<n;i++)
		{
		    //if current character is in uppercase then we pick character from  
		    //the list containing uppercase characters and add it to result.
			if(int(str[i])<97)
			answer+=vecA[vcA++];
			
			//else we pick the character from the sorted list  
		    //containing lowercase characters and add it to result.
			else
			answer+=veca[vca++];
		}
		//returning the result.
		return answer;
    }
};
