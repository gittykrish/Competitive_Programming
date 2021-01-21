#include <bits/stdc++.h>
using namespace std;

int main() {
	int test,n,max,j,i,k,c=0;
	cin>>test;
	while(test--)
	{cin>>n;
	int arr[n];int count[1000];
	for(i=0;i<n;i++)
	 {cin>>arr[i];
	 }
	for(i=0;i<n;i++)
	 {
	     count[arr[i]]=1;
	 }

	 max=0;
	 for(i=1;i<=1000;i++)
	 {c=0;
	  if(count[i]!=0)
	 {
	  for(j=0;j<n;j++)
	  {
	   if(arr[j]==i)
	   {c++;
	    j++;
	   }
	  }
	  if(max<c)
	  {
	    max=c;
	    k=i;
	  }
	 }
	 }
	 cout<<k<<endl;
	}
	return 0;
}