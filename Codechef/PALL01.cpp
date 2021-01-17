#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    string str;
	    cin>>str;
	    int n= str.size();
	    bool flag=true;
	    for(int i=0;i<n/2;i++){
	        if(str[i]!=str[n-1-i]) flag=false;break;
	    }
	    if(flag)cout<<"wins\n";
	    else cout<<"loses\n";
	}
	return 0;
}
