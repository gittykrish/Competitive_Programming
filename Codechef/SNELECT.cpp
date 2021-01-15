#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    string str;
	    cin>>str;
	    int len=str.size(),scount=0,mcount=0;
	    for(int i=0;i<len;i++){
	        if(str[i]=='s' && str[i+1]=='m'){
	            mcount++;
	            i++;
	        }
	        else if(str[i]=='m' && str[i+1]=='s'){
	            mcount++;
	            i++;
	        }
	        else if(str[i]=='s') scount++;
	        else mcount++;
	    }
	    if(scount>mcount)cout<<"snakes\n";
	    else if(scount<mcount) cout<<"mongooses\n";
	    else cout<<"tie\n";
	}
	return 0;
}
