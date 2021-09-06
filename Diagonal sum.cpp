Output Status:

Problem Solved Successfully 
Total Points Scored:
0/0
Total Time Taken:
0.1/29.7
Your Accuracy:
16%
Attempts No.:
6


class Solution {
public:
    int DiagonalSum(vector<vector<int> >& matrix) {
        
        int n = matrix.size();
        
        int sum1=0,sum2=0,total=0;
        
        for(int i=0;i<n;i++){
            sum1+= matrix[i][i];
            sum2+= matrix[i][n-i-1];
        }
       total = sum1+sum2;
       
        return total;
    }
 };
 
 // Another Solution 
 
 
 class Solution {
public:
    int DiagonalSum(vector<vector<int> >& matrix) {
    	int sum = 0;
    	for(int i = 0; i < matrix.size(); i++){
    		sum += matrix[i][i];
    	}
    	for(int j  = matrix.size() - 1 , i = 0; j >= 0; j--){
    		sum += matrix[i++][j];
    	}	
    	return sum;
    }
};
