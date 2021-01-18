#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int arr[n],count=1;
	    for(int i=0;i<n;i++)cin>>arr[i];
	    for(int i=0;i<n-1;i++){
	        if(arr[i]<arr[i+1]) arr[i+1]=arr[i];
	        else count++;
	    }
	    cout<<count<<"\n";
	}
	return 0;
}
