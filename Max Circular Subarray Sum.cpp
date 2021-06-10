class Solution{
    public:
    // arr: input array
    // num: size of array
    //Function to find maximum circular subarray sum.
    int circularSubarraySum(int arr[], int num){
        
        if (num == 1)
return arr[0];
int min_sum = INT_MAX;
int sum = 0;
int total = 0;
for (int i = 0; i < num; i++) {
sum += arr[i];
if (sum < min_sum)
min_sum = sum;

if (sum > 0)
sum = 0;
total += arr[i];
}
int neg_num = 0;
int max_neg = arr[0];
int max_sum = INT_MIN;
sum = 0;
for (int i = 0; i < num; i++) {
sum += arr[i];
if (sum > max_sum)
max_sum = sum;

if (sum < 0)
sum = 0;
if (arr[i] < 0)
neg_num++;
max_neg = max(max_neg, arr[i]);

}
if (num == neg_num)
return max_neg;
return max(max_sum, (total - min_sum));
        
    }
};

// Another Approach

class Solution{
    public:
    //Function to find maximum circular subarray sum.
    int circularSubarraySum(int a[], int n) 
    { 
        bool flag  = false;
        int count =0;int maxx = INT_MIN;
        for(int i = 0; i < n; i++)
        {
            //Storing the maximum element in the array.
            if(a[i] > maxx)
              maxx = a[i];
            //Counting total number of negative numbers in the array.  
            if(a[i] < 0)
              count++;
        }
        if(count == n)
          return maxx;
        
    	//Case 1:We get the maximum sum using standard Kadane's algorithm. 
    	int max_kadane = kadane(a, n); 
    	
    	//Case 2:We now find the maximum sum that includes corner elements. 
    	int max_wrap = 0, i; 
    	for (i = 0; i < n; i++) 
    	{ 
    	        //Calculating total sum of array elements.
    			max_wrap += a[i]; 
    			//Inverting the sign of array elements.
    			a[i] = -a[i];  
    	} 
    	
    	//Maximum sum with corner elements will be: 
    	//Total sum of array elements-(-max subarray sum after changing 
    	//sign of array elements). 
    	max_wrap = max_wrap + kadane(a, n); 
    	
    	//The maximum circular subarray sum will be maximum of two sums. 
    	return (max_wrap > max_kadane)? max_wrap: max_kadane; 
    } 
    
    //Standard Kadane's algorithm to find maximum subarray sum.
    int kadane(int a[], int n) 
    { 
    	int max_so_far = 0, max_ending_here = 0; 
    	int i; 
    	for (i = 0; i < n; i++) 
    	{ 
    	    //Storing max sum till current index.
    		max_ending_here = max_ending_here + a[i]; 
    		//If max sum till current index is negative, we update it to 0.
    		if (max_ending_here < 0) 
    			max_ending_here = 0; 
    	    //Storing the max sum so far.
    		if (max_so_far < max_ending_here) 
    			max_so_far = max_ending_here; 
    	} 
    	return max_so_far; 
    } 
};
