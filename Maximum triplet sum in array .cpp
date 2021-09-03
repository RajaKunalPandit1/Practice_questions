Output Status:
Problem Solved Successfully 
Total Points Scored:
1/1
Total Time Taken:
0.2/1.4
Your Accuracy:
100%
Attempts No.:
1

class Solution{
    public:
    int maxTripletSum(int arr[], int n)
    {
        int max1 = INT_MIN;
        int max2 = INT_MIN;
        int max3 = INT_MIN;
        
    	for(int i=0;i<n;i++){
    	    if(max1<arr[i]){
    	        max3 = max2;
    	        max2 = max1;
    	        max1 = arr[i];
    	    }else if(max2 <arr[i]){
    	        max3 = max2;
    	        max2 = arr[i];
    	    }else if(max3 < arr[i]){
    	        max3 = arr[i];
    	    }
    	}
    	
    	return (max1+max2+max3);
    	
    }
};

// Another Solution

class Solution{
    public:
    int maxTripletSum(int arr[], int n)
    {
    	int maxA = INT_MIN, maxB = INT_MIN, maxC = INT_MIN;
    
    	for (int i = 0; i < n; i++) {
    		if (arr[i] > maxA) {
    			maxC = maxB;
    			maxB = maxA;
    			maxA = arr[i];
    		}
    		else if (arr[i] > maxB) {
    			maxC = maxB;
    			maxB = arr[i];
    		}
    		else if (arr[i] > maxC)
    			maxC = arr[i];
    	}
        return (maxA + maxB + maxC);
    }
};
