#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,i;
	    cin>>n;
	    int a[n],b[n],res[n];
	    for(i=0;i<n;i++){
	        cin>>a[i];
	    }
	    for(i=0;i<n;i++){
	        cin>>b[i];
	    }
	    for(i=0;i<n;i++){
	        res[i]=20*a[i]-10*b[i];
	    }
	    int max=res[0];
	    for(i=1;i<n;i++){
	        if(res[i]>max){
	            max=res[i];
	        }
	    }
	    if(max<0){
	        cout<<"0";
	    }else{
	        cout<<max;
	    }
	    cout<<"\n";
	}
	
	return 0;
}