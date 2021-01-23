#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    vector<int>v;
	    for(int i=0;i<n;i++){
	        int a;
	        cin>>a;
	        if(a==1){
	            v.push_back(i);
	        }
	    }
	    int flag=0;
	    for(int i=0;i<v.size()-1;i++){
	        if(v[i+1]-v[i]<6){
	            flag=1;
	        }
	    }
	    if(flag==1){
	        cout<<"NO\n";
	    }else{
	        cout<<"YES\n";
	    }
	}
	return 0;
}
