#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    if(n%10==0){
	        cout<<"0";
	    }
	    else if(n%5==0){
	        cout<<"1";
	    }else{
	        cout<<"-1";
	    }
	    cout<<"\n";
	   
	}
	
	return 0;
}
