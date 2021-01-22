#include<iostream>
using namespace std; 
int main()
{
int a,b,area,peri; 
cin>>a>>b; 
area=a*b;
peri=2*(a+b);
if(area>peri)
{
cout<<"Area"<<endl; 
cout<<area; 
}
else if(area<peri)
{
cout<<"Peri"<<endl;
cout<<peri; 
}
else
{
cout<<"Eq"<<endl;
cout<<peri; 
}
return 0;
}