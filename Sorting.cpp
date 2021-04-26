#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for(int a_i = 0; a_i < n; a_i++){
    	cin >> a[a_i];
    }
    // Write Your Code Here
    int count=0;
    int temp;
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-1-i;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
                count++;
            }

        }
    }

 
   cout<< "Array is sorted in " << count << " swaps." << endl;
   cout<< "First Element: " << a[0] << endl;
   cout<< "Last Element: " << a[n-1] << endl;
    return 0;
}
