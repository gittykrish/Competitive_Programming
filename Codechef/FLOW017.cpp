#include<bits/stdc++.h>
using namespace std;
/*
void solve(){
    int t;
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        if((a>b && a>c)||(a<b && a>c)) cout<<a<<"\n";
        else if((b>a && b<c) ||(b<a && b>c)) cout<<b<<"\n";
        else cout<<c<<"\n";
    }
}   */
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    vector<int>v;
	    int a,b,c;
	    cin>>a>>b>>c;
	    v.push_back(a);
	    v.push_back(b);
	    v.push_back(c);
	    sort(v.begin(),v.end());
	    cout<<v[1]<<"\n";
	    
	}
	return 0;
}
