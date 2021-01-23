#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
    int n,q;
    cin>>n>>q;
    int f,d,s=0;
    long long ans=0;
    while(q--){
        cin>>f>>d;
        ans +=abs(s-f)+abs(d-f);
        s=d;
    }
    cout<<ans<<"\n";
    }
    return 0;
}