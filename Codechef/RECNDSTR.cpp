#include<bits/stdc++.h>
using namespace std;
string leftShift(string str){
    char temp=str[0];
    int i,n=str.size();
    for(i=0;i<n-1;i++){
        str[i]=str[i+1];
    }
    str[i]=temp;
    return str;
}
string rightShift(string str){
    int i,n=str.size();
    char temp=str[n-1];
    
    for(i=n-1;i>0;i--){
        str[i]=str[i-1];
    }
    str[i]=temp;
    return str;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        string str;
        cin>>str;
        if(leftShift(str)==rightShift(str)){
            cout<<"YES\n";
        }else{
            cout<<"NO\n";
        }
        
    }
    
    return 0;
}