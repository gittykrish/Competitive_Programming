#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,m,k;
	    cin>>n>>m>>k;
	    int res=abs(n-m);
	    if(k>=res) cout<<"0\n";
	    else cout<<res-k<<"\n";
	}
	
	return 0;
}
