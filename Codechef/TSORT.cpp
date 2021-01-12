#include<bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int n,i;
    cin>>n;
    int r[n];
    for(i=0;i<n;i++){
        cin>>r[i];
    }
    sort(r, r+n);
    for(i=0;i<n;i++){
        cout<<r[i]<<"\n";
    }
	return 0;
}
