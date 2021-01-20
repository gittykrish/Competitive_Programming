#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int x=0,y=0;
        int a[4*n-1],b[4*n-1];
        for(int i=0;i<4*n-1;i++){
            cin>>a[i]>>b[i];
        }
        for(int i=0;i<4*n-1;i++){
            x=x^a[i];
            y=y^b[i];
        }
        cout<<x<<" "<<y<<"\n";
    }
    
    return 0;
}