#include<bits/stdc++.h>
using namespace std;
int main(){
    int tc;
    cin>>tc;
    while(tc--){
        int k,a=0,m=9;
        cin>>k;
        if(k%8==0){
            m=8;
        }
        if(k<=8){
            for(int i=1;i<9;i++){
                for(int j=1;j<9;j++){
                    if(i==1 &&j==1){
                        cout<<"O";
                    }else if(k==8){
                        if(i==2){
                            cout<<"X";
                        }else{
                            cout<<".";
                        }
                    }else if(k<8){
                        if((j==k+1 && i==1)||(j<=k+1 && i==2)){
                            cout<<"X";
                            
                        }
                      
                        else{
                            cout<<".";
                        }
                            
                    }
                }
                cout<<"\n";
            }
            
        }else{
            int count=0;
            for(int i=1;i<9;i++){
                for(int j=1;j<9;j++){
                    count++;
                    if(i==1 && j==1){
                        cout<<"O";
                    }
                   else if(count>=k+1 && count<=k+m){
                       
                        cout<<"X";
                    }
                    else{
                        cout<<".";
                    }
                }
                cout<<"\n";
            }
        }
    }
    return 0;
}
