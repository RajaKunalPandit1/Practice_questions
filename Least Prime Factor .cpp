class Solution {
  public:
   int prime(int num)
{
if(num % 2 == 0)
return 2;
for(int i = 3; i*i <=num; i+=2)
{
if(num % i == 0)
return i;
}
if(num > 2)
return num;
}
vector<int> leastPrimeFactor(int n) {
vector<int>res;
res.push_back(1);
res.push_back(1);
for(int i = 2; i <= n; i++)
{
int x = prime(i);
res.push_back(x);
}
return res;
}
};

// Alternative Approach

class Solution {
  public:
    vector<int> leastPrimeFactor(int n) 
{ 
    // Create a vector to store least primes. 
    // Initialize all entries as 0. 
    vector<int> least_prime(n+1, 0); 
  
    // We need to print 1 for 1. 
    least_prime[1] = 1; 
  
    for (int i = 2; i <= n; i++) 
    { 
        // least_prime[i] == 0 
        // means it i is prime 
        if (least_prime[i] == 0) 
        { 
            // marking the prime number 
            // as its own lpf 
            least_prime[i] = i; 
  
            // mark it as a divisor for all its 
            // multiples if not already marked 
            for (int j = 2*i; j <= n; j += i) 
                if (least_prime[j] == 0) 
                   least_prime[j] = i; 
        } 
    } 
  
    // Return least prime factor of 
    // of numbers till n 
    return least_prime;
}
};
