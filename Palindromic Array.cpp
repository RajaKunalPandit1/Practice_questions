Output Status:
Problem Solved Successfully 
Total Points Scored:
0/0
Total Time Taken:
0.0/1.1
Your Accuracy:
50%
Attempts No.:
2

int PalinArray(int arr[], int n)
{  
    
    int flag =1;
    for(int i=0;i<n;i++){
        int res  = arr[i];
        int rem,sum = 0;
        while(res!=0){
            rem = res%10;
            sum = sum*10+rem;
            res = res/10;
        }if(sum != arr[i]){
            flag = 0;
            break;
        }else{
            flag =1;
        }
    }
    return flag;
}
