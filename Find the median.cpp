Output Status:

Problem Solved Successfully 
You get marks only for the first correct submission if you solve the problem without viewing the full solution.
Total Time Taken:
0.0/1.2
Correct Submission Count:
4
Attempts No.:
6


class Solution
{
public:
	public:
		int find_median(vector<int> v)
		{
			sort(v.begin(),v.end());
			int ans ;
			// if size is odd
			if(v.size() & 1)
				ans = v[v.size() / 2];
			// If size is even
			else
				ans = (v[v.size() / 2] + v[v.size() / 2 - 1]) / 2;
			return ans;
		}
};
  
  int find_median(vector<int> v)
		{
		    sort(v.begin(),v.end());
		    
		    int n = v.size();
		    int res =0;
		    if(n%2==0){
		        int idx = n/2;
		        res = (v[idx]+v[idx-1])/2;
		    }else{
		        int idx = n/2;
		        res = v[idx];
		    }
		    return res;
		    
		    
		}

// Another Solution 


  class Solution
{
public:
	public:
		int find_median(vector<int> v)
		{
			sort(v.begin(),v.end());
			int ans ;
			// if size is odd
			if(v.size() & 1)
				ans = v[v.size() / 2];
			// If size is even
			else
				ans = (v[v.size() / 2] + v[v.size() / 2 - 1]) / 2;
			return ans;
		}
};

