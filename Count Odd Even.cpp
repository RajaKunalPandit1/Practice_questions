Output Status:
Problem Solved Successfully 
Total Points Scored:
2/2
Total Time Taken:
0.3/1.5
Your Accuracy:
100%
Attempts No.:
1
  
    void countOddEven(int arr[], int n)
    {
        
       int odd= 0,even = 0;
       
       for(int i=0;i<n;i++){
           if(arr[i]%2==0){
               even++;
           }else{
               odd++;
           }
       }
       
       cout<< odd << " " << even << endl;
       
        
    }


// Another Solution


class Solution{
    public:
    /*Function to count even and odd elements in the array
    * arr : Array with its elements
    * sizeof_array : number of array elements
    */
    void countOddEven(int arr[], int sizeof_array){
        
        int countOdd = 0, countEven = 0;
        
        for(int i = 0; i < sizeof_array; i++){
            if(arr[i] % 2 == 0){
                countEven++;
            }
            else{
                countOdd++;
            }
        }
        
        cout << countOdd << " " << countEven << endl;
        
    }
};
