Output Status:
Problem Solved Successfully 
Total Points Scored:
4/4
Total Time Taken:
0.0/1.6
Your Accuracy:
20%
Attempts No.:
5

#include <bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
 {
     
     int t,n,k;
     cin>>t;
     while(t--){
         cin>>n>>k;
         int arr[n];
         for(int i=0;i<n;i++){
             cin>>arr[i];
         }
         
         sort(arr,arr+n);
         for(int i=0;i<n;i++){
             cout<< arr[i] << " ";
         }
         cout<< "" << endl;
     }
     
	return 0;
}

// Another Solution

#include <bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin >> t;
while (t--)
{
int n, k;
cin >> n >> k;

vector<int> v;
for (int i = 0; i < n; i++)
{
int x;
cin >> x;
v.push_back(x);
}

priority_queue<int, vector<int>, greater<int>> min_heap;

for (int i = 0; i <= k; i++)//pushing k values in heap
{
min_heap.push(v[i]);
}

for (int i = k + 1; i < n; i++)//building heap and extracting min
{
cout << min_heap.top() << " ";
min_heap.pop();
min_heap.push(v[i]);
}

while (min_heap.size() > 0)//printing remaining elements
{
cout << min_heap.top() << " ";
min_heap.pop();
}

cout << endl;
}
}
