#include <bits/stdc++.h>
using namespace std;
string headbob(string str , int n){
  
     string res="NOT SURE";
    for(int i=0;i<n;i++){
        if(str[i]!='N'){
            if(str[i]=='I'){
                res="INDIAN";
                break;
            }
            else 
            { 
                res="NOT INDIAN";
                break;
            }
        }
        
    }
    return res;
}
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    string str,res;
	    cin>>str;
	    res=headbob(str,n);
	    cout<<res<<"\n";
	}
	return 0;
}
