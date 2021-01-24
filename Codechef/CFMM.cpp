#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,i,count=INT_MAX,j;
	      cin>>n;
	       string s[n];
	      int c,o,d,e,h,f;
	      c=o=d=e=h=f=0;
	       for(i=0;i<n;i++)
	       {
	           cin>>s[i];
	           for(j=0;j<s[i].size();j++)
	          {
	              if(s[i][j]=='c')c++;
	              if(s[i][j]=='o')o++;
	              if(s[i][j]=='d')d++;
	              if(s[i][j]=='e')e++;
	              if(s[i][j]=='h')h++;
	              if(s[i][j]=='f')f++;
	              
	          }
	           
	       }
	       c=c/2;
	       e=e/2;
	       count=min(count,c);
	       count=min(count,o);
	       count=min(count,d);
	       count=min(count,e);
	       count=min(count,h);
	       count=min(count,f);
	       cout<<count<<endl;
	}
	return 0;
}
