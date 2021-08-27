Output Status:
Problem Solved Successfully 
Total Points Scored:
2/2
Total Time Taken:
0.3/1.7
Your Accuracy:
25%
Attempts No.:
4
  
  class Solution {
  public:
    //Function to find two repeated elements.
    vector<int> twoRepeated (int arr[], int N) {
        
        vector<int> res;
        
        for(int i=0;i<N+2;i++){
            if((arr[abs(arr[i])]) > 0){
                arr[abs(arr[i])] *= -1;
            }else{
                res.push_back(abs(arr[i]));
            }
        }
        return res;
        
        
    }
};

// Another Solution Using something circular sort of :P


class Solution {
  public:
    //Function to find two repeated elements.
    vector<int> twoRepeated (int arr[], int n) {
        
        vector<int> res;
        
        for(int i=0;i<n+2;i++){
            arr[((arr[i]% (n+1)) -1)] += (n+1);
            
            if(arr[((arr[i]% (n+1)) -1)]/(n+1) == 2){
                res.push_back(((arr[i]%(n+1))-1)+1);
            }
        }
        return res;
        
    }
};

// Another Solution 


class Solution
{
  public:
    //Function to find two repeated elements.
    vector<int> twoRepeated(int a[], int n)
    {    
        vector<int> res(2);
        bool first = false;
        
        //iterating over the array elements.
        for(int i=0;i<n+2;i++)
        {
            //making the visited elements negative.
            if(a[abs(a[i])]>0)
                a[abs(a[i])]=-a[abs(a[i])];
            
            //if the number is negative, it was visited previously
            //so this would be the repeated element.
            else
            {
                //storing first and second repeated element accordingly.
                if(first == false)
                {
                    res[0] = abs(a[i]);
                    first = true;
                }
                else
                {
                    res[1] = abs(a[i]);
                    break;
                }
            }
        }
        //returning the result.
        return res;
    }
};




