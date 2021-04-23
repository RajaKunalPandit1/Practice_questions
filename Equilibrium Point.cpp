class Solution{
    public:
    // Function to find equilibrium point in the array.
    // a: input array
    // n: size of array
    int equilibriumPoint(long long arr[], int n) {
          if(n==1){
              return 1;
          }
          
          int sum=0,leftsum=0,rightsum=0;
          for(int i=0;i<n;i++){
              sum = sum+arr[i];
          }
         rightsum=sum;
          for(int i=0;i<n;i++){
             rightsum=rightsum-arr[i];
              if(rightsum==leftsum){
                  return i+1;
              }else{
                  leftsum = leftsum+arr[i];
              }
          }      
        return -1;
    }

};
