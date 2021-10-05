Output Status:

Problem Solved Successfully 
Total Points Scored:
1/1
Total Time Taken:
0.8/2.5
Your Accuracy:
100%
Attempts No.:
1


int check(int *a, int *b, int n){
    
    bool flag = true;
    
    sort(a,a+n);
    sort(b,b+n);
    
    for(int i=0;i<n;i++){
        if(a[i]!=b[i]){
            flag= false;
            break;
        }
    }
    return flag;
    
}

// Another Solution 


int check(int *a, int *b, int n){
    sort(a, a + n);
    sort(b, b + n);
    int i;
    for(i = 0; i < n; i++){
        if(a[i] != b[i])
            return 0;
    }
    return 1;
}
