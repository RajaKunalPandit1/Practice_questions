Class Solution{
public:
    // arr: input array
    // n: size of array
    //Function to sort the array into a wave-like array.
    void convertToWave(int *arr, int n){
        
        for(int i=0;i<n-1;i+=2){
            swap(arr[i],arr[i+1]);
        }
        
    }
};

// Another Solution

Class Solution{
    public:
    // arr: input array
    // n: size of array
    //Function to sort the array into a wave-like array.
    void convertToWave(int *arr, int n){
        
        for(int i=0;i<n-1;i+=2){
            
            int temp = arr[i];
            arr[i] = arr[i+1];
            arr[i+1] = temp;
            
        }
        
    }
};
