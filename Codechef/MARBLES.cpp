#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
#define fi first
#define se second
#define mem(a,b) memset(a,b,sizeof(a))


using namespace std;

ll binomialCoff(ll n, ll k){
    ll res=1;
    if(k>n-k) k=n-k;
    for(ll i=0; i<k; i++){
        res *= (n-i);
        res /= (i+1);
    }
    return res;
}

void solve(){
    ll n,k;
    cin>>n>>k;
    cout<<binomialCoff(n-1,k-1)<<"\n";
    
}
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    solve();
	}
	
	return 0;
}

