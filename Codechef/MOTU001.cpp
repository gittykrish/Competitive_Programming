#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long int a,b,c;
        cin>>a>>b>>c;
        long long int res;
        if(c%a==b){
            res=c;
        }else if(c%a==0 || c%a<b){
            res=(c/a-1)*a +b;
        }else{
            res=c/a*a+b;
        }
        cout<<res<<"\n";
    }
    return 0;
}