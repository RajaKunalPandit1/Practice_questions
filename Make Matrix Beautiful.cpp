Output Status:
Problem Solved Successfully 
You get marks only for the first correct submission if you solve the problem without viewing the full solution.
Total Time Taken:
0.1/1.6
Correct Submission Count:
2
Attempts No.:
4

class Solution
{
    public:
    //Function to find minimum number of operations that are required 
    //to make the matrix beautiful.
    int findMinOpeartion(vector<vector<int> > matrix, int n)
    {
        int total_sum = 0, max_sum = INT_MIN;
        for(int i = 0; i < n; i++)
    {
        int row_sum = 0, col_sum = 0;
        for(int j = 0; j < n; j++)
    {
        row_sum += matrix[i][j];
        col_sum += matrix[j][i];
    }

        max_sum = max(max_sum, row_sum);
        max_sum = max(max_sum, col_sum);

        total_sum += row_sum;
    }

        return max_sum*n - total_sum;
        
    } 
};

// Another Solution 

class Solution
{
    public:
    //Function to find minimum number of operations that are required 
    //to make the matrix beautiful.
    int findMinOpeartion(vector<vector<int> > matrix, int n)
    {
        vector<int> sumRow(n,0);
        vector<int> sumCol(n,0);
        
        //calculating sumRow[] and sumCol[] array.
        for (int i = 0; i < n; ++i)
        {
            for (int j = 0; j < n; ++j)
            {
                sumRow[i] += matrix[i][j];
                sumCol[j] += matrix[i][j];
            }
        }
                
        //finding maximum sum value in either row or in column.
        int maxSum = 0;
        for (int i = 0; i < n; ++i)
        {
            maxSum = max(maxSum, sumRow[i]);
            maxSum = max(maxSum, sumCol[i]);
        }
        
        int count = 0;
        for (int i = 0, j = 0; i < n && j < n;) 
        {
            //finding minimum increment required in either row or column.
            int diff = min(maxSum - sumRow[i],  maxSum - sumCol[j]);
            
            //adding difference in corresponding cell,
            //sumRow[] and sumCol[] array.
            matrix[i][j] += diff;
            sumRow[i] += diff;
            sumCol[j] += diff;
            
            //updating the result.
            count += diff;
            
            //if ith row is satisfied, incrementing i for next iteration.
            if (sumRow[i] == maxSum)
                ++i;
            
            //if jth column is satisfied, incrementing j for next iteration.
            if (sumCol[j] == maxSum)
                ++j;
        }
        //returning the result.
        return count;
    } 
};
