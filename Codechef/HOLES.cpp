#include<bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    string str;
	    cin>>str;
	    int count=0;
	    for(int i=0;i<str.size();i++){
	        if(str[i]=='A'||str[i]=='D'||str[i]=='O'||str[i]=='P'||str[i]=='R'||str[i]=='Q') count++;
	        else if(str[i]=='B') count +=2;
	    }
	    
	    cout<<count<<"\n";
	}
	
	return 0;
}