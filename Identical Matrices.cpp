Output Status:
Problem Solved Successfully 
Total Points Scored:
0/0
Total Time Taken:
0.4/1.7
Your Accuracy:
100%
Attempts No.:
1


class Solution {
  public:
    int areMatricesIdentical(int N, vector<vector<int>> Grid1,
                             vector<vector<int>> Grid2) {
        
        int n= Grid1.size();
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(Grid1[i][j]!=Grid2[i][j]){
                    return 0;
                }
            }
        }
        return 1;
        
    }
};

// Another Solution 

lass Solution {
  public:
    int areMatricesIdentical(int N, vector<vector<int>> Grid1,
                             vector<vector<int>> Grid2) {
        int i, j;
        for (i = 0; i < N; i++)
            for (j = 0; j < N; j++)
                // checking whether correspoding elements are same or not
                if (Grid1[i][j] != Grid2[i][j]) return 0;
        return 1;
    }
};
