#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int count=0;
        int input;
        vector<int>v;
        while(cin>>input){
            if(input==-1)
                break;
            v.push_back(input);
            if(input>30)
                count++;
        }
        int sum=0;
        int index_sum=0;
        for(int i=0;i<v.size();i++){
            if(v[i]%2==0){
                index_sum +=i+1;
                sum +=v[i]*(i+1);
            }
        }
        cout<<count<<" ";
        printf("%.2f",sum/(float)index_sum);
        cout<<"\n";
    }
    return 0;
}