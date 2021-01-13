#include <bits/stdc++.h>
using namespace std;



int main()
{
    int t;
    cin>>t;
    int p=0,s=0;
    int a=0,b=0;
    while(t--)
    {
        int c,d;
        cin>>c>>d;
        a+=c;
        b+=d;
        if(a-b>s)
        {
            s=a-b;
            p=1;
        }
        else if(b-a>s)
        {
            s=b-a;
            p=2;
        }
    }
    cout<<p<<" "<<s<<endl;
   return 0;
}
/*

//2nd method

void function(){
    	int t;
	cin>>t;
	int max=0,player;
	 int sum_a=0,sum_b=0;
	while(t--){
	    int a,b;
	    cin>>a>>b;
	   sum_a +=a;
	   sum_b +=b;
	    if(sum_a-sum_b>max){
	        max=sum_a-sum_b;
	        player=1;
	    }
	    if(sum_b-sum_a>max){
	        max=sum_b-sum_a;
	        player=2;
	    }
	    
	}
	cout<<player<<" "<<max<<"\n";

}

*/