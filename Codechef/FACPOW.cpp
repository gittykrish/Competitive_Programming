/*
#include<bits/stdc++.h>
#define ll long long int
using namespace std;

vector<ll> factor(ll n){
    vector<ll>v;
    for(ll i=2;i<=n/2;i++){
        if(n%i==0)
            v.push_back(i);
    }
    v.push_back(n);
    return v;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        ll x,k;
        cin>>x>>k;
        vector<ll>vx,vk;
        vx=factor(x);
        vk=factor(k);
        ll sum_x=0;
        for(ll i=0;i<=vx.size();i++){
            sum_x +=pow(vx[i],k);
        }
        ll sum_k=0;
        for(ll i=0;i<vk.size();i++){
            sum_k +=vk[i];
        }
        sum_k=sum_k*x;
        cout<<sum_x<<" "<<sum_k<<"\n";
    }
    return 0;
}
*/
#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        ll x,k;
        cin>>x>>k;
    
        ll sum_x=0,sum_k=0;
        for(ll i=2;i<=x;i++){
            if(x%i==0)
                sum_x +=pow(i,k);
        }
    
        for(ll i=2;i<=k;i++){
            if(k%i==0)
                sum_k +=i*x;
        }
    
        cout<<sum_x<<" "<<sum_k<<"\n";
    }
}