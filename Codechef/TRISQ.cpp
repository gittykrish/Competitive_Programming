#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int res= n/2*(n/2-1)/2;
	    cout<<res<<"\n";
	}
	return 0;
}
