class solution
{   
    public:
    //Function to interchange the rows of a matrix.
    void interchangeRows(vector<vector<int> > &matrix)
    {
            int r = matrix.size();
            int c = matrix[0].size();
            
            for(int i=0;i<c;i++){
                int low=0,high=r-1;
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
    //Function to interchange the rows of a matrix.
    void interchangeRows(vector<vector<int> > &matrix)
    {
        int n1 = matrix.size();
        int m1 = matrix[0].size();
        for(int i = 0; i < n1/2; i++)
        {
            //swapping the elements (element at 1st row with element
            //at last row, element at 2nd row with element at 
            //second last row and so on).
            swap(matrix[i], matrix[n1-i-1]);
        }
    }
};
