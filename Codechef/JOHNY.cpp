#include <bits/stdc++.h>
using namespace std;
int search(int arr[], int n, int johny){
     int low=0,high=n-1;
     while(low<=high){
         int mid=low+(high-low)/2;
         if(arr[mid]==johny) return mid+1;
         else if(arr[mid]>johny) high=mid-1;
         else low=mid+1;
     }
     return -1;
}


int main() {
	// your code goes here
	int t;
    cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	    }
	    int k;
	    cin>>k;
	    int johny=arr[k-1];
	    sort(arr,arr+n);
	    int pos=search(arr,n,johny);
	    cout<<pos<<"\n";
	}
	return 0;
}
