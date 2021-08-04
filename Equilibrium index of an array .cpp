Output Status:
Problem Solved Successfully 
Total Points Scored:
2/2
Total Time Taken:
0.1/1.3
Your Accuracy:
100%
Attempts No.:
1
  
  
  int findEquilibrium(int arr[], int n)
{
      int prefix_sum=0;
      
      for(int i=0;i<n;i++){
          prefix_sum += arr[i];
      }
            
      int r_sum=0;
      for(int i=0;i<n;i++){
           prefix_sum = prefix_sum - arr[i];
          if(r_sum == prefix_sum){
              return i;
          }else{
              r_sum += arr[i];
          }
      }
      return -1;
      
}

// Another Solution 

int findEquilibrium(int arr[], int n)
{
   int sum = 0;     
   int leftsum = 0; 
   int i;
 
  
   for (i = 0; i < n; ++i)
        sum += arr[i];
 
   for( i = 0; i < n; ++i)
   {
      sum -= arr[i]; 
 
      if(leftsum == sum)
        return i;
 
      leftsum += arr[i];
   }

    return -1;
}
