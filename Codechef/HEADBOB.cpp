#include <bits/stdc++.h>
using namespace std;
string headbob(string str){
    int n=str.size();
    for(int i=0;i<n;i++){
        if(str[i]!='N'){
            if(str[i]=='Y') return "NOT INDAIN";
            else return "INDIAN";
        }
    }
    return "NOT SURE";
}
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    string str,res;
	    cin>>str;
	    res=headbob(str);
	    cout<<res<<"\n";
	}
	return 0;
}
