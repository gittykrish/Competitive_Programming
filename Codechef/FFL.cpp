#include <bits/stdc++.h>
using namespace std;

int main() 
{int test;
cin>>test;
int n,s;
while(test--)
{cin>>n>>s;
 int pr[n],br[n];
 for(int i=0;i<n;i++)
 cin>>pr[i];
 for(int i=0;i<n;i++)
 cin>>br[i];
 int p1=100,p2=100;
 for(int i=0;i<n;i++)
 {if(br[i]==0 && pr[i]<p1)
  {
     p1=pr[i]; 
  }
  if(br[i]==1 && pr[i]<p2)
     p2=pr[i];
 }
 
 if((p1+p2)<=(100-s)) 
 cout<<"yes"<<endl;
 else
 cout<<"no"<<endl;
}
	
	return 0;
}