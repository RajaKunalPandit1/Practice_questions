class Solution
{   
    public:
    //Function to reverse the columns of a matrix.
    void reverseCol(vector<vector<int> > &matrix)
    {
        int r = matrix.size();
        int c = matrix[0].size();
       
        
        for(int i=0;i<r;i++){
             int low=0,high=c-1;
            while(low<high){
                swap(matrix[i][low++],matrix[i][high--]);
                
            }
        }
        
    }
};

// Another Solution

class Solution
{   
    public:
    //Function to reverse the columns of a matrix. 
    void reverseCol(vector<vector<int> > &matrix)
    {
        int n1 = matrix.size();
        int m1 = matrix[0].size();
        for(int i = 0; i < n1; i++)
            for(int j = 0; j < m1 / 2; j++)
            {
                //swapping the elements (element at 1st column with element
                //at last column, element at 2nd column with element at 
                //second last column and so on).
                swap(matrix[i][j], matrix[i][m1-j-1]);
            }
    }
};
