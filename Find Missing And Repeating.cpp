Problem Solved Successfully 
Total Points Scored:
4/4
Total Time Taken:
0.3/1.5
Your Accuracy:
33%
Attempts No.:
3

class Solution{
public:
    int *findTwoElement(int *arr, int n) {
       
       sort(arr,arr+n);
       int *res = new int(2);
       int freq[n+1] = {0};
       for(int i=0;i<n;i++){
           freq[arr[i]]++;
       }
       
       for(int i=0;i<=n;i++){
           if(freq[i]>1){
               res[0] = i;
           }
           if(freq[i] == 0){
               res[1] = i;
           }
       }
       
       return res;
       
    }
};

// Another Solution

class Solution{
public:
    int *findTwoElement(int *arr, int n) {
        int *ans = new int[2], i;
        for (i = 0; i < n; i++) {
            if (arr[abs(arr[i]) - 1] > 0)
                arr[abs(arr[i]) - 1] = -arr[abs(arr[i]) - 1];
            else
                ans[0] = abs(arr[i]);
        }
        for (i = 0; i < n; i++) {
            if (arr[i] > 0) ans[1] = i + 1;
        }
        return ans;
    }
};


// Another Solution

public:
     int *findTwoElement(int *arr, int N)
    {
        int *res = new int(2);
        
        for(int i = 0; i < N; i++)
        {
            arr[i] -= 1;
        }
        
        for(int i = 0; i < N; i++)
        {
            arr[arr[i] % N] += N;
        }
        
        for(int i = 0; i < N; i++)
        {
            arr[i] /= N;
            
            if(arr[i] == 2)
            {
                res[0] = i + 1;
            }
            
            if(arr[i] == 0)
            {
                res[1] = i + 1;
            }
        }
        
        return res;
    }
};
