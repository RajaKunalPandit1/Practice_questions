class Solution{
  public:
    // arr[]: input array
    // n: size of array
    //Function to return non-repeated elements in the array.
    vector<int> printNonRepeated(int arr[],int n)
    {
        unordered_map<int,int> m;
        vector<int> res;
        
        for(int i=0;i<n;i++){
            m[arr[i]]++;
        }
        
        for(int i=0;i<n;i++){
            if(m[arr[i]] == 1){
                res.push_back(arr[i]);
            }
        }
        
        return res;
        
    }
};

// Another Solution

class Solution{
  public:
    //Function to return non-repeated elements in the array.
    vector<int> printNonRepeated(int arr[],int n)
    {
        //using map to store frequency of each element.
        unordered_map<int,int>mp;
    	
    	//storing the frequency of each element in map. 
        for(int i=0;i<n;i++)
        {
            mp[arr[i]]++;
        }
        
        vector<int> v;
        //iterating over the array elements.
        for(int i=0;i<n;i++)
        {
            //if frequency of current element in map is 1,
            //then we store it in the vector.
            if(mp[arr[i]]==1)
            {
                v.push_back(arr[i]);
            }
        }
        
        //returning the vector.
        return v;
    }
};
