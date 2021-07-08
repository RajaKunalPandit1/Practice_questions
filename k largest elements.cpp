class Solution{
public:	
	vector<int> kLargest(int arr[], int n, int k) {
	    
	    vector<int> res;
	    sort(arr,arr+n,greater<int>());
	    for(int i=0;i<k;i++){
	        res.push_back(arr[i]);
	    }
	    return res;
	    
	}

};

// Another Solution


class Solution{
public:
	vector<int> kLargest(int arr[], int n, int k) {
	    priority_queue<int, vector<int>, greater<int>> pq;
	    for (int i = 0; i < n; i++) {
	        if (pq.size() == k) {
	            if (pq.top() < arr[i]) {
	                pq.pop();
	                pq.push(arr[i]);
	            }
	        } else {
	            pq.push(arr[i]);
	        }
	    }
	    vector<int> ans;
	    while (!pq.empty()) {
	        ans.push_back(pq.top());
	        pq.pop();
	    }
	    reverse(ans.begin(), ans.end());
	    return ans;
	}
};
