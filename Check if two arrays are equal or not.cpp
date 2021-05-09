
class Solution{
    public:

    //Function to check if two arrays are equal or not.
    bool check(vector<ll> A, vector<ll> B, int n) {
       sort(A.begin(),A.end());
       sort(B.begin(),B.end());
       for(int i=0;i<n;i++){
           if(A[i]!=B[i]){
               return 0;
           }
       }return 1;
       
       
    }
};

// Alternative Solution

class Solution{
    public:
    //Function to check if two arrays are equal or not.
    bool check(vector<ll> A, vector<ll> B, int N) {
         
        //using a map to store frequency of elements.
        unordered_map<ll,ll> mp;
        
        //incrementing frequencies of elements present in first array in the map. 
        for(ll i=0;i<N;i++)
            mp[A[i]]++;
        
        //decrementing frequencies of elements present in second array in the map.
        for(long long i=0;i<N;i++) 
            mp[B[i]]--;
            
        //iterating over the map.
        for(auto i=mp.begin();i!=mp.end();i++) {
            
            //if frequency of any element in map now is not zero it means that its 
            //count in two arrays was not equal so the arrays are not equal.
            if(i->second!=0) {
                
                //returning false since arrays are not equal.
                return false;
            }
        }
        //returning true if arrays are equal.
        return true;
            
    }
};
