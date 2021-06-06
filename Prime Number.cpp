Class Solution{
public:
    int isPrime(int n){
        
        if(n==1){
            return 0;
        }
        if(n==2 || n==3){
            return 1;
        }if(n%2==0 || n%3==0){
            return 0;
        }
        for(int i=5;i*i<n;i+=6){
            
            if(n%i==0 || n%(i+2)==0){
                return 0;
            }
            
        }
        return 1;
         
        
    }
};

 // Alternative Approach

class Solution{
public:
    int isPrime(int N){
        if(N == 1) // if N = 1 return 0
            return 0;
        for(int i=2;i*i<=N;i++) // loop from 2 to sqrt(N)
            if(N%i==0) // if N is divisble by any other number return 0 
                return 0;
        return 1; // return 1 if N is not divisible by any other number.
    }
};
