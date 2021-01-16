#include<bits/stdc++.h>
using namespace std;
void countFreq(long long int arr[],int n){
    unordered_map<long long int, long long int> mp; 
    for (int i = 0; i < n; i++) 
        mp[arr[i]]++; 
   
    for (int i = 0; i < n; i++) { 
      if (mp[arr[i]] != -1) 
      { 
          cout << arr[i] << ":" << mp[arr[i]] << endl; 
          mp[arr[i]] = -1; 
      } 
    } 
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        long long int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        sort(arr, arr+n);
        countFreq(arr,n);
    }
    return 0;
}