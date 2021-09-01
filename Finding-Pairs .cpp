Output Status:
Problem Solved Successfully 
Total Points Scored:
1/1
Total Time Taken:
0.1/1.1
Your Accuracy:
100%
Attempts No.:
1
  
  class Solution{
public:	
	
	int count_pairs(vector<char> &arr, string &s,int n,int m){
	   
	   int cnt=0;
	   int i,j;
	   for(i=0;i<n;i+=2){
	       size_t found = s.find(arr[i]);
	       if(found!= string::npos){
	           size_t found1 = s.find(arr[i+1]);
	           if(found1 != string::npos){
	               cnt++;
	           }
	       }
	   }
	   return cnt;
	   
	}

};


// Another Solution 

class Solution{
public:
	int count_pairs(vector<char> &arr, string &s,int n,int m){
	    int f[128] = {0};
	    
	    for(int i=0;i<s.size();i++){
	        f[s[i]] = 1;
	    }
	    int ans = 0;
	    for(int i=0;i<n;i+=2){
	        if(f[arr[i]] == 1 and f[arr[i+1]] == 1)
	            ans += 1;
	    }
	    
	    return ans;
	    
	}
};



