class Solution{
    public:
    //Function to find minimum adjacent difference in a circular array.
    // arr[]: input array
    // n: size of array
    int minAdjDiff(int arr[], int n){    
        
        int res= abs(arr[n-1]-arr[0]);
        for(int i=1;i<n;i++){
            res = min(res,abs(arr[i]-arr[i-1]));
        }
        return res;
        
        
    }
};

// Alternative Approach

class Solution{
    public:
    //Function to find minimum adjacent difference in a circular array.
    int minAdjDiff(int arr[], int n){
        //Storing the difference of first and second element in the array.
        int res = abs(arr[0]-arr[1]); 
        //Iterating from the 2nd index to the last index.
        for(int i = 2; i < n; i++) 
        {
            //Updating the minimum value whenever we get a smaller adjacent
            //difference than previously stored value.
            res = min(res, abs(arr[i]-arr[i-1])); //finding min
        }
        //Finally checking the difference between last and first element
        //as it's a circular array.
        res = min(res, abs(arr[0]-arr[n-1])); 
        
        //returning the final answer.
        return res;
        
    }
};
