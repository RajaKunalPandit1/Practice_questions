class Solution {
public:
    int findPeakElement(vector<int>& arr) 
    {
      int n=arr.size();
      int low=0,high=n-1;
      while(low<=high){
          
          int mid=(low+high)/2;
          if(arr[mid]>arr[mid-1]&& arr[mid]>arr[mid+1]){
              return arr[mid];
          }else if(arr[mid]<arr[mid-1] && arr[mid]>arr[mid+1]){
              high=high-1;
          }else if(arr[mid]>arr[mid-1] && arr[mid]<arr[mid+1]){
              low=low+1;
          }
          
      }
      
      
    }
};
