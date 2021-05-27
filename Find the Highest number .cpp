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

// Alternative Solution


class Solution {
public:
    int findPeakElement(vector<int>& a) 
    {
       int n= a.size();
       int low=0,high= n-1;
       
       while(low<=high){
           
           int mid= (low+high)/2;
           
           if(a[mid]>a[mid+1] && a[mid]>a[mid-1]){
               return a[mid];
           }if(a[mid]<a[mid+1]){
               low = mid+1;
           }else{
               high = mid-1;
           }
           
       }
    }
};

// Alternative Solution

class Solution {
public:
    int findPeakElement(vector<int>& a) 
    {
        int l=0;
        int r=a.size()-1;
        while(l<r){
            int mid=(l+r)/2;
            if(a[mid]>a[mid+1])r=mid;
            else l=mid+1;
        }
        return a[l];
    }
    
    
