#include <iostream>
using namespace std;

int main() {
	int test,n;
	cin>>test;
	while(test--)
	{
	 cin>>n;
	 string s;
	 cin>>s;
	 int i=0;
	 char ch='z';
	 while(i<n)
	 {
	   if(s[i]<=ch)
	   ch=s[i];
	   i++;
	 }
	 cout<<ch<<endl;   
	}
	return 0;
}