#include <iostream>
#define ll long long
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    ll n,count_0=0;
	    cin>>n;
	    for(ll i=5;i<=n; i *=5){
	        count_0 +=n/i;
	    }
	    cout<<count_0<<"\n";
	}
	return 0;
}
