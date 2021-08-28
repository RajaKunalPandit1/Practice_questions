Output Status:

Problem Solved Successfully 
Total Points Scored:
1/1
Total Time Taken:
0.2/1.3
Your Accuracy:
100%
Attempts No.:
1
  
  
  
  map<int,int> mapInsert(int arr[],int n)
{
    map<int,int>mp;
    
    for(int i = 0; i < n; i++)
    {
        mp[arr[i]] = i;
    }
    
    return mp;
}

void mapDisplay(map<int,int>mp)
{
    for(auto x: mp)
    {
        cout << x.first << " " << x.second << endl;
    }
}

void mapErase(map<int,int>&mp,int x)
{
    if(mp.find(x) != mp.end())
    {
        mp.erase(x);
        cout << "erased " << x;
    }
    else
    {
        cout << "not found";
    }
    
    cout << endl;
}

// Another Solution 



map<int,int> mapInsert(int arr[],int n)
{
    map<int,int> mp;
    for(int i=0;i<n;i++)
        mp[arr[i]]=i;   //inserting elements in map

    return mp;
    
}


void mapDisplay(map<int,int> mp)
{
    for(auto itr=mp.begin();itr!=mp.end();itr++)
    {
        cout<<itr->first<<" "<<itr->second<<endl;   //printing elements of map
    }
}


void mapErase(map<int,int> &mp,int x)
{
    //deleteing x if present
    if(mp.count(x)!=0)
    {
        mp.erase(x);
        cout<<"erased "<<x;
    }
    else
    cout<<"not found";
    
    
    cout<<endl;
}
