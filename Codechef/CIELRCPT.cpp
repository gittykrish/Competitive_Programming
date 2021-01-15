#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int count=0;
	    for(int i=11;i>=0;i--){
	        count +=n/(1<<i);
	        n %=(1<<i);
	        if(n==0) break;
	    }
	    cout<<count<<"\n";
	}
	return 0;
}
