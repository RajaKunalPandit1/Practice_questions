Class Solution{
public:
   	int  minimum_difference(vector<int>nums){
   	    int n= nums.size();
   	    sort(nums.begin(),nums.end());
   	    vector <int> v;
   	    int diff=0,res=INT_MAX;
   	    for(int i=1;i<n;i++){
   	        diff= nums[i] - nums[i-1];
   	        res = min(res,diff);
   	    }
   	    return res;
   	}
 };

// Alternative Solution

class Solution{
	public:
   	int  minimum_difference(vector<int>nums){
   		sort(nums.begin(), nums.end());
   		int res = INT_MAX;
   		for(int i = 1; i < nums.size(); i++)
   			res = min(res, nums[i] - nums[i-1]);
   		return res;
   	}    
};
