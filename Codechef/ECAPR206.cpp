#include<bits/stdc++.h>
using namespace std;
long long int greedyDD(int arr[], int n,int k){
    long long int res = 0; 
    for (int i=0; i<k; i++) 
       res += arr[i]; 
    long long int curr_sum =res; 
    for (int i=k; i<n+k; i++) 
    { 
       curr_sum +=arr[i%n]-arr[(i-k)%n]; 
       res =max(res, curr_sum); 
    } 
  
    return res; 
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        cout<<greedyDD(arr,n,k)<<"\n";
    }
    return 0;
}