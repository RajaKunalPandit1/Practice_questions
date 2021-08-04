Output Status:
Problem Solved Successfully 
Total Points Scored:
2/2
Total Time Taken:
0.8/2.0
Your Accuracy:
50%
Attempts No.:
2
  
class Solution{  
    public:
    // your task is to complete this function
    int maxDistance(int arr[], int n)
    {
            int res=0;
            unordered_map <int,int> m;
            for(int i=0;i<n;i++){
                m[arr[i]] = i;
            }
            
            for(int i=0;i<n;i++){
                 res = max(res,m[arr[i]]-i);
            }
            return res;
    }
};
  
  
  // Another Solution
  
  int maxDistance(int arr[], int n)
{
    unordered_map<int, vector<int="">> mp;
    
    for(int i = 0; i < n; i++)
    {
        mp[arr[i]].push_back(i);
    }
    
    int res = 0;
    
    for(auto x: mp)
    {
        int index = x.first;
        vector<int> arr(x.second);
        
        if(arr.size() >= 2)
        {
            int diff = arr[arr.size()-1] - arr[0];
            
            res = max(res, diff);
        }
    }
    return res;
}

// Another Solution 

class Solution{
    public:
        int maxDistance(int arr[], int n)
    {
        unordered_map<int, int> mp;
        int max_dist = 0;
        for (int i=0; i<n; i++)
        {
            if (mp.find(arr[i]) == mp.end())
                mp[arr[i]] = i;
            else
                max_dist = max(max_dist, i - mp[arr[i]]);
        }
        return max_dist;
    }
};
