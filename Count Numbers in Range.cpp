class Solution {
  public:
  bool isprime(long long int n) {
if(n==1){
    return 0;
}
for (long long int i = 2; i * i <= n; ++i)
{
if (n % i== 0)
return false;
}
return true;

}
    int count3DivNums(long long L, long long R) {
        
        int count = 0;
        L= ((ceil)(sqrt(L)));
        R= sqrt(R);
        if(L==1 && R==1){
            return 0;
        }
        for(int i=L;i<=R;i++){
            if(isprime(i)){
                count++;
            }
        }
        return count;
    }
};

// Another Approach

class Solution {
  public:
    int count3DivNums(long long L, long long R) {
        
        bool composite[31625];
        long long dp[31625]={0};
        
        composite[0]=composite[1]=true;
        dp[0]=dp[1]=0;
        for(int i = 2; i<31625; i++)
        {
            dp[i]+=dp[i-1];
            if(!composite[i])
            {
                ++dp[i];
            for(int j = i*2; j<31625; j+=i)
                composite[j]=true;
            }
        }
        
        long long prevl = L;
        L = (int)(sqrt(L));
        if(L*L < prevl)
            ++L;
        R = (int)(sqrt(R));
        int ct = dp[R]-dp[L-1];
        
        return ct;
    }
};
