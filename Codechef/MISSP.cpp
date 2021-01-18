#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int type=0;
	     while(n--){
	         int a;
	         cin>>a;
	         type ^=a;
	     }
	     cout<<type<<"\n";
	}
	return 0;
}
