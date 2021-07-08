class Solution{
public:	
	
	int countTriplet(int arr[], int n)
	{
	    sort(arr,arr+n);
	    int res=0;
	    for(int i=n-1;i>=2;i--){
	         int low=0,high = i-1;
	    while(low<high){
	        if(arr[low]+arr[high] == arr[i]){
	            res++;
	            low++;
	            high--;
	        }else if(arr[low]+arr[high] > arr[i]){
	            high--;
	        }else{
	            low++;
	        }
	    }     
     }
	   
	    return res;
	}
};

// Another Solution

class Solution{
public:
	int countTriplet(int arr[], int n)
	{
		sort(arr, arr + n); 
		int  ans = 0;

		for (int i = n - 1; i >= 0; i--)
		{
			int j = 0;
			int k = i - 1;
			while (j < k)
			{
				if(arr[i] == arr[j] + arr[k])
				{
					ans++;
					j++;
					k--;
				}
				else if (arr[i] > arr[j] + arr[k])
					j++;
				else
					k--;
			}
		}

		return ans;
	}
	 
};
