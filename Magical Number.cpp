int binarySearch(int arr[], int low, int high)
{
    if(low==high && arr[low]==0){
        return low;
    }
    
      while(low<=high){
          int mid= (low+high)/2;
          if(arr[mid]==mid){
              return mid;
          }else if(arr[mid]<mid){
             low = mid+1;
          }else
             high = mid-1;
      }return -1;
      
}
