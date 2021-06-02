class Solution{
public:
	int maxProduct(int arr[], int n) {
	    int max = 0, secondMax = 0;
	    for (int i = 0; i < n; i++) {
	        if (arr[i] >= max) {
	            secondMax = max;
	            max = arr[i];
	        } else if (arr[i] >= secondMax) {
	            secondMax = arr[i];
	        }
	    }
	    return max * secondMax;
	}
};


// Alternative Approach

class Solution{
public:

	int maxProduct(int arr[], int n) {
	    sort(arr,arr+n);
	    int res = (arr[n-1]*arr[n-2]);
	    
	    return res;
	}
};
