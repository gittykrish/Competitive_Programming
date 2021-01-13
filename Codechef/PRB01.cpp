#include<bits/stdc++.h>

using namespace std;
void isprime(int n){
    int sq=sqrt(n);
    string res="yes";
    if(n==0) res="no";
    if(n==1) res="no";
    for(int i=2;i<=sq;i++){
        if(n%i==0){
            res="no";
            break;
        }
    }
    cout<<res<<"\n";
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        isprime(n);
    }
    return 0;
}