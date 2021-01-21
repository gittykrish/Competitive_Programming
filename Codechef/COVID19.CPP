#include<bits/stdc++.h>
using namespace std;
int main()
{int t,n,i,j;
 cin>>t;
 while(t--)
 {cin>>n;
 int a[n];
 for(i=0;i<n;i++)
 cin>>a[i];
int max=1,min=n,c=1,i=0;
	    for(i=1;i<n;++i)
	    {
	        if((a[i]-a[i-1])<=2)
	        c++;
	        else
	        {
             if(min>c)
              min=c;
              if(max<c)
               max=c;
	            c=1;
	        }
	    }
	  
 if(min>c)
 min=c;
 if(max<c)
 max=c;
 
cout<<min<<" "<<max<<endl;
}
return 0;
}