class Solution
{
public:
int divisior(int n){
    int res=0;
    for(int i=1;i<=n;i++){
            if(n%i == 0){
                res+= i;
               
            }
        }
        return res;
}
    int sumOfDivisors(int n)
    {
        int sum=0;
        
      for(int j=1;j<=n;j++){
            if(n%j == 0){
             sum+= divisior(j);
                
            }
        }
return sum;
        
    }
};
// Alternative Approach

class Solution
{
public:
    int sumOfDivisors(int N)
    {
        map<int, int> mp;
        for (int j=2; j<=sqrt(N); j++)
        {
            int count = 0;
            while (N%j == 0)
            {
                N /= j;
                count++;
            }
     
            if (count)
                mp[j] = count;
        }
     
        // If N is a prime number
        if (N != 1)
            mp[N] = 1;
     
        // For each prime factor, calculating (p^(a+1)-1)/(p-1)
        // and adding it to answer.
        int ans = 1;
        for (auto it : mp)
        {
            int pw = 1;
            int sum = 0;
     
            for (int i=it.second+1; i>=1; i--)
            {
                sum += (i*pw);
                pw *= it.first;
            }
            ans *= sum;
        }
     
        return ans;
    }
};
