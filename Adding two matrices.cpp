class Solution
{   
    public:
    //Function to add two matrices.
    vector<vector<int> > sumMatrix( const vector<vector<int> >& A, const vector<vector<int> >& B)
    {
        vector<vector <int>> res;
        int t;
        
        int r1 = A.size();
        int c1 = A[0].size();
        
        int r2 = B.size();
        int c2 = B[0].size();
        
        if(r1!=r2 || c1!=c2){
            return res;
        }
        for(int i=0;i<r1;i++){
            vector<int>v;
            for(int j=0;j<c1;j++){
                t = A[i][j] + B[i][j];
                v.push_back(t);
            }res.push_back(v);
            v.clear();
        }return res;
        
    }
};

// Another Solution

class Solution
{   
    public:
    //Function to add two matrices.
    vector<vector<int> > sumMatrix( const vector<vector<int> >& A, const vector<vector<int> >& B)
    {
        //storing the size of rows and columns.
        int n1 = A.size();
        int m1 = A[0].size();
        int n2 = B.size();
        int m2 = B[0].size();
        
        //list to store the result.
        vector<vector<int> > result;
        
        //we can add matrices only if both have same no. of rows and columns.
        if(n1 == n2 && m1 == m2)
        {
            result.resize(n1);
            for(int i=0; i<n1; i++)
            {
                result[i].assign(m1,0);
                for(int j=0; j<m1; j++)
                    //calculating the sum.
                    result[i][j] = A[i][j] + B[i][j];
            }
        }
        //returning the result.
        return result;
    }
};
