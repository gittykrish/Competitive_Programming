#include <bits/stdc++.h>
using namespace std;

int main()
{int test;
cin>>test;
while(test--)
{int n,i=0;
 cin>>n;
string s;
cin>>s;
int c[26]={0};
for(i=0;i<n;i++)
{c[s[i]%97]++;
}
for(i=0;i<26;i++)
{if(c[i]%2!=0)
 break;
}
if(i==26)
cout<<"YES"<<endl;
else
cout<<"NO"<<endl;
}
return 0;
}