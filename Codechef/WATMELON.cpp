#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	    }
	    int sum=0;
	    for(int i=0;i<n;i++)sum +=arr[i];
	    if(sum>=0)cout<<"YES\n";
	    else cout<<"NO\n";
	}
	return 0;
}