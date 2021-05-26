class Solution{
  public:
    // Function to find floor of x
    // n: size of vector
    // x: element whose floor is to find
    int findFloor(vector<long long> v, long long n, long long x){
    //   vector<int> res; 
       long long int dup = floor(x);
       int low=0,high = v.size()-1;
       while(low<=high){
           
           int mid= (low+high)/2;
           if(v[mid] > dup){
               high = mid-1;
           }else if( mid ==n-1 ||  v[mid+1]> dup){
               return mid;
           }else{
               low = mid+1;
           }
           
           
       }
     return -1;
        
    }
};

// Another Solution

class Solution{
  public:
         
    
    // Function to find floor of given element
    int findFloor(vector<long long> v, int n, long long x){
        auto itr = v.begin();
        auto last = v.begin();
        
        // advance function is used to move the iterator to n steps
        advance(last, n);
        
        auto it = lower_bound(v.begin(), last, x);
        
        // check if lower_bound function()
        // returns the element equal to x
        // then return the number of element
        // in between
        if(*it == x){
            return (it-itr);
        }
        
        // else return the number of element in between -1
        // because, since floor doesn't exists, then element just before the
        // inserted will be its floor.
        // Also, it will return -1 for the elements which is even not there in the array
        else
            return ((it-1)-itr);
        
    }
};
