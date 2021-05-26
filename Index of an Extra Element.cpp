class Solution{
  public:
    int findExtra(int a[], int b[], int n) {
        int index = n;
        int low=0,high = n-1;
        // int mid;
        while(low<=high){
             int mid= (low+high)/2;
            if(a[mid] == b[mid]){
                low = mid+1;
            }else {
                index = mid;
                high = mid-1;
            }
            
        }
        return index;
    }
};

// Another Solution

class Solution{
  public:
    int findExtra(int arr1[],  int arr2[], int n) 
    { 
        // Initialize result 
        int index = n-1;  
      
        // left and right are end  
        // points denoting the current range. 
        int left = 0, right = n - 2; 
        while (left <= right) 
        { 
            int mid = (left + right) / 2; 
      
            // If middle element is same  
            // of both arrays, it means  
            // that extra element is after  
            // mid so we update left to mid+1 
            if (arr2[mid] == arr1[mid]) 
                left = mid + 1; 
      
            // If middle element is different  
            // of the arrays, it means that  
            // the index we are searching for  
            // is either mid, or before mid.  
            // Hence we update right to mid-1. 
            else
            { 
                index = mid; 
                right = mid - 1; 
            } 
        } 
      
        // when right is greater than  
        // left our search is complete. 
        return index; 
    } 
};
