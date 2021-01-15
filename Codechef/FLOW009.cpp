#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    double q,p,res;
	    cin>>q>>p;
	    if(q>1000){
	        res=q*p*0.90;
	    }else{
	        res=q*p*1.0;
	    }
	    cout<<fixed<<setprecision(6)<<res<<"\n";
	}
	return 0;
}
