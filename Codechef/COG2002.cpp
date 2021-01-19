#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int i;
        vector<long int>v;
        for(i=0;i<n;i++){
            long int a;
            cin>>a;
            v.push_back(a);
        }
        long int score=0;
        for(i=0;i<n;i++){
            long int sum=0;
            sum=v[i]+v[(i+1)%n]+v[(i+2)%n];
            if(score<sum){
                score=sum;
            }
        }
        cout<<score<<"\n";
    }
    return 0;
}