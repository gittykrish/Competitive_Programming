#include<bits/stdc++.h>
using namespace std;

void stayHome(int n){
    int count=0,factor;
    for(int i=2;i<=n;i++){
        if(n%i==0)
            count++;
        if(count==2){
            factor=i;
            break;
        }
    }
    count=0;
    int index,res=0,max=0;
    while(n>0){
        count++;
        int r=n%10;
        if(max<=r){
            max=r;
            index=count;
        }
        if(r%2==0)
            r=r+1;
        res=res*10+r;
        n=n/10;
    }
    n=0;
    while(res>0){
        int r=res%10;
        n=n*10+r;
        res=res/10;
    }
    cout<<factor<<" "<<index<<" "<<n<<"\n";
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        stayHome(n);
    }
    return 0;
}