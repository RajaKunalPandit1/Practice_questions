class Solution {
public:
    int addDigits(int num) {
       
        if(num==0){
            return 0;
        }
        int sum=0;
        
        while(num>0 || sum>9){
             if(num==0){
            num = sum;
            sum =0;
        }
            int rem = num%10;
            sum = sum+rem;
            num = num/10;
        }
         
               return sum;
    }
};

// Alternative Approach

class Solution {
public:
    int addDigits(int num) {
        return 1 + (num - 1) % 9;
    }
};
