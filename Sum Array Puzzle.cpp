Output Status:
Problem Solved Successfully 
Total Points Scored:
1/1
Total Time Taken:
0.0/2.0
Your Accuracy:
100%
Attempts No.:
1

void SumArray(int arr[], int n)
{
    int sum =0;
    for(int i=0;i<n;i++){
        sum += arr[i];
    }
    for(int i=0;i<n;i++){
        arr[i] = sum-arr[i];
    }
}


