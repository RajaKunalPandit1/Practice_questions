Output Status:

Problem Solved Successfully 
Total Points Scored:
1/1
Total Time Taken:
0.1/1.3
Your Accuracy:
50%
Attempts No.:
2
  
  class solution{ 
  public:
    int firstElementKTime(int a[], int n, int k)
    {
        
        unordered_map<int,int> m;
        

        int res =-1;
        
        for(int i=0;i<n;i++){
            m[a[i]]++;
            
            if(m[a[i]] == k){
                res = a[i];
                break;
            }
        }
        
        return res;
        
    }
};

// Another Solution 


class Solution{
    public:
    int firstElementKTime(int a[], int n, int k)
    {
        unordered_map<int, int> mp;
        for(int i = 0;i<n;i++){
            mp[a[i]]++;
            if(mp[a[i]] == k)
                return a[i];
        }
        return -1;
    }
};
