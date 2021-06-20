
class Solution
{   
    public:
    //Function to rotate matrix anticlockwise by 90 degrees.
    void rotateby90(vector<vector<int> >& matrix, int n) 
    { 
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                swap(matrix[i][j],matrix[j][i]);
            }
        }
        
        
        for(int i=0;i<n;i++){
        int low=0,high=n-1;    
        
        while(low<high){
            swap(matrix[low][i],matrix[high][i]);
            low++;
            high--;
        }
        
        }
        
        
    } 
};

 // Another Solution

class Solution
{   
    public:     
    //Function to do transpose of matrix.
    void transpose(vector<vector<int> >& matrix, int n) 
    { 
        for (int i = 0; i < n; i++) 
            for (int j = i; j < n; j++) 
                //swapping elements at (i,j) and (j,i).
                swap(matrix[i][j], matrix[j][i]); 
    } 

    //after transposing we swap elements of each column (1st with last, 2nd with 
    //second last) one by one for finding left rotation of matrix by 90 degree.
    void reverseColumns(vector<vector<int> >& matrix, int n) 
    { 
        for (int i = 0; i < n; i++) 
            for (int j = 0, k = n - 1; j < k; j++, k--) 
                //swapping elements in each column.
                swap(matrix[j][i], matrix[k][i]); 
    } 
      
    //Function to rotate matrix anticlockwise by 90 degrees.
    void rotateby90(vector<vector<int> >& matrix, int n) 
    { 
        transpose(matrix, n); 
        reverseColumns(matrix, n); 
    } 
};
