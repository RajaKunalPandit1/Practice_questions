// Under this Solution I've used Lomuto Partition
Class Solution
{
    public:
    //Function to sort an array using quick sort algorithm.
    // int partition(int arr[],int low,int high);
    void quickSort(int arr[], int low, int high)
    {
        if(low<high){
            
            int p=partition(arr,low,high);
            quickSort(arr,low,p-1);
            quickSort(arr,p+1,high);
            
            
        }
        
    }
    
    public:
    int partition (int arr[], int low, int high)
    {
       
      int i= low-1;
      for(int j=low;j<=high;j++){
          if(arr[j]<=arr[high]){
              i++;
              swap(arr[i],arr[j]);
          }
      }
      return i;
       
    }
};

// Alternative Approach using Hoare's partition


Class Solution
{
    public:
    //Function to sort an array using quick sort algorithm.
    // int partition(int arr[],int low,int high);
    void quickSort(int arr[], int low, int high)
    {
        if(low<high){
            
            int p=partition(arr,low,high);
            quickSort(arr,low,p-1);
            quickSort(arr,p+1,high);
            
            
        }
        
    }
    
    public:
    int partition (int arr[], int low, int high)
    {
       
       int pivot = arr[low];
       int i=low-1;
     
   for(int j=low;j<=high;j++){
       
       if(arr[j]<=pivot){
           i++;
           swap(arr[i],arr[j]);
       }
       
   }
   swap(arr[i],arr[low]);
   return i;
          
       
    }
};


// Alternative Approach

class Solution{
    
    public:
    //Function to swap two elements.
    void swap(int *xp, int *yp)
    {
        int temp = *xp;
        *xp = *yp;
        *yp = temp;
    }
    
    public:
    //Function to sort an array using quick sort algorithm.
    void quickSort(int arr[], int low, int high)
    {
        if (low < high)
        {
            //pi is partitioning index, arr[pi] is now at right place.
            int pi = partition(arr, low, high);
            //Separately sorting elements before and after partitioning index.
            quickSort(arr, low, pi - 1);
            quickSort(arr, pi + 1, high);
        }
    }
    
    public:
    //Function that takes last element as pivot, places the pivot element at 
    //its correct position in sorted array, and places all smaller elements
    //to left of pivot and all greater elements to right of pivot.
    int partition (int arr[], int low, int high)
    {
        //Picking the pivot.
        int pivot = arr[high];
        //Index of smaller element and indicates the right position of 
        //pivot found so far.
        int i = (low - 1); 
        for (int j = low; j <= high- 1; j++)
        {
            //If current element is smaller than or equal to pivot we increment
            //the value of i and swap the values at ith and jth index.
            if (arr[j] <= pivot)
            {
                i++;    
                //Swapping of values at ith and jth index.
                swap(&arr[i], &arr[j]);
            }
        }
        //At last, swapping of value at ith and the last index which was
        //selected as pivot.
        swap(&arr[i + 1], &arr[high]);
        //returning the partitioning index.
        return (i + 1);
    }
};
