#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int s[n];
        for(int i=0;i<n;i++){
            cin>>s[i];
        }
        long int sum=0;
        for(int i=0;i<n-1;i++){
            sum +=abs(s[i+1]-s[i])-1;
        }
        cout<<sum<<"\n";
    }
    return 0;
}