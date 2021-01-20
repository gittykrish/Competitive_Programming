#include<bits/stdc++.h>
using namespace std;
int getSum(long int n){
    int sum = 0; 
    while (n != 0) 
    { 
     sum = sum + n % 10; 
     n = n/10; 
    }  
    return sum; 
}
int power(long int n){
    if(n<10){
        return n;
    }
    return getSum(n);
    
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int count_mp=0;
        int count_cp=0;
        while(n--){
            long int a,b;
            cin>>a>>b;
            int cp=power(a);
            int mp=power(b);
            if(cp==mp){
                count_mp++;
                count_cp++;
            }else if(cp>mp){
                count_cp++;
            }else{
                count_mp++;
            }
        }
        if(count_mp==count_cp){
            cout<<"2 "<<count_cp<<"\n";
        }else if(count_cp>count_mp){
            cout<<"0 "<<count_cp<<"\n";
        }else{
            cout<<"1 "<<count_mp<<"\n";
        }
    }
    return 0;
}