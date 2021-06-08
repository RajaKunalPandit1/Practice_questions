class Solution{
    public:
    //Function to find minimum difference between any pair of elements in an array.
    int MinimumDifference(int arr[], int n)
    {
        sort(arr,arr+n);
        int res = arr[1] - arr[0];
         for(int i=2;i<n;i++){
             
             res = min(res,(arr[i]-arr[i-1]));
             
         }
         return res;
    }
};

// Alternative Approach

class Solution{
    public:
    //Function to find minimum difference between any pair of elements in an array.
    int MinimumDifference(int arr[], int n)
    {
        //Sorting the array.
        sort(arr, arr + n);
        
        int diff = INT_MAX;
        //Iterating over the array.
        for(int i = 0; i < n - 1; i++){
            
            //We keep checking the difference between consecutive elements
            //and update the minimum difference if needed.
    	    if (arr[i+1] - arr[i] < diff) 
                diff = arr[i+1] - arr[i];
                
    	}
    	//returning the minimum difference.
        return diff;
    }
};
