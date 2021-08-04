Output Status:
Problem Solved Successfully 
Total Points Scored:
2/2
Total Time Taken:
0.0/2.2
Your Accuracy:
100%
Attempts No.:
1
  
  long long int calculate(int arr[], int n)
{
    
    unordered_map<int,int> res;
    for(int i=0;i<n;i++){
        res[arr[i]]++;
    }
    int count = 0;
    for(auto x:res){
        if(x.second>1){
            count += x.second*(x.second-1)/2;
        }
    }
    return count;
    
    
}

// Another Solution

long long int calculate(int a[], int n)
{
	// Sorting the list using
	// built in function
	sort(a, a + n);

	long long int count = 1;
	long long int answer = 0;

	// Traversing through the
	// elements
	for (int i = 1; i < n; i++) {
	
		if (a[i] == a[i - 1]){

			// Counting frequency of each 
			// elements
			count += 1;
			
		} 
		else
		{
			// Adding the contribution of
			// the frequency to the answer
			answer = answer + (count * (count - 1)) / 2;
			count = 1;
		}
	}

	answer = answer + (count * (count - 1)) / 2;

	return answer;
}
