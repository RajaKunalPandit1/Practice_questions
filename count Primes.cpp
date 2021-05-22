class Solution {
public:
    int countPrimes(int n) {
        int count=0;
        if(n==1 || n==0 || n==2){
            return 0;
        }
        vector <bool> isprime(n+1,true);
         isprime[0] = false, isprime[1] = false;
        for(int i=2;i<n;i++){
            if(isprime[i]){
                count++;
                for(int j=i;j<n;j+=i){
                    isprime[j] = false;
                }
            }
        }
        return count;
    }
};

// Antother approach

int countPrimes(int n) {
	if (n <= 2) return 0;
	int res=n>>1, m=sqrt(n-1); // intilize res to n/2, removes all even number(not 2) and 1
	bool *table=new bool[n];
	for(int i=3,j,step;i<=m;i+=2)
		if(!table[i]) { // i is an odd prime
			for(step=i<<1, j=i*i;j<n;j+=step) // step=i*2, ignore even numbers
			if(!table[j]) { table[j]=1; --res; }
		}
	delete []table;
	return res;
}
