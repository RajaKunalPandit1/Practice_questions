class Solution{
public:
	int countZeros(vector<vector<int>>A)
	{
    	int n = A.size();
    	int res=0;
    	for(int i=0;i<n;i++){
    	    for(int j=0;j<n;j++){
    	        if(A[i][j] == 0){
    	            res++;
    	        }
    	    }
    	}
    	return res;
    	
	}
};


// Another Solution 

class Solution{
public:
	int countZeros(vector<vector<int>>A)
	{
		// start from bottom-left corner of the matrix
		int row = A[0].size() - 1, col = 0;
        int N = A[0].size();
		// stores number of zeroes in the matrix
		int count = 0;

		while (col < N)
		{
			// move up until you find a 0
			while (A[row][col])

				// if zero is not found in current column,
				// we are done
				if (--row < 0)
					return count;

			// add 0s present in current column to result
			count += (row + 1);

			// move right to next column
			col++;
		}	

		return count;
	}
};
