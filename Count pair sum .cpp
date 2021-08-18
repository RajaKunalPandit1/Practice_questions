Output Status:
Problem Solved Successfully 
Total Points Scored:
1/1
Total Time Taken:
0.2/1.3
Your Accuracy:
100%
Attempts No.:
1

class Solution
{
  public:
    int countPairs(int arr1[], int arr2[],  int m, int n, int x) 
    { 
        int low=0, high = n-1;
        
        int res=0;
        while(low<m && high>=0){
            if(arr1[low]+arr2[high] == x){
                res++;
                low++;
                high--;
            }else if(arr1[low]+arr2[high]>x){
                high--;
            }else{
                low++;
            }
        }
        return res;
        
    } 
};

// Another Solution Using Hash


class Solution
{
  public:
    int countPairs(int arr1[], int arr2[],  int m, int n, int x) 
    { 
        
        unordered_set<int>s;
        int res=0;
        for(int i=0;i<n;i++){
            s.insert(arr2[i]);
        }
        
        for(int i=0;i<m;i++){
            
            if(s.find(x-arr1[i])!=s.end()){
                res++;
            }
        }
        
        return res;
        
    } 
};
