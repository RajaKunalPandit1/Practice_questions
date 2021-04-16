class Solution{
    public:
    int firstIndex(int arr[], int n) 
    {
        int low=0,high=n-1;
        while(low<=high){
            int mid = (low+high)/2;
            if(arr[mid]==1){
                if(arr[mid-1]==1){
                    high = mid-1;
                }else{
                    return mid;
                }
            }
            else
             if(arr[mid]==0){
                 low = mid+1;
             }
        }
        return -1;
        
    }
