class Solution{
    public:
    //Function to return the count of the number of elements in
    //the intersection of two arrays.
    int NumberofElementsInIntersection (int a[], int b[], int n, int m )
    {
        
        int res=0;
        
        unordered_set<int> s (a,a+n);
        
        for(int i=0;i<m;i++){
            if(s.find(b[i])!=s.end()){
                res++;
                s.erase(b[i]);
            }
        }
        
        return res;
    }
};

// Another Solution 

class Solution{
    public:
    //Function to return the count of the number of elements in
    //the intersection of two arrays.
    int NumberofElementsInIntersection (int a[], int b[] , int n, int m)
    {
        //using set to store the elements.
    	unordered_set<int> s1;
        int count = 0;
        
        //we insert all the elements of first array in set s1. 
    	for(int i=0;i<n;i++)
    		s1.insert(a[i]);
        
        //iterating over the second array.
    	for(int i=0;i<m;i++)
    	{
    	    //if current element already exists in set, we update the counter.
    		if(s1.find(b[i]) != s1.end()){
    		    
    		    //erasing element from set because if same element is present 
    		    //again in the array we don't need to count it again. 
    		    s1.erase(b[i]);
    		    
    		    //incrementing the counter. 
    		    count++;
    		}
    	}
    	//returning the counter.
    	return count;
    }
};


