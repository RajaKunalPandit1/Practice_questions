class Solution
{
public:
    vector<int> sieveOfEratosthenes(int n)
    {
        vector <bool> isprime(n+1,true);
        vector <int> res;
        for(int i=2;i<=n;i++){
            if(isprime[i]){
                res.push_back(i);
                for(int j=2*i;j<=n;j=j+i){
                    isprime[j] = false;
                }
            }
        }
        return res;
    }
};
// Another Approach

class Solution
{
public:
    vector<int> sieveOfEratosthenes(int N)
    {
        // Create a boolean array "prime[0..n]" and initialize
        // all entries it as true. A value in prime[i] will
        // finally be false if i is Not a prime, else true.
        bool prime[N+1];
        memset(prime, true, sizeof(prime));
     
        for (int p=2; p*p<=N; p++)
        {
            // If prime[p] is not changed, then it is a prime
            if (prime[p] == true)
            {
                // Update all multiples of p
                for (int i=p*2; i<=N; i += p)
                    prime[i] = false;
            }
        }
     
        vector<int> ans;
        for (int p=2; p<=N; p++)
           if (prime[p])
              ans.push_back(p);
        
        return ans;
    }
}
