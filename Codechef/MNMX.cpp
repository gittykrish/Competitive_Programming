#include<bits/stdc++.h>
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
	    long long min= *min_element(arr,arr+n);
	    
	    cout<<min*(n-1)<<"\n";
	}
	return 0;
}
