class Solution{
public:	
	int search(int arr[], int n){
	    int x=0;
	    for(int i=0;i<n;i++){
	        x= x^arr[i];
	    }
	    return x;
	}
};


// Alternative sol:
class Solution{
public:
	int bs(int *arr, int low, int high)
	{
	    if (low==high)
	    {
	        return arr[low];
	    }

	    // Find the middle point
	    int mid = (low + high) / 2;

	    // If mid is even and element next to mid is
	    // same as mid, then output element lies on
	    // right side, else on left side
	    if (mid%2 == 0)
	    {
	        if (arr[mid] == arr[mid+1])
	            return bs(arr, mid+2, high);
	        else
	            return bs(arr, low, mid);
	    }
	    else  // If mid is odd
	    {
	        if (arr[mid] == arr[mid-1])
	            return bs(arr, mid+1, high);
	        else
	            return bs(arr, low, mid-1);
	    }
	}
	int search(int arr[], int n){
	    return bs(arr,0,n-1);
	}
};
