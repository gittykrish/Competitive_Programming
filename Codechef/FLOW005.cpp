#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	int Note[6]={1,2,5,10,50,100};
	while(t--){
	    int n;
	    cin>>n;
	    int count=0;
	    for(int i=5;i>=0;i--){
	        count +=n/Note[i];
	        n %=Note[i];
	        if(n==0) break;
	    }
	    cout<<count<<"\n";
	}
	return 0;
}
