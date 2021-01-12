#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	   int n;
	   cin>>n;
	   int count=0;
	   while(n>0){
	       int r=n%10;
	       if(r==4){
	           count++;
	       }
	       n=n/10;
	   }
	   cout<<count<<"\n";
	   
	}
	return 0;
}
