class Solution
{   
    public:
    //Function to return list of integers that form the boundary 
    //traversal of the matrix in a clockwise manner.
    vector<int> boundaryTraversal(vector<vector<int> > matrix, int n, int m) 
    {
       
       vector<int> res;
       
       if(n==1){
           for(int i=0;i<m;i++){
               res.push_back(matrix[0][i]);
           }
           return res;
       }else if(m==1){
           for(int i=0;i<n;i++){
               res.push_back(matrix[i][0]);
           }
           return res;
       }else{
            for(int i=0;i<m;i++){
           res.push_back(matrix[0][i]);
       }
       for(int i=1;i<n;i++){
           res.push_back(matrix[i][m-1]);
       }
       
       for(int i=m-2;i>=0;i--){
           res.push_back(matrix[n-1][i]);
       }
       for(int i=n-2;i>=1;i--){
           res.push_back(matrix[i][0]);
       }
       return res;
           
       }
       
       
       
       
       
    }
};


// Another Solution

class Solution
{   
    public: 
    //Function to return list of integers that form the boundary 
    //traversal of the matrix in a clockwise manner.
    vector<int> boundaryTraversal(vector<vector<int> > matrix, int n, int m) 
    {
        vector<int> output;
        
        //base case if number of row or column is 1 then adding all elements.
        if(n == 1)
        {
            int i = 0;
            while(i < m)
                output.push_back(matrix[0][i++]);
        }
        else if(m == 1)
        {
            int i = 0;
            while(i < n)
                output.push_back(matrix[i++][0]);
        }
        else
        {
            //we take care of fact that we don't add any number multiple times.
            
            //traversing first row and adding elements in the list.
            for(int j=0; j<m; j++)
                output.push_back(matrix[0][j]);
            
            //traversing last column and adding elements in the list.
            for(int j=1; j<n; j++)
                output.push_back(matrix[j][m-1]);
            
            //traversing last row and adding elements in the list.
            for(int j=m-2; j>=0; j--)
                output.push_back(matrix[n-1][j]);
            
            //traversing first column and adding elements in the list.
            for(int j=n-2; j>=1; j--)
                output.push_back(matrix[j][0]);
        }
        //returning the list.
        return output;
    }
};
