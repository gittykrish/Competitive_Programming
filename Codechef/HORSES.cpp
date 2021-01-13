#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++) cin>>arr[i];
	    sort(arr,arr+n);
	    int min=INT_MAX;
	    for(int i=1;i<n;i++){
	       int diff=arr[i]-arr[i-1];
	        if(diff<min) min=diff;
	    }
	    cout<<min<<"\n";
	}
	return 0;
}