Output Status:
Problem Solved Successfully 
Total Points Scored:
2/2
Total Time Taken:
0.2/1.3
Your Accuracy:
16%
Attempts No.:
6

multimap<int,int> multimapInsert(int arr[],int n)
{
    multimap<int,int>mp;
    for(int i = 0; i < n; i++)
    {
        mp.insert({arr[i], i});
    }
    
    return mp;
    
}


void multimapDisplay(multimap<int,int>mp)
{
     for(auto x: mp)
    {
        cout << x.first << " " << x.second << endl;
    }

}


void multimapErase(multimap<int,int>&mp,int x)
{
   
   if(mp.find(x) != mp.end())
    {
        mp.erase(x);
        
        cout<<"erased "<<x; 
        
    }else{
        cout<< "not found";
    }
    cout<<endl;
}

// Another Solution 

multimap<int,int> multimapInsert(int arr[],int n)
{
    multimap<int,int>mp;
    for(int i=0;i<n;i++)
        mp.insert({arr[i],i});   //inserting elements in multimap
    
    return mp;
    
}


void multimapDisplay(multimap<int,int>mp)
{
    for(auto itr=mp.begin();itr!=mp.end();itr++)
    {
        cout<<itr->first<<" "<<itr->second<<endl;   //printing elements of multimap
    }
 //   cout<<endl;
}


void multimapErase(multimap<int,int>&mp,int x)
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
