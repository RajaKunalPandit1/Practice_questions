#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
 {
	
	int t;
	cin>>t;
	while(t--){
	    
	    string str;
	    cin>>str;
	    
	    sort(str.begin(),str.end());
	    
	    for(int i=0;i<str.length();i++){
	        cout<< str[i];
	    }
	    cout<< endl;
	    
	}
	
	
	return 0;
}

// Another Solution 

#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while ( t-- ) {
        int ch[26] = {0};
        string s;
        cin >> s;
    for (int i = 0 ; s[i] ; i++ ) {
        ch[s[i]-'a']++;
    }
    for (int i = 0 ; i < 26 ; i++ ) {
        while ( ch[i]-- ) {
        cout << char(i+'a');
    }
}
cout << "\n";
}
return 0;
}
