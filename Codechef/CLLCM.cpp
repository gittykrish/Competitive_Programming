#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        int flag=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            if(a[i]%2==0){
                flag=1;
                break;
            }
        }
        if(flag==0){
            cout<<"YES\n";
        }else{
            cout<<"NO\n";
        }
    }
    
    return 0;
}