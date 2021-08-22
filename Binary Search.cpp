Output Status:

Problem Solved Successfully 
Total Points Scored:
1/1
Total Time Taken:
0.1/1.4
Your Accuracy:
100%
Attempts No.:
1
  
  class Solution{
public:
    int binarysearch(int arr[], int n, int k){
       
       int low= 0,high = n-1;
       
       while(low<=high){
           int mid = (low+high)/2;
           
           if(arr[mid] == k){
               return mid;
           }else if(arr[mid]>k){
               high =mid-1;
           }else{
               low= mid+1;
           }
           
       }
       return -1;
       
       
    }
};
