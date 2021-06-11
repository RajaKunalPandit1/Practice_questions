void sum(vector<pair<int,int>>v)
{
    long long sum=0;
    
    for(int i=0;i<v.size();i++){
        sum+= v[i].second;
    }
    
    cout<<sum;
    cout<<endl;
}

// Alternate Approach

void sum(vector<pair<int,int>>v)
{
    long long sum=0;
    for(auto it=v.begin();it!=v.end();it++)
    {
       sum+=it->second;
    }
    cout<<sum;
    cout<<endl;
}
