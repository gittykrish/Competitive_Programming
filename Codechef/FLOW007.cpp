
#include<bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
   int n,t;
   cin>>t;
   while(t--){
       cin>>n;
       int res=0,r;
       while(n>0){
            r=n%10;
           n=n/10;
           res=res*10+r;
       }
       cout<<res<<"\n";
   }
   
	return 0;
}

