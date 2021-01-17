#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    char ch;
	    cin>>ch;
	    string res;
	    switch(ch){
	        case 'b':
	        case 'B':res="BattleShip";break; 
	        case 'c':
	        case 'C':res="Cruiser";break;
	        case 'd':
	        case 'D':res="Destroyer";break;
	        case 'f':
	        case 'F':res="Frigate";break;
	    }
	    cout<<res<<"\n";
	}
	return 0;
}
