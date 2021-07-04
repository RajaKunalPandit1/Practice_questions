int sumExists(int arr[], int n, int sum)
{
    
    unordered_set<int> s;
   
    for(int i=0;i<n;i++){
        
        if(s.find(sum-arr[i])!=s.end()){
            return true;
        }else{
            s.insert(arr[i]);
        }
        
    }
    return false;
    
    
}

// Another Solution

int sumExists(int arr[], int N, int sum)
{
    //using set to store the elements.
    unordered_set<int> s; 
    
    //inserting all elements in the set.
    for(int i = 0; i < N; i++)
         s.insert(arr[i]);
     
    //iterating over the array.
    for(int i=0;i<N;i++)
    {
       //taking care of cases like 4-2=2 as two 2's cannot exist in distinct
       //array so we continue iteration over next element.
       if(sum-arr[i]==arr[i]) 
          continue;
       else
          {
              //if (sum-arr[i]) exists in set, we return 1.
              if(s.count(sum-arr[i])!=0) 
              {
                return 1;
              }
          }
    }
//if no such pair is present, we return 0.
return 0;
}
