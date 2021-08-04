Output Status:
Problem Solved Successfully 
Total Points Scored:
0/0
Total Time Taken:
0.0/3.4
Your Accuracy:
100%
Attempts No.:
1

#include<iostream>
using namespace std;
int main()
 {
	int t,n;
	cin>>t;
	while(t--){
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	    }
	    
	    int max_val = arr[0], min_val = arr[0];
	    for(int i=0;i<n;i++){
	        max_val = max(max_val,arr[i]);
	        min_val = min(min_val,arr[i]);
	    }
	    cout<< max_val << " " << min_val << endl;
	    
	    
	}
	return 0;
}
