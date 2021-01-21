#include <bits/stdc++.h>
using namespace std;

int main() {
	int test;
	int n,q,i;
	cin>>test;
	while(test--)
	{cin>>n>>q;
	 char str[n];
      cin>>str;
      int count[26]={0};
      
     for(i=0;i<n;i++) 
      count[str[i]%97]++;
      while(q--)
      {
          long int c,sum=0;
          cin>>c;
        for(i=0;i<26;i++)
         {
            if((count[i]-c)>0)
            sum+=(count[i]-c);
         }
       cout<<sum<<endl;
      }
	}
	return 0;
}