Class Solution{
    public:
    void segragate012(int A[], int N)
    {
        int low = 0, high = N-1, mid = 0;
    
        while(mid <= high){
    
            if(A[mid]==0)
                swap(A[mid++], A[low++]);
           
            else if(A[mid]==1)
                 mid++;
            
            else
                swap(A[mid], A[high--]);
            }
        
    }

};

// Alternative Approach 

Class Solution{
    public:
    void segragate012(int arr[], int N)
    {
        swap(arr,arr+N)
        
    }

};
    
