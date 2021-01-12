#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int a;
	double b, res;
	cin>>a>>b;
	if(a<=b-0.50 && a%5==0)
	    res=b-a-0.50;
	else res=b;
	cout<<fixed<<setprecision(2)<<res<<"\n";
	return 0;
}
