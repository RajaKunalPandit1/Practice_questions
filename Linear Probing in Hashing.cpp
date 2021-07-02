class Solution{
  public:
    //Function to fill the array elements into a hash table 
    //using Linear Probing to handle collisions.
    vector<int> linearProbing(int hashSize, int arr[], int sizeOfArray)
    {
vector<int> v(hashSize,-1);
for(int i=0; i<sizeOfArray; i++)
{
int key=arr[i];
int h=(key)%hashSize;
int count=0;
if(v[h]==-1)
v[h]=key;
else
while(v[h]!=-1 && count<=hashSize)
{
if(v[h]==key)
break;
h=(h+1)%hashSize;
count++;
}
if(v[h]==-1)
v[h]=key;


}
return v;
}

};

// Another Solution

class Solution{
  public:
    //Function to fill the array elements into a hash table 
    //using Linear Probing to handle collisions.
    vector<int> linearProbing(int hashSize, int arr[], int sizeOfArray)
    {
        //Your code here
        vector<int> hash(hashSize);
        
        //storing -1 at all indexes in the hash table.
        for(int i=0;i<hashSize;i++)
            hash[i]=-1;
            
        //iterating over the array. 
        for(int i=0;i<sizeOfArray;i++) 
        {
            //if the value of hash table at index (arr[i]%hashSize) is -1 
            //which means empty then, we insert arr[i] at that place.
            if(hash[arr[i]%hashSize]==-1) 
            {
                hash[arr[i]%hashSize]=arr[i];
            }
            //else we move linearly from the filled position 
            //to find an index with -1 in hash table.
            else
            {
                int counter=0;
                int k=(arr[i])%hashSize;
                int flag=0;
                //using a loop which runs until we find an index with -1
                //in hash table which means empty.
                while(counter<hashSize&&hash[k]!=-1)
                {
                    if(hash[k]==arr[i])
                    {
                        flag=1;
                        break;
                    }
                    k=(k+1)%hashSize;
                    counter++;
                }
                if(flag==1)
                    continue;
                //if we find a position where arr[i] can be inserted 
                //then we insert the element.
                if(counter<hashSize) 
                hash[k]=arr[i];
            }
        }
        //returning the hash table.
        return hash;
    }

};
