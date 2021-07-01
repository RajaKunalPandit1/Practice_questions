class Solution
{
    public:
    //Function to search a given number in row-column sorted matrix.
    bool search(vector<vector<int> > matrix, int n, int m, int x) 
    {
        int i=n-1,j=0;
        
        while(i>=0 && j<m){
            
            if(matrix[i][j]==x){
                return true;
            }else if(matrix[i][j]>x){
                    i--;        
            }else{
                    j++;
            }
            
            
        }
        return false;
        
        
    }
};


// Another Soluiton

class Solution
{
    public:
    //Function to search a given number in row-column sorted matrix.
    bool search(vector<vector<int> > matrix, int n, int m, int x) 
    { 
    	int i = n-1, j = 0; 
    	while ( i >= 0 && j < m ) 
    	{ 
    	    //if given number is found, we return true.
    		if ( matrix[i][j] == x ) 
    			return true; 
    		//if current element is greater than given number, we 
    		//decrease i pointer else we increase j pointer.
    		if ( matrix[i][j] > x ) 
    			i--; 
    		else 
    			j++; 
    	} 
    	//if we reach here, it means given number is not
    	//present in matrix so we return false.
    	return false; 
    } 
};
