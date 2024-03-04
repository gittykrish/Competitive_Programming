#include<stdio.h>
int main()
{
 int tes,i,rem;
 long long int n,temp; 
 scanf("%d",&tes);
 
 for(i=1;i<=tes;i++)
 {
     scanf("%lld",&n);
        
     int count=0;
     
     while(count!=3)
     {
       n++;
        temp=n;
        count=0;
                
        while(temp!=0)
         {
            rem=temp%10;
            
            temp=temp/10;
            
            if(rem==3)
             {
               count++;
             } 
            if(count==3)
             {
               break;
             }
         }
      
     }
 
 printf("%lld\n",n);
 
 }


return 0;
}
