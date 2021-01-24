#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ll n,ans;
    string s;
    cin>>n;
    cin>>s;
    for(ll i=n-1;i>=0;i--)
    {
        if(s[i]=='1')
        {
            ans=n-i-1;
            break;
        }
    }
    cout<<ans;
    return 0;
}

