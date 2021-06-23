class Solution
{
    public:
    //Function to exchange first column of a matrix with its last column.
    void exchangeColumns(vector<vector<int> > &matrix)
    {
       int r = matrix.size();
       int c= matrix[0].size();
      
        for(int i=0;i<r;i++){
            swap(matrix[i][0],matrix[i][c-1]);
        }
    }
};

// Another Solution

class Solution
{
    public:
    //Function to exchange first column of a matrix with its last column.
    void exchangeColumns(vector<vector<int> > &matrix)
    {
        int n1 = matrix.size();
        int m1 = matrix[0].size();
    	for(int i = 0; i < n1; i++)
    	{
    	    //swapping first element of each row with last element of that row.
			swap(matrix[i][0], matrix[i][m1 - 1]);
    	}
    }
};
