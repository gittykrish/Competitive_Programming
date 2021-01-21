#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    long long sum=0;
    while(n--){
        int b,d;
        cin>>b>>d;
        sum=sum+(d-b)+1;
        
    }
    cout<<sum%1000000007;
}