class Solution{
    public:
    //Complete this function
    //Function to check whether there is a subarray present with 0-sum or not.
    bool subArrayExists(int arr[], int n)
    {
        int presum=0;
        unordered_set<int> s;
        for(int i=0;i<n;i++){
            
         presum+= arr[i];
            
            if(presum == 0 || arr[i]==0){
                return true;
            }
            if(s.find(presum)!=s.end()){
                return true;
            }else{
                s.insert(presum);
            }
            
            
        }
        return false;
        
       
    }
};

// Another Solution

class Solution{
  public:
    //Function to check whether there is a subarray present with 0-sum or not.
    bool subArrayExists(int arr[], int n)
    {
        //using map to store the prefix sum which has appeared already.
    	unordered_map<int,bool> sumMap;
    
    	int sum = 0;
    	//iterating over the array.
    	for (int i = 0 ; i < n ; i++)
    	{
    	    //storing prefix sum.
    		sum += arr[i];
    
    		//if prefix sum is 0 or if it is already present in map then it is
    		//repeated which means there is a subarray whose summation is 0,
    		//so we return true.
    		if (sum == 0 || sumMap[sum] == true)
    			return true;
            
            //storing true in map for every prefix sum obtained.
    		sumMap[sum] = true;
    	}
    	//returning false if we don't get any subarray with 0 sum.
    	return false;
    }

};
