#include<iostream>
using namespace std;
int main()
 {
	int t,arr[100];
cin >> t ;
while(t--)
{
int n;
cin >> n;
for(int i = 1 ; i <= n ; i++)
{
cin >> arr[i];
}
for(int i = n ; i > 0 ; i--){
cout << arr[i] <<" ";
}
cout << endl;
}
return 0;
}

// Another Solution

#include <iostream>
using namespace std;

int main() {
     int t;
     cin>>t;
     
     while(t--)
     {
         int n;
         cin>>n;
         int arr[n];
         for(int i = 0; i < n; i++)
          cin>>arr[i];
          
          for(int i = n-1; i >= 0; i--)
           cout<<arr[i]<<" ";
           
           cout<<endl;
     }
	return 0;
}
