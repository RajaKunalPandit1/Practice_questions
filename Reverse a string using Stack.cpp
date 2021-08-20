Output Status:
Problem Solved Successfully 
Total Points Scored:
2/2
Total Time Taken:
0.0/1.7
Your Accuracy:
50%
Attempts No.:
2



char* reverse(char *S, int len)
{
    stack<char> s;
   
    for(int i=0;i<len;i++){
        s.push(S[i]);
    }
    
    for(int i=0;i<len;i++){
        S[i] = s.top();
        s.pop();
    }
    return S;
    
}




