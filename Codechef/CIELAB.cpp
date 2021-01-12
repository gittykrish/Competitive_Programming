#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int a,b;
	cin>>a>>b;
	int res=abs(a-b);
	if(res%10<9) res++;
	else res--;
	
	cout<<res<<"\n";
	return 0;
}
