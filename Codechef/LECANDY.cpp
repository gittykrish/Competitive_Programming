#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        long long int c;
        cin>>n>>c;
        for(int i=0;i<n;i++){
            int a;
            cin>>a;
            c -=a;
        }
        if(c>=0){
            cout<<"Yes\n";
        }else{
            cout<<"No\n";
        }
    }
}