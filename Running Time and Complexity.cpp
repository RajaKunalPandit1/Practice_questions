#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;



 
int main(){
    int t,n,i,f=0;

    cin>>t;
   
    while(t--){
        cin>>n;
        f=0;
     
        int sq=sqrt(n);
        for(int i=2;i<=sq;i++){
            if(n%i==0){
                f=1;
                break;
            }
        }
         if(n==0||n==1){
            f=1;
        }
        if(f==1)cout<<"Not prime"<<endl;
        else cout<<"Prime"<<endl;
    }
    return 0;
}
