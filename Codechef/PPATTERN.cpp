#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    //cout<<"a";
	    int n;
	    cin>>n;
	    int ans=1;
	    int a[100][100];
	    int i=0;
	    for(int j=0;j<n;j++){
	            ans=ans+j;
	            a[i][j]=ans;
	        
	    }
	    for(int i=1;i<n;i++){
	        for(int j=0;j<n-1;j++){
	            a[i][j]=a[i-1][j+1]+1;
	        }
	        a[i][n-1]=a[i][n-2]+n-i;
	    }
	    for(int i=0;i<n;i++){
	        for(int j=0;j<n;j++){
	            cout<<a[i][j]<<" ";
	        }cout<<"\n";
	    }
	}
	return 0;