#include <iostream>
using namespace std;

int main() {
	// your code goes here
	    int t,count=0;
	    cin>>t;
	    
	      while(t>0){
	          count +=1;
	          t /=10;
	      }  
	      if(count==1 || count==0) cout<<"1";
	      else if(count==2) cout<<"2";
	      else if(count==3) cout<<"3";
	      else cout<<"More than 3 digits";
	    
	    
	return 0;
}
