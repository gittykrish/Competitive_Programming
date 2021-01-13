#include<iostream>
using namespace std;

int gcd(int a,int b){
    return a?gcd(b%a,a):b;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    long int a,b,c;
    cin>>t;
    while(t--){
    	cin>>a>>b;
    	c=gcd(a,b);
    	cout<<c<<" "<<a*b/c<<"\n";
    }
	return 0;
}