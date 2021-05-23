class Solution {
public:
    double myPow(double x, int n) {
        
        if (n==0) return 1;
    if (n==1) return x;
    if (n==-1) return 1/x;
    return myPow(x*x,n/2)*(n%2==0?1:n>0?x:1/x);
        
    }
};

// Alternate Approach (bit operation)

double myPow(double x, int n) { 
    if(n==0) return 1;
    if(n<0) {
        n = -n;
        x = 1/x;
    }
    double ans = 1;
    while(n>0){
        if(n&1) ans *= x;
        x *= x;
        n >>= 1;
    }
    return ans;
}

// Antother Approach (Iterative

double myPow(double x, int n) { 
    if(n==0) return 1;
    if(n<0){
        n = -n;
        x = 1/x;
    }
    return n%2==0 ? myPow(x*x, n/2) : x*myPow(x*x, n/2);
}
