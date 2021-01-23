#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        long long int a[n],sum=0;
        for(int i=0;i<n;i++){
           cin>>a[i];
        }
        sort(a,a+n,greater<int>());
        for(int i=0;i<n;i++){
            a[i]-=i;
            
            sum+=a[i]<0?0:a[i];
        }
        cout<<sum%1000000007<<"\n";
    }
    return 0;
}
