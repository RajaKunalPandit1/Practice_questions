Output Status:
Problem Solved Successfully 
Total Points Scored:
1/1
Total Time Taken:
0.1/12.4
Your Accuracy:
20%
Attempts No.:
5
  
  
  class Solution{
    public:
    int findDuplicate(int arr[], int N, int K) 
    { 
        long long int a[100000] = {0};
        for(int i=0;i<N;i++){
            a[arr[i]] = a[arr[i]] +1;
        }
        
        for(int i=0;i<100000;i++){
            if(a[i] == K){
                return i;
            }
        }
        return -1;
    }
};

// Another Solution

class Solution{
    public:
    
  
    int findDuplicate(int arr[], int n, int k) 
    { 
        int MAX = 1000; 
        // Computing frequencies of all elements 
        
        int freq[MAX]; 
        memset(freq, 0, sizeof(freq)); 
        for (int i = 0; i < n; i++) { 
            if (arr[i] < 1 && arr[i] > MAX) { 
                cout << "Out of range"; 
                return -1; 
            } 
            freq[arr[i]] += 1; 
        } 
      
        // Finding the smallest element with 
        // frequency as k 
        for (int i = 0; i < MAX; i++) { 
      
            // If frequency of any of the number 
            // is equal to k starting from 0 
            // then return the number 
            if (freq[i] == k) 
                return i; 
        } 
      
        return -1; 
    } 
};
