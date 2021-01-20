#include <bits/stdc++.h>

using namespace std;

int getvalue(long int A[], int size, long int element) {
   int start = 0;
   int end = size-1;
   while(start<=end) {
      int mid = (start+end)/2;
      if( A[mid]<element && A[mid+1]>element) {
         return mid;
      } else if( element < A[mid] ) {
         end = mid;
      } else {
         start = mid+1;
      }
   }
}
int main(){ 

    int test;
    cin>>test;
   while(test--){
        int n;
         cin>>n;
        long int a[n];
         for(int i=0;i<n;i++)
            cin>>a[i];
         int q;
         cin>>q;
         while(q--){
             long int x,y;
             cin>>x>>y;
             int c=0;
              if(x+y<a[0])
              cout<<"0"<<endl;
            else if (binary_search(a, a + n,x+y))
             cout<<"-1"<<endl;
            else if(a[n-1]<x+y)
            cout<<n<<endl;
            else{
               c=getvalue(a,n,(x+y));
               cout<<c+1<<endl;
            }
       }
    }
	return 0;
}