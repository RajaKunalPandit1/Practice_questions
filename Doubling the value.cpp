class Solution
{
    public:
    long long solve(int n, long long arr[], long long b)
    {
        for(int i=0;i<n;i++){
            if(arr[i]==b){
                b = b*2;
            }
        }return b;
    }  
};
