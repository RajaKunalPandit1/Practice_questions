Problem Solved Successfully 
Total Points Scored:
1/1
Total Time Taken:
0.8/2.4
Your Accuracy:
100%
Attempts No.:
1

  class Solution{
  public:
    void rearrangeArray(int arr[], int n) {
        
        int temp[n];
        sort(arr,arr+n);
        
        int low=0,high=n-1;
        
        int i=0;
        while(low<=high){
            temp[i] = arr[low];
            i++;low++;
            temp[i] = arr[high];
            i++;high--;
        }
        for(int j=0;j<n;j++){
            arr[j] = temp[j];
        }
        
    }
};

// Another SOlution

class Solution{
  public:
    
    // Function which arrange the array.
    void rearrangeArray(int arr[], int n) {
        // Sorting the array elements
        sort(arr, arr + n);
    
        int tempArr[n]; // To store modified array
    
        // Adding numbers from sorted array to
        // new array accordingly
        int tempArrIndex = 0;
    
        // Traverse from begin and end simultaneously
        int i = 0, j = n - 1;
        while (i < j) {
            tempArr[tempArrIndex++] = arr[i++];
            tempArr[tempArrIndex++] = arr[j--];
        }
        if (i == j) {
            tempArr[tempArrIndex] = arr[i];
        }
    
        // Modifying original array
        for (int i = 0; i < n; i++)
            arr[i] = tempArr[i];
    }
};
