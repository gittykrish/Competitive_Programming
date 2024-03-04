#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n,count_even=0,count_odd=0;
	cin>>n;
	while(n--){
	    int a;
	    cin>>a;
	    if(a%2==0)count_even++;
	    else count_odd++;
	}
	if(count_even>count_odd) cout<<"READY FOR BATTLE\n";
	else cout<<"NOT READY\n";
	return 0;
}

// check
