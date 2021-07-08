class Solution{
public:
    int toyCount(int N, int K, vector<int> arr)
    {
        int res=0;
        
        sort(arr.begin(),arr.end());
        
        while(res<N && K-arr[res]>=0){
                K = K- arr[res];
                res++;
            
        }
        return res;
        
    }
};

// Another Solution

class Solution
{
    public:
    int toyCount(int N, int K, vector<int> arr)
    {
        priority_queue<int, vector<int>, greater<int>> pq(arr.begin(), arr.end());
        
        int res = 0;
        
        while(!pq.empty() and K - pq.top() >= 0)
        {
            K -= pq.top();
            
            res++;
            
            pq.pop();
        }
        
        return res;
    }
};
