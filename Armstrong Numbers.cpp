class Solution {
  public:
    string armstrongNumber(int n){
      int sum=0;
       int res =n;
       while(n>0){
           int rem=n%10;
           sum = sum+ (rem*rem*rem);
           n=n/10;
       }
      return ((sum ==res)?"Yes":"No");
    }
};

// Alternative Approach

class Solution {
  public:
    string armstrongNumber(int n){
        int a=n%10,b= (n/10)%10,c = n/100;
        if(a*a*a + b*b*b +c*c*c == n)
            return "Yes";
        else
            return "No";
    }
 
};
