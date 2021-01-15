#include <iostream>
using namespace std;
long fact(int n){
    if(n<=1) return 1;
    return n*fact(n-1);
}
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    cout<<fact(n)<<"\n";
	}
	return 0;
}
