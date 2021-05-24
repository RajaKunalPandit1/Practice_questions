Class Solution{
public:
    //arr1,arr2 : the arrays
    // n, m: size of arrays
    //Function to return a list containing the union of the two arrays. 
    vector<int> findUnion(int arr1[], int arr2[], int n, int m)
    {
        vector <int> res;
        int i=0,j=0;
        while(i<n && j<m){
            if(arr1[i] == arr1[i-1] && i>0){
                i++;continue;
            }
            if(arr2[j] == arr2[j-1] && j>0){
                j++;continue;
            }
            if(arr1[i]>arr2[j]){
                res.push_back(arr2[j]);
                j++;
            }else if(arr2[j]>arr1[i]){
                res.push_back(arr1[i]);
                i++;
            }else{
                res.push_back(arr1[i]);
                i++;
                j++;
            }
        }
        while(i<n){
            if(i>0 && arr1[i] != arr1[i-1]){
                res.push_back(arr1[i]);
                i++;
            }
        }
        while(j<m){
            if(j>0 && arr2[j] != arr2[j-1]){
                res.push_back(arr2[j]);
                j++;
            }
        }
        return res;
    }
};



// Alternative Solution
set<int>s;
s.insert(arr1,arr1+n);
s.insert(arr2,arr2+m);

vector<int>v;
for(auto &x:s)
v.push_back(x);

return v;
