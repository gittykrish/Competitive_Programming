#include <bits/stdc++.h>
using namespace std;

int main() {
	int Thigh,Tlow,Nhigh,Nlow;
	int t;
	cin>>t;
	while(t--){
	    cin>>Thigh>>Tlow>>Nhigh>>Nlow;
	    float avgT=(Thigh+Tlow)/2.0;
	    float avgN=(Nhigh+Nlow)/2.0;
	    
	    avgT-avgN>0?cout<<fixed<<setprecision(1)<<avgT-avgN<<" DEGREE(S) ABOVE NORMAL\n":cout<<fixed<<setprecision(1)<<avgN-avgT<<" DEGREE(S) BELOW NORMAL\n";
	}
	return 0;
}
