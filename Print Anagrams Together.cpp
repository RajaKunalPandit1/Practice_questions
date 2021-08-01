Output Status:

Problem Solved Successfully 
Total Points Scored:
4/4
Total Time Taken:
0.0/1.0
Your Accuracy:
100%
Attempts No.:
1

vector<vector<string> > Anagrams(vector<string>& string_list) 
{
    
    unordered_map<string,vector<string>> mp;
    
    for(int i=0;i<string_list.size();i++){
         string data = string_list[i];
        sort(data.begin(),data.end());
        
        mp[data].push_back(string_list[i]);
        
    }
    
    vector<vector<string>> res;
    
    for(auto x:mp){
        res.push_back(x.second);
    }
    return res;
    

}


// Another Solution 

vector<vector<string> > Anagrams(vector<string>& string_list) 
{
    vector<vector<string> > result;

    // hash map to maintain groups of anagrams
    unordered_map <string,vector<string> > umap; 
    
    for(int i =0; i<string_list.size(); i++ )
    {
        string s = string_list[i];
     
        // sort each string
        sort(s.begin(),s.end());
        
        // add original string to corresponding sorted string in hash map
        umap[s].push_back(string_list[i]);
    }
    for(auto itr= umap.begin(); itr!=umap.end(); itr++)
        result.push_back(itr->second);
    
    return result;
}
