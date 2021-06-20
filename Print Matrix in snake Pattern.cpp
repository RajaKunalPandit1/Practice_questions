class Solution
{   
    public:
    //Function to return list of integers visited in snake pattern in matrix.
    vector<int> snakePattern(vector<vector<int> > matrix)
    {   
        int n = matrix.size();
        vector<int> res;
        for(int i=0;i<n;i++){
        if(i%2==0){
            for(int j=0;j<n;j++){
                res.push_back(matrix[i][j]);            
            }
        }else{
            for(int j=n-1;j>=0;j--){
                res.push_back(matrix[i][j]);
            }
        }
        }
        return res;
        
    }
};

// Another solution

class Solution
{   
    public:
    //Function to return list of integers visited in snake pattern in matrix. 
    vector<int> snakePattern(vector<vector<int> > matrix)
    {   
        int n = matrix.size();
        vector<int> output;
        
        //traversing over the rows.
        for (int i = 0; i < n; i++) 
        {
            //if current row is even, we add the elements 
            //in the list from left to right.
            if (i % 2 == 0) 
            {
                for (int j = 0; j < n; j++)
                    output.push_back(matrix[i][j]);
            }
            //else current row is odd and we add the elements 
            //in the list from right to left.
            else
            {
                for (int j = n - 1; j >= 0; j--)
                    output.push_back(matrix[i][j]);
            }
        }
        //returning the list.
        return output;
    }
};
