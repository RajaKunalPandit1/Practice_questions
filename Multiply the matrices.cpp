class Solution
{   
    public:
    //Function to multiply two matrices.
    vector<vector<int> > multiplyMatrix( const vector<vector<int> >& A, const vector<vector<int> >& B)
    {
        vector<vector<int>>res;
        int r1 = A.size();
        int c1 = A[0].size();
        int r2 = B.size();
        int c2 = B[0].size();
        int t;
        if(c1!=r2){
            
            return res;
        }else{
        // vector<vector<int>>res;
        
        for(int i=0;i<r1;i++){
            vector<int>v;
            for(int j=0;j<c2;j++){
                t=0;
                for(int k=0;k<r2;k++){
                    
                
               t += A[i][k] * B[k][j];
                }
                v.push_back(t);
            }res.push_back(v);
            v.clear();
        }
        return res;
        
        }
    }
};


// Another Solution

class Solution
{   
    public:
    //Function to multiply two matrices.
    vector<vector<int> > multiplyMatrix( const vector<vector<int> >& A, const vector<vector<int> >& B)
    {
        //storing the number of rows and columns in both matrices.
        int n1 = A.size();
        int m1 = A[0].size();
        int n2 = B.size();
        int m2 = B[0].size();
        
        //list to store the result.
        vector<vector<int> > result;

        //we can multiply matrices only if number of columns in 
        //1st matrix is equal to number of rows in 2nd matrix.
        if(m1 == n2)
        {
            result.resize(n1);
            for(int i=0; i<n1; i++)
            {
                result[i].assign(m2,0);
                for(int j=0; j<m2; j++)
                {
                    int sum=0; 
                    //calculating sum of products of corresponding elements
                    //in row of 1st matrix and column of 2nd matrix.
                    for(int k=0; k<m1; k++)
                    {
                       sum += A[i][k] * B[k][j]; 
                    } 
                    //storing the sum in resultant list.
                    result[i][j] = sum;
                }
            }
        }
        //returning the list.
        return result;
    }
};
