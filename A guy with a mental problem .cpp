Output Status:
Problem Solved Successfully 
Total Points Scored:
1/1
Total Time Taken:
0.4/2.5
Your Accuracy:
50%
Attempts No.:
2

class Solution{
    public:
    long long minTime(long long a[], long long b[], long long n)
    {
       
      long long int suma=0,sumb=0,res=0;
       for(int i=0;i<n;i++){
           if(i%2!=0){
               suma += b[i];
           }else{
               suma+= a[i];
           }
       }
       
       for(int i=0;i<n;i++){
           if(i%2!=0){
               sumb += a[i];
           }else{
               sumb+= b[i];
           }
       }
       res = min(suma,sumb);
       return res;
        
    }
};

// Another Solution

class Solution{
    public:
    long long minTime(long long a[], long long b[], long long n)
{
        long long suma=0, sumb=0;
        
        for(long long i=0;i<n;i++){
            if(i%2==0)
                suma+=a[i];
            else
                sumb+=a[i];
        }
    
        for(long long i=0;i<n;i++){
            if(i%2!=0)
                suma+=b[i];
            else
                sumb+=b[i];
        }
    
        return min(suma,sumb);
}
};
