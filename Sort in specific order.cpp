Class Solution
{
  public:
    void sortIt(long long arr[], long long n)
    {
        long long start = -1, end = n;
        
        while(true)
        {
            do
            {
                start++;
            } while(arr[start]%2 == 1);
            
            do
            {
                end--;
            } while(arr[end]%2 == 0);
            
            if(start >= end)
            {
                break;
            }
            
            swap(arr[start], arr[end]);
        }
        
        sort(arr, arr+start, greater<long long>());
        
        sort(arr+start, arr+n);
    }
};
