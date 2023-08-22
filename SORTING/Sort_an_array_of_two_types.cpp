#include<bits/stdc++.h>
using namespace std;

int32_t main()
{
   int n;
   int arr[]={0,1,1,0,0,1,1,0};
   n=sizeof(arr)/sizeof(arr[0]);
   sort(arr,arr+n);
   for(int i=0;i<n;i++)
   cout<<arr[i]<<" ";
    return 0;
}