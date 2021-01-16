#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n,i,flag=0;;
	cin>>n;
	for(i=2;i<n/2;i++){
	    if(n%i==0){
	        flag=1;
	        break;
	    }
	}
	if(flag==1){
	    cout<<"No";
	}else{
	    cout<<"Yes";
	}
	return 0;
}
