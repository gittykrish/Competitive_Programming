#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    double sal,gsal;
	    cin>>sal;
        if(sal< 1500){
            gsal=sal*2.0;
        }
        else{
            gsal=sal+500+sal*0.98;
        }
        cout <<fixed<<setprecision(2)<<gsal<<"\n";
	   
	}
	return 0;
}