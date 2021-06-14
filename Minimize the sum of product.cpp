class Solution{
    public:
    long long int minValue(int arr[], int brr[], int n)
    {
       long int sum=0;
        sort(arr,arr+n);
        sort(brr,brr+n);
   for(int i=0;i<n;i++){
       sum = sum+ (arr[i]*brr[n-i-1]);
   }
        return sum;
    }
};


// Alternative Approach

class Solution{
    public:
    typedef long long int ll;
    long long int minValue(int a[], int b[], int n)
    {
        ll sum = 0;
        
        // Sort A and B so that minimum and maximum
        // value can easily be fetched.
        sort(a,a+n);
        sort(b,b+n, greater<ll>());
        
        // Multiplying minimum value of A and maximum
        // value of B
        for(int i=0;i<n;i++)
            sum += a[i]*b[i];
            
        return sum;
    }
};
