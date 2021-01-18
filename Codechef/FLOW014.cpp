#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int hard,ten;
	    double carb;
	    cin>>hard>>carb>>ten;
	    if(hard>50 && carb<0.7 && ten>5600)cout<<"10\n";
	    else if(hard>50 && carb<0.7) cout<<"9\n";
	    else if(carb<0.7 && ten>5600) cout<<"8\n";
	    else if(hard>50 && ten>5600) cout<<"7\n";
	    else if(hard>50||carb<0.7||ten>5600) cout<<"6\n";
	    else cout<<"5\n";
	}
	return 0;
}
