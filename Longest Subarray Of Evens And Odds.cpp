class Solution{
    public:
    //Complete this function
    //Function to find the length of longest subarray of even and odd numbers.
    int maxEvenOdd(int arr[], int n) 
    { 
          int count=1,res=1;
          for(int i=1;i<n;i++){
              if(arr[i]%2==0 && arr[i-1]%2!=0 || arr[i-1]%2==0 && arr[i]%2!=0){
                  count++;
              }else
              count=1;
          
              res = max(res,count);
              
          }
return res;
    } 
};
