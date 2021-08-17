Output Status:

Problem Solved Successfully 
Total Points Scored:
2/2
Total Time Taken:
0.0/1.1
Your Accuracy:
50%
Attempts No.:
2



class Solution
{
    public:
        int countWords(string list[], int n)
        {
           unordered_map<string,int> m;
           
           for(int i=0;i<n;i++){
               m[list[i]]++;
           }
           
           int res=0;
          for(auto x:m){
              if(x.second == 2){
                  res++;
              }
          }
          return res;
           
        }

};

// Another Solution 

class Solution
{
    public:
        int countWords(string list[], int n)
        {
            unordered_map<string, int> m;
            for (int i = 0; i < n; i++)
                m[list[i]] += 1;
        
            int count = 0;
            for (auto it = m.begin(); it != m.end(); it++)
                if ((it->second == 2))
                    count++;
            return count;
        }

};
