class Solution{
  public:
    
    // A[]: input array
    // N: input array
    //Function to sort the binary array.
    void binSort(int A[], int N)
    {
       //Your code here
       sort(A,A+N);
       /**************
        * No need to print the array
        * ************/
    }
};

// Alternative Approach

class Solution{
  public:

    // Function to sort the binary array.
    void binSort(int A[], int N)
    {
        int low = 0, high = N-1;
        
        //Using segregation method.
        while(low <=  high){
            
            //If element at left index is 0, we increase the left index.
            if(A[low] == 0){
                low++;
            }
            //Else If element at high index is 1, we decrease the right index.
            else if(A[high] == 1){
                high--;
            }
            //Else, we swap the elements at left and right index.
            else{
                int temp = A[low];
                A[low] = A[high];
                A[high] = temp;
                //Updating values of left and right index after swapping.
                low++;
                high--;
            }
        }
    }
    
};
